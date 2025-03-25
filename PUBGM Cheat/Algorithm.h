#pragma once

#include "Includes.h"
#include "DX11Window.h"
#include "Utility.h"
#define M_PI 3.14159265358979323846f
#define RAD2DEG( x )  ( (float)(x) * (float)(180.f / IM_PI) )
#define DEG2RAD( x ) ( (float)(x) * (float)(IM_PI / 180.f) )
typedef struct D3DMATRIX1 {
	float m[4][4];
}
D3DMATRIX1, * LPD3DMATRIX;

struct VECTOR2
{
	FLOAT X;
	FLOAT Y;
};

struct VECTOR3
{


	float X;
	float Y;
	float Z;

	float  Size()
	{
		return sqrt((this->X * this->X) + (this->Y * this->Y) + (this->Z * this->Z));
	}


	VECTOR3 FVector(float _X, float _Y, float _Z)
	{
		VECTOR3 emmm;
		emmm.X = _X;
		emmm.Y = _Y;
		emmm.Z = _Z;
		return emmm;
	}

	VECTOR3  operator+ (const VECTOR3& A)
	{
		return FVector(this->X + A.X, this->Y + A.Y, this->Z + A.Z);
	}

	VECTOR3 operator+ (const float A)
	{
		return FVector(this->X + A, this->Y + A, this->Z + A);
	}

	VECTOR3  operator+= (const VECTOR3& A)
	{
		this->X += A.X;
		this->Y += A.Y;
		this->Z += A.Z;
		return *this;
	}

	VECTOR3  operator+= (const float A)
	{
		this->X += A;
		this->Y += A;
		this->Z += A;
		return *this;
	}

	VECTOR3  operator- (const VECTOR3& A)
	{
		return FVector(this->X - A.X, this->Y - A.Y, this->Z - A.Z);
	}

	VECTOR3  operator- (const float A)
	{
		return FVector(this->X - A, this->Y - A, this->Z - A);
	}

	VECTOR3 operator-= (const VECTOR3& A)
	{
		this->X -= A.X;
		this->Y -= A.Y;
		this->Z -= A.Z;
		return *this;
	}

	VECTOR3 operator-= (const float A)
	{
		this->X -= A;
		this->Y -= A;
		this->Z -= A;
		return *this;
	}

	VECTOR3  operator* (const VECTOR3& A)
	{
		return FVector(this->X * A.X, this->Y * A.Y, this->Z * A.Z);
	}

	VECTOR3  operator* (const float A)
	{
		return FVector(this->X * A, this->Y * A, this->Z * A);
	}

	VECTOR3  operator*= (const VECTOR3& A)
	{
		this->X *= A.X;
		this->Y *= A.Y;
		this->Z *= A.Z;
		return *this;
	}

	VECTOR3 operator*= (const float A)
	{
		this->X *= A;
		this->Y *= A;
		this->Z *= A;
		return *this;
	}

	VECTOR3  operator/ (const VECTOR3& A)
	{
		return FVector(this->X / A.X, this->Y / A.Y, this->Z / A.Z);
	}

	VECTOR3 operator/ (const float A)
	{
		return FVector(this->X / A, this->Y / A, this->Z / A);
	}

	VECTOR3  operator/= (const VECTOR3& A)
	{
		this->X /= A.X;
		this->Y /= A.Y;
		this->Z /= A.Z;
		return *this;
	}

	VECTOR3 operator/= (const float A)
	{
		this->X /= A;
		this->Y /= A;
		this->Z /= A;
		return *this;
	}

	bool  operator== (const VECTOR3& A)
	{
		if (this->X == A.X
			&& this->Y == A.Y
			&& this->Z == A.Z)
			return true;

		return false;
	}

	bool operator!= (const VECTOR3& A)
	{
		if (this->X != A.X
			|| this->Y != A.Y
			|| this->Z != A.Z)
			return true;

		return false;
	}
	inline float Distance(VECTOR3 v)
	{
		return float(sqrtf(powf(v.X - X, 2.0) + powf(v.Y - Y, 2.0) + powf(v.Z - Z, 2.0)));
	}
	float Dot(VECTOR3 pStart, VECTOR3 pEnd)
	{
		return (pStart.X * pEnd.X) + (pStart.Y * pEnd.Y) + (pStart.Z * pEnd.Z);
	}
};


struct VECTOR4
{
	FLOAT X;
	FLOAT Y;
	FLOAT Z;
	FLOAT W;
};

//struct D3DMATRIX
//{
//	FLOAT _11, _12, _13, _14;
//	FLOAT _21, _22, _23, _24;
//	FLOAT _31, _32, _33, _34;
//	FLOAT _41, _42, _43, _44;
//};

struct FTTransform
{
	VECTOR4 Rotation;
	VECTOR3 Translation;
	FLOAT _Padding;
	VECTOR3 Scale3D;

	D3DMATRIX ToMatrixWithScale()
	{
		D3DMATRIX m;

		m._41 = Translation.X;
		m._42 = Translation.Y;
		m._43 = Translation.Z;

		float x2 = Rotation.X + Rotation.X;
		float y2 = Rotation.Y + Rotation.Y;
		float z2 = Rotation.Z + Rotation.Z;

		float xx2 = Rotation.X * x2;
		float yy2 = Rotation.Y * y2;
		float zz2 = Rotation.Z * z2;
		m._11 = (1.0f - (yy2 + zz2)) * Scale3D.X;
		m._22 = (1.0f - (xx2 + zz2)) * Scale3D.Y;
		m._33 = (1.0f - (xx2 + yy2)) * Scale3D.Z;


		float yz2 = Rotation.Y * z2;
		float wx2 = Rotation.W * x2;
		m._32 = (yz2 - wx2) * Scale3D.Z;
		m._23 = (yz2 + wx2) * Scale3D.Y;


		float xy2 = Rotation.X * y2;
		float wz2 = Rotation.W * z2;
		m._21 = (xy2 - wz2) * Scale3D.Y;
		m._12 = (xy2 + wz2) * Scale3D.X;


		float xz2 = Rotation.X * z2;
		float wy2 = Rotation.W * y2;
		m._31 = (xz2 + wy2) * Scale3D.Z;
		m._13 = (xz2 - wy2) * Scale3D.X;

		m._14 = 0.0f;
		m._24 = 0.0f;
		m._34 = 0.0f;
		m._44 = 1.0f;

		return m;
	}
};


//struct CharacterOverrideAttrs
//{
//	float GameModeOverride_SpeedScaleModifier;//[Offset: 0x0, Size: 4]
//	float GameModeOverride_SwimSpeedScaleModifier;//[Offset: 0x4, Size: 4]
//	float GameModeOverride_EnergySpeedScaleModifier;//[Offset: 0x8, Size: 4]
//	float GameModeOverride_LastBreathSpeedScaleModifier;//[Offset: 0xc, Size: 4]
//
//};
struct WeaponOverrideAttrs
{
	float GameModeOverride_DeviationMoveModifier;//[Offset: 0x0, Size: 4]
	float GameModeOverride_DeviationStanceJumpModifier;//[Offset: 0x4, Size: 4]
	float GameModeOverride_MeleeDamageAmountModifier;//[Offset: 0x8, Size: 4]
	float GameModeOverride_GrenadeDamageRadiusModifier;//[Offset: 0xc, Size: 4]
	float GameModeOverride_GrenadeDamageAmountModifier;//[Offset: 0x10, Size: 4]
	float GameModeOverride_GunsDamageAmountModifier;//[Offset: 0x14, Size: 4]

};
struct FRotator {
	float Pitch;
	float Yaw;
	float Roll;
	//D3DXMATRIX Matrix(FRotator rot, FRotator origin = FRotator(0, 0, 0))
	//{
	//	float radPitch = (rot.Pitch * float(M_PI) / 180.f);
	//	float radYaw = (rot.Yaw * float(M_PI) / 180.f);
	//	float radRoll = (rot.Roll * float(M_PI) / 180.f);

	//	float SP = sinf(radPitch);
	//	float CP = cosf(radPitch);
	//	float SY = sinf(radYaw);
	//	float CY = cosf(radYaw);
	//	float SR = sinf(radRoll);
	//	float CR = cosf(radRoll);

	//	D3DMATRIX matrix;
	//	matrix.m[0][0] = CP * CY;
	//	matrix.m[0][1] = CP * SY;
	//	matrix.m[0][2] = SP;
	//	matrix.m[0][3] = 0.f;

	//	matrix.m[1][0] = SR * SP * CY - CR * SY;
	//	matrix.m[1][1] = SR * SP * SY + CR * CY;
	//	matrix.m[1][2] = -SR * CP;
	//	matrix.m[1][3] = 0.f;

	//	matrix.m[2][0] = -(CR * SP * CY + SR * SY);
	//	matrix.m[2][1] = CY * SR - CR * SP * SY;
	//	matrix.m[2][2] = CR * CP;
	//	matrix.m[2][3] = 0.f;

	//	matrix.m[3][0] = origin.Pitch;
	//	matrix.m[3][1] = origin.Yaw;
	//	matrix.m[3][2] = origin.Roll;
	//	matrix.m[3][3] = 1.f;

	//	return matrix;
	//}
};

struct HitPerformData {
	char chunks[12];
	float DefaultSpread;//[Offset: 0xc, Size: 4]
	float SpreadMax;//[Offset: 0x10, Size: 4]
	float HeadExtraScale;//[Offset: 0x14, Size: 4]
	float AddSpreadScale;//[Offset: 0x18, Size: 4]
	float SpreadDecreaseSpeed;//[Offset: 0x1c, Size: 4]
	float DefaultOffset;//[Offset: 0x20, Size: 4]
	float DefaultAlpha;//[Offset: 0x24, Size: 4]
	float AlphaDecreaseSpeed;//[Offset: 0x28, Size: 4]
	bool IsHeadShot;//(ByteOffset: 0, ByteMask: 1, FieldMask: 1)[Offset: 0x2c, Size: 1]

	char HeadShotSound[4];
	char BodyShotSound[4];
	char DeadlyShotSound[4];
	float CurCrosshairSpread;//[Offset: 0x6c, Size: 4]


};


struct RepMovement
{
	VECTOR3 LinearVelocity;//[Offset: 0x0, Size: 12] // Vehicle move speed
	VECTOR3 AngularVelocity;//[Offset: 0xc, Size: 12]
	VECTOR3 Location;//[Offset: 0x18, Size: 12]
	FRotator Rotation;//[Offset: 0x24, Size: 12]
	bool bSimulatedPhysicSleep;//(ByteOffset: 0, ByteMask: 1, FieldMask: 1)[Offset: 0x30, Size: 1]
	bool bRepPhysics;//(ByteOffset: 0, ByteMask: 2, FieldMask: 2)[Offset: 0x30, Size: 1]
};

VECTOR3 MULTIPLYVECT(VECTOR3 ve, float value);
VECTOR3 ADDVECTORS(VECTOR3 ve, VECTOR3 ve2);
VECTOR3 Subtract(VECTOR3 Src, VECTOR3 Dst);
struct MinimalViewInfo {
	VECTOR3 Location;
	VECTOR3 LocationLocalSpace;
	FRotator Rotation;
	float FOV;
};
struct CameraCacheEntry {
	float TimeStamp;
	char chunks[0xC];
	MinimalViewInfo POV;
};
D3DMATRIX1 ToMatrix(FRotator rot, FRotator origin);
bool WorldToScreenWithoutMatrix(VECTOR3 WorldLocation, VECTOR3& Screenlocation);
FRotator ToRotator(VECTOR3 local, VECTOR3 target);
VECTOR3 FRotatorToVector(FRotator ft);
VECTOR3 ToVECTOR3(float x, float y, float z);
VECTOR3 WorldToRadar(float Yaw, VECTOR3 Origin, VECTOR3 LocalOrigin, float PosX, float PosY, VECTOR3 Size, bool& outbuff);
void ClampAngles(FRotator& angles);
void VectorAnglesRadar(VECTOR3& forward, VECTOR3& angles);

struct FVector2D
{
	float X;
	float Y;

	FVector2D();
	FVector2D(float _X, float _Y);

	FVector2D operator+ (const FVector2D& A);
	FVector2D operator+ (const float A);
	FVector2D operator+= (const FVector2D& A);
	FVector2D operator+= (const float A);
	FVector2D operator- (const FVector2D& A);
	FVector2D operator- (const float A);
	FVector2D operator-= (const FVector2D& A);
	FVector2D operator-= (const float A);
	FVector2D operator* (const FVector2D& A);
	FVector2D operator* (const float A);
	FVector2D operator*= (const FVector2D& A);
	FVector2D operator*= (const float A);
	FVector2D operator/ (const FVector2D& A);
	FVector2D operator/ (const float A);
	FVector2D operator/= (const FVector2D& A);
	FVector2D operator/= (const float A);

	bool operator== (const FVector2D& A);
	bool operator!= (const FVector2D& A);

	float		Distance(FVector2D v);
	float GetX();
	float GetY();

	float Size();
	bool IsValid();

};


namespace Algorithm
{
	BOOL WorldToScreenBone1(D3DMATRIX ViewMatrix, VECTOR3 Position, VECTOR3& Screen, INT* Distance);
	BOOL WorldToScreen(VECTOR3 LPosition, VECTOR3 Position, VECTOR3& Screen, INT* Distance, D3DMATRIX ViewMatrix);
	BOOL WorldToScreen1(VECTOR3 Position, VECTOR3& Screen, INT* Distance, D3DMATRIX ViewMatrix);
	BOOL WorldToScreenPlayer(VECTOR3 LPosition, VECTOR3 Position, VECTOR3& Screen, INT* Distance, D3DMATRIX ViewMatrix);
	BOOL WorldToScreenBone(D3DMATRIX ViewMatrix, VECTOR3 Position, VECTOR2& Screen, INT* Distance);
	D3DMATRIX ToMatrixWithScale(VECTOR3 Translation, VECTOR3 Scale, VECTOR4 Rot);
	D3DMATRIX MatrixMultiplication(D3DMATRIX pM1, D3DMATRIX pM2);
	VECTOR3 GetBoneWorldPosition(DWORD ActorAddv, DWORD BoneAddv);
	//VECTOR3 GetBoneWorldPosition2(DWORD Actor, int32_t index);
	void AddLine(const ImVec2& from, const ImVec2& to, const ImColor Color, float thickness);
	void Draw3Dcircle(D3DMATRIX matrix, VECTOR3 LPosition, VECTOR3 position, FLOAT points, FLOAT radius, FLOAT thickness, ImColor Color);
	void DrawRedZone3Dcircle(D3DMATRIX matrix, VECTOR3 LPosition, VECTOR3 position, FLOAT points, FLOAT radius, FLOAT thickness, ImColor Color);
}
