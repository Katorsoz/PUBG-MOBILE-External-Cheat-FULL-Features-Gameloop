#include "Algorithm.h"
#include "Offset.h"


FVector2D::FVector2D()
{
	this->X = 0.0f;
	this->Y = 0.0f;
}

FVector2D::FVector2D(float _X, float _Y)
{
	this->X = _X;
	this->Y = _Y;
}
FVector2D FVector2D::operator+ (const FVector2D& A)
{
	return FVector2D(this->X + A.X, this->Y + A.Y);
}

FVector2D FVector2D::operator+ (const float A)
{
	return FVector2D(this->X + A, this->Y + A);
}

FVector2D FVector2D::operator+= (const FVector2D& A)
{
	this->X += A.X;
	this->Y += A.Y;
	return *this;
}

FVector2D FVector2D::operator+= (const float A)
{
	this->X += A;
	this->Y += A;
	return *this;
}

FVector2D FVector2D::operator- (const FVector2D& A)
{
	return FVector2D(this->X - A.X, this->Y - A.Y);
}

FVector2D FVector2D::operator- (const float A)
{
	return FVector2D(this->X - A, this->Y - A);
}

FVector2D FVector2D::operator-= (const FVector2D& A)
{
	this->X -= A.X;
	this->Y -= A.Y;
	return *this;
}

FVector2D FVector2D::operator-= (const float A)
{
	this->X -= A;
	this->Y -= A;
	return *this;
}

FVector2D FVector2D::operator* (const FVector2D& A)
{
	return FVector2D(this->X * A.X, this->Y * A.Y);
}

FVector2D FVector2D::operator* (const float A)
{
	return FVector2D(this->X * A, this->Y * A);
}

FVector2D FVector2D::operator*= (const FVector2D& A)
{
	this->X *= A.X;
	this->Y *= A.Y;
	return *this;
}

FVector2D FVector2D::operator*= (const float A)
{
	this->X *= A;
	this->Y *= A;
	return *this;
}

FVector2D FVector2D::operator/ (const FVector2D& A)
{
	return FVector2D(this->X / A.X, this->Y / A.Y);
}

FVector2D FVector2D::operator/ (const float A)
{
	return FVector2D(this->X / A, this->Y / A);
}

FVector2D FVector2D::operator/= (const FVector2D& A)
{
	this->X /= A.X;
	this->Y /= A.Y;
	return *this;
}

FVector2D FVector2D::operator/= (const float A)
{
	this->X /= A;
	this->Y /= A;
	return *this;
}

bool FVector2D::operator== (const FVector2D& A)
{
	if (this->X == A.X
		&& this->Y == A.Y)
		return true;

	return false;
}

bool FVector2D::operator!= (const FVector2D& A)
{
	if (this->X != A.X
		|| this->Y != A.Y)
		return true;

	return false;
}
float FVector2D::Distance(FVector2D v)
{
	return float(sqrtf(powf(v.X - X, 2.0) + powf(v.Y - Y, 2.0)));
}
float FVector2D::GetX()
{
	return this->X;
}

float FVector2D::GetY()
{
	return this->Y;
}

float FVector2D::Size()
{
	return sqrt((this->X * this->X) + (this->Y * this->Y));
}
bool FVector2D::IsValid()
{
	return *this != FVector2D(0, 0);
}



BOOL Algorithm::WorldToScreen(VECTOR3 LPosition, VECTOR3 Position, VECTOR3& Screen, INT* Distance, D3DMATRIX ViewMatrix)
{
	FLOAT ScreenW = (ViewMatrix._14 * Position.X) + (ViewMatrix._24 * Position.Y) + (ViewMatrix._34 * Position.Z + ViewMatrix._44);
	*Distance = LPosition.Distance(Position) / 100.f;
	//auto Distance = LPosition.Distance(Position) / 100.f;
	if (ScreenW < 0.0001f) return FALSE;

	ScreenW = 1 / ScreenW;
	FLOAT SightX = (DX11Window::Width / 2);
	FLOAT SightY = (DX11Window::Height / 2);

	Screen.X = SightX + (ViewMatrix._11 * Position.X + ViewMatrix._21 * Position.Y + ViewMatrix._31 * Position.Z + ViewMatrix._41) * ScreenW * SightX;
	Screen.Y = SightY - (ViewMatrix._12 * Position.X + ViewMatrix._22 * Position.Y + ViewMatrix._32 * Position.Z + ViewMatrix._42) * ScreenW * SightY;

	return TRUE;
}
BOOL Algorithm::WorldToScreen1(VECTOR3 Position, VECTOR3& Screen, INT* Distance, D3DMATRIX ViewMatrix)
{
	FLOAT ScreenW = (ViewMatrix._14 * Position.X) + (ViewMatrix._24 * Position.Y) + (ViewMatrix._34 * Position.Z + ViewMatrix._44);
	*Distance = (ScreenW / 100);
	if (ScreenW < 0.0001f) return FALSE;

	ScreenW = 1 / ScreenW;
	FLOAT SightX = (DX11Window::Width / 2);
	FLOAT SightY = (DX11Window::Height / 2);

	Screen.X = SightX + (ViewMatrix._11 * Position.X + ViewMatrix._21 * Position.Y + ViewMatrix._31 * Position.Z + ViewMatrix._41) * ScreenW * SightX;
	Screen.Y = SightY - (ViewMatrix._12 * Position.X + ViewMatrix._22 * Position.Y + ViewMatrix._32 * Position.Z + ViewMatrix._42) * ScreenW * SightY;

	return TRUE;
}

VECTOR3 WorldToRadar(float Yaw, VECTOR3 Origin, VECTOR3 LocalOrigin, float PosX, float PosY, VECTOR3 Size, bool& outbuff)
{
	bool flag = false;
	double num = (double)Yaw;
	double num2 = num * 0.017453292519943295;
	float num3 = (float)std::cos(num2);
	float num4 = (float)std::sin(num2);
	float num5 = Origin.X - LocalOrigin.X;
	float num6 = Origin.Y - LocalOrigin.Y;
	VECTOR3 vector;
	vector.X = (num6 * num3 - num5 * num4) / 150.f;
	vector.Y = (num5 * num3 + num6 * num4) / 150.f;
	VECTOR3 vector2;
	vector2.X = vector.X + PosX + Size.X / 2.f;
	vector2.Y = -vector.Y + PosY + Size.Y / 2.f;
	bool flag2 = vector2.X > PosX + Size.X;
	if (flag2)
	{
		vector2.X = PosX + Size.X;
	}
	else
	{
		bool flag3 = vector2.X < PosX;
		if (flag3)
		{
			vector2.X = PosX;
		}
	}
	bool flag4 = vector2.Y > PosY + Size.Y;
	if (flag4)
	{
		vector2.Y = PosY + Size.Y;
	}
	else
	{
		bool flag5 = vector2.Y < PosY;
		if (flag5)
		{
			vector2.Y = PosY;
		}
	}
	bool flag6 = vector2.Y == PosY || vector2.X == PosX;
	if (flag6)
	{
		flag = true;
	}
	outbuff = flag;
	return vector2;
}
void VectorAnglesRadar(VECTOR3& forward, VECTOR3& angles)
{
	if (forward.X == 0.f && forward.Y == 0.f)
	{
		angles.X = forward.Z > 0.f ? -90.f : 90.f;
		angles.Y = 0.f;
	}
	else
	{
		angles.X = RAD2DEG(atan2(-forward.Z, forward.Size()));
		angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
	}
	angles.Z = 0.f;
}

VECTOR3 ToVECTOR3(float x, float y, float z)
{
	VECTOR3 tem;
	tem.X = x;
	tem.Y = y;
	tem.Z = z;
	return tem;
}
BOOL Algorithm::WorldToScreenPlayer(VECTOR3 LPosition, VECTOR3 Position, VECTOR3& Screen, INT* Distance, D3DMATRIX ViewMatrix)
{



	FLOAT ScreenW = (ViewMatrix._14 * Position.X) + (ViewMatrix._24 * Position.Y) + (ViewMatrix._34 * Position.Z + ViewMatrix._44);
	//	*Distance = (ScreenW / 100);	
	*Distance = LPosition.Distance(Position) / 100.f;
	//if (ScreenW < 0.0001f) return FALSE;

	FLOAT ScreenX = (ViewMatrix._11 * Position.X) + (ViewMatrix._21 * Position.Y) + (ViewMatrix._31 * Position.Z + ViewMatrix._41);
	FLOAT ScreenY = (ViewMatrix._12 * Position.X) + (ViewMatrix._22 * Position.Y) + (ViewMatrix._32 * (Position.Z + 85) + ViewMatrix._42);

	Screen.X = (DX11Window::Width / 2) + (DX11Window::Width / 2) * ScreenX / ScreenW;
	Screen.Y = (DX11Window::Height / 2) - (DX11Window::Height / 2) * ScreenY / ScreenW;
	FLOAT Y1 = (DX11Window::Height / 2) - (ViewMatrix._12 * Position.X + ViewMatrix._22 * Position.Y + ViewMatrix._32 * (Position.Z - 95) + ViewMatrix._42) * (DX11Window::Height / 2) / ScreenW;
	Screen.Z = Y1 - Screen.Y;

	return TRUE;
}

BOOL Algorithm::WorldToScreenBone(D3DMATRIX ViewMatrix, VECTOR3 Position, VECTOR2& Screen, INT* Distance)
{

	FLOAT ScreenW = (ViewMatrix._14 * Position.X) + (ViewMatrix._24 * Position.Y) + (ViewMatrix._34 * Position.Z + ViewMatrix._44);
	*Distance = (ScreenW / 100);
	if (ScreenW < 0.0001f) return FALSE;

	ScreenW = 1 / ScreenW;
	FLOAT SightX = (DX11Window::Width / 2);
	FLOAT SightY = (DX11Window::Height / 2);

	Screen.X = SightX + (ViewMatrix._11 * Position.X + ViewMatrix._21 * Position.Y + ViewMatrix._31 * Position.Z + ViewMatrix._41) * ScreenW * SightX;
	Screen.Y = SightY - (ViewMatrix._12 * Position.X + ViewMatrix._22 * Position.Y + ViewMatrix._32 * Position.Z + ViewMatrix._42) * ScreenW * SightY;

	return TRUE;
}


BOOL Algorithm::WorldToScreenBone1(D3DMATRIX ViewMatrix, VECTOR3 Position, VECTOR3& Screen, INT* Distance)
{

	FLOAT ScreenW = (ViewMatrix._14 * Position.X) + (ViewMatrix._24 * Position.Y) + (ViewMatrix._34 * Position.Z + ViewMatrix._44);
	*Distance = (ScreenW / 100);
	if (ScreenW < 0.0001f) return FALSE;

	ScreenW = 1 / ScreenW;
	FLOAT SightX = (DX11Window::Width / 2);
	FLOAT SightY = (DX11Window::Height / 2);

	Screen.X = SightX + (ViewMatrix._11 * Position.X + ViewMatrix._21 * Position.Y + ViewMatrix._31 * Position.Z + ViewMatrix._41) * ScreenW * SightX;
	Screen.Y = SightY - (ViewMatrix._12 * Position.X + ViewMatrix._22 * Position.Y + ViewMatrix._32 * Position.Z + ViewMatrix._42) * ScreenW * SightY;

	return TRUE;
}
D3DMATRIX Algorithm::ToMatrixWithScale(VECTOR3 translation, VECTOR3 scale, VECTOR4 rot)
{
	D3DMATRIX m;
	m._41 = translation.X;
	m._42 = translation.Y;
	m._43 = translation.Z;

	float x2 = rot.X + rot.X;
	float y2 = rot.Y + rot.Y;
	float z2 = rot.Z + rot.Z;

	float xx2 = rot.X * x2;
	float yy2 = rot.Y * y2;
	float zz2 = rot.Z * z2;
	m._11 = (1.0f - (yy2 + zz2)) * scale.X;
	m._22 = (1.0f - (xx2 + zz2)) * scale.Y;
	m._33 = (1.0f - (xx2 + yy2)) * scale.Z;

	float yz2 = rot.Y * z2;
	float wx2 = rot.W * x2;
	m._32 = (yz2 - wx2) * scale.Z;
	m._23 = (yz2 + wx2) * scale.Y;

	float xy2 = rot.X * y2;
	float wz2 = rot.W * z2;
	m._21 = (xy2 - wz2) * scale.Y;
	m._12 = (xy2 + wz2) * scale.X;

	float xz2 = rot.X * z2;
	float wy2 = rot.W * y2;
	m._31 = (xz2 + wy2) * scale.Z;
	m._13 = (xz2 - wy2) * scale.X;

	m._14 = 0.0f;
	m._24 = 0.0f;
	m._34 = 0.0f;
	m._44 = 1.0f;

	return m;
}

D3DMATRIX Algorithm::MatrixMultiplication(D3DMATRIX pM1, D3DMATRIX pM2)
{
	D3DMATRIX pOut =
	{
		pM1._11 * pM2._11 + pM1._12 * pM2._21 + pM1._13 * pM2._31 + pM1._14 * pM2._41,
		pM1._11 * pM2._12 + pM1._12 * pM2._22 + pM1._13 * pM2._32 + pM1._14 * pM2._42,
		pM1._11 * pM2._13 + pM1._12 * pM2._23 + pM1._13 * pM2._33 + pM1._14 * pM2._43,
		pM1._11 * pM2._14 + pM1._12 * pM2._24 + pM1._13 * pM2._34 + pM1._14 * pM2._44,
		pM1._21 * pM2._11 + pM1._22 * pM2._21 + pM1._23 * pM2._31 + pM1._24 * pM2._41,
		pM1._21 * pM2._12 + pM1._22 * pM2._22 + pM1._23 * pM2._32 + pM1._24 * pM2._42,
		pM1._21 * pM2._13 + pM1._22 * pM2._23 + pM1._23 * pM2._33 + pM1._24 * pM2._43,
		pM1._21 * pM2._14 + pM1._22 * pM2._24 + pM1._23 * pM2._34 + pM1._24 * pM2._44,
		pM1._31 * pM2._11 + pM1._32 * pM2._21 + pM1._33 * pM2._31 + pM1._34 * pM2._41,
		pM1._31 * pM2._12 + pM1._32 * pM2._22 + pM1._33 * pM2._32 + pM1._34 * pM2._42,
		pM1._31 * pM2._13 + pM1._32 * pM2._23 + pM1._33 * pM2._33 + pM1._34 * pM2._43,
		pM1._31 * pM2._14 + pM1._32 * pM2._24 + pM1._33 * pM2._34 + pM1._34 * pM2._44,
		pM1._41 * pM2._11 + pM1._42 * pM2._21 + pM1._43 * pM2._31 + pM1._44 * pM2._41,
		pM1._41 * pM2._12 + pM1._42 * pM2._22 + pM1._43 * pM2._32 + pM1._44 * pM2._42,
		pM1._41 * pM2._13 + pM1._42 * pM2._23 + pM1._43 * pM2._33 + pM1._44 * pM2._43,
		pM1._41 * pM2._14 + pM1._42 * pM2._24 + pM1._43 * pM2._34 + pM1._44 * pM2._44
	};

	return pOut;
}

VECTOR3 Algorithm::GetBoneWorldPosition(DWORD ActorAddv, DWORD BoneAddv)
{
	FTTransform Bone = Utility::ReadMemoryEx<FTTransform>(BoneAddv);
	FTTransform Actor = Utility::ReadMemoryEx<FTTransform>(ActorAddv);
	D3DMATRIX BoneMatrix = ToMatrixWithScale(Bone.Translation, Bone.Scale3D, Bone.Rotation);
	D3DMATRIX ComponentToWorldMatrix = ToMatrixWithScale(Actor.Translation, Actor.Scale3D, Actor.Rotation);
	D3DMATRIX NewMatrix = MatrixMultiplication(BoneMatrix, ComponentToWorldMatrix);

	VECTOR3 BonePos;
	BonePos.X = NewMatrix._41;
	BonePos.Y = NewMatrix._42;
	BonePos.Z = NewMatrix._43;

	return BonePos;
}

void Algorithm::AddLine(const ImVec2& from, const ImVec2& to, const ImColor Color, float thickness)
{
	auto window = ImGui::GetCurrentWindow();

	window->DrawList->AddLine(from, to, ImGui::ColorConvertFloat4ToU32(Color), thickness);
}
void Algorithm::DrawRedZone3Dcircle(D3DMATRIX matrix, VECTOR3 LPosition, VECTOR3 position, FLOAT points, FLOAT radius, FLOAT thickness, ImColor Color)
{
	int dist;
	float step = (float)IM_PI * 2.0f / points;

	for (float a = 0; a < (IM_PI * 2.0f); a += step)
	{
		VECTOR3 start = { radius * cosf(a) + position.X,
			radius * sinf(a) + position.Y,
			position.Z };


		VECTOR3 end = {
			radius * cosf(a + step) + position.X,
			radius * sinf(a + step) + position.Y,
			position.Z
		};

		VECTOR3 start2d, end2d;

		if (!Algorithm::WorldToScreen(LPosition, start, start2d, &dist, matrix) || !Algorithm::WorldToScreen(LPosition, end, end2d, &dist, matrix))
			return;
		DX11::ImGui_DX11::DrawLine(start2d.X, start2d.Y, end2d.X, end2d.Y, Color, thickness);

	}

}

void Algorithm::Draw3Dcircle(D3DMATRIX matrix, VECTOR3 LPosition, VECTOR3 position, FLOAT points, FLOAT radius, FLOAT thickness, ImColor Color)
{
	//int dist;
	//float step = (float)IM_PI * 2.0f / points;
	//
	//VECTOR3 circleCenter = (LPosition + position) * 0.5f; // Calculate the center of the circle
	//
	//// Draw the line from the circle center to the grenade position
	//VECTOR3 start2d, end2d;
	//if (!Algorithm::WorldToScreen(LPosition, circleCenter, start2d, &dist, matrix) || !Algorithm::WorldToScreen(LPosition, position, end2d, &dist, matrix))
	//	return;
	//DX11::ImGui_DX11::DrawLine(start2d.X, start2d.Y, end2d.X, end2d.Y, Color, thickness);
	//
	//// Draw the 3D circle
	//for (float a = 0; a < (IM_PI * 2.0f); a += step)
	//{
	//	VECTOR3 start = {
	//		radius * cosf(a) + circleCenter.X,
	//		radius * sinf(a) + circleCenter.Y,
	//		circleCenter.Z
	//	};
	//
	//	VECTOR3 end = {
	//		radius * cosf(a + step) + circleCenter.X,
	//		radius * sinf(a + step) + circleCenter.Y,
	//		circleCenter.Z
	//	};
	//
	//	VECTOR3 start2d, end2d;
	//	if (!Algorithm::WorldToScreen(LPosition, start, start2d, &dist, matrix) || !Algorithm::WorldToScreen(LPosition, end, end2d, &dist, matrix))
	//		continue;
	//	DX11::ImGui_DX11::DrawLine(start2d.X, start2d.Y, end2d.X, end2d.Y, Color, thickness);
	//}
	//
	//// Trace the grenade path
	//static std::vector<VECTOR3> grenadePath; // Store previous grenade positions
	//grenadePath.push_back(position);
	//
	//if (grenadePath.size() > 1) {
	//	for (size_t i = 1; i < grenadePath.size(); i++) {
	//		VECTOR3 previousPos = grenadePath[i - 1];
	//		VECTOR3 currentPos = grenadePath[i];
	//
	//		VECTOR3 previous2d, current2d;
	//		if (!Algorithm::WorldToScreen(LPosition, previousPos, previous2d, &dist, matrix) || !Algorithm::WorldToScreen(LPosition, currentPos, current2d, &dist, matrix))
	//			continue;
	//		DX11::ImGui_DX11::DrawLine(previous2d.X, previous2d.Y, current2d.X, current2d.Y, Color, thickness);
	//	}
	//}
	//
	//// Limit the number of stored positions to avoid memory growth
	//const size_t maxPathSize = 100;
	//if (grenadePath.size() > maxPathSize) {
	//	grenadePath.erase(grenadePath.begin(), grenadePath.begin() + (grenadePath.size() - maxPathSize));
	//}

	int dist;
	float step = (float)IM_PI * 2.0f / points;

	for (float a = 0; a < (IM_PI * 2.0f); a += step)
	{
		VECTOR3 start = { radius * cosf(a) + position.X,
			radius * sinf(a) + position.Y,
			position.Z };


		VECTOR3 end = {
			radius * cosf(a + step) + position.X,
			radius * sinf(a + step) + position.Y,
			position.Z
		};

		VECTOR3 start2d, end2d;

		if (!Algorithm::WorldToScreen(LPosition, start, start2d, &dist, matrix) || !Algorithm::WorldToScreen(LPosition, end, end2d, &dist, matrix))
			return;
		DX11::ImGui_DX11::DrawLine(start2d.X, start2d.Y, end2d.X, end2d.Y, Color, thickness);

	}

} //good

//FTTransform GetBoneIndex(DWORD dwbonemesh, int indexnum)
//{
//	DWORD boneAddv = Utility::ReadMemoryEx<DWORD>(dwbonemesh + Offset::MinLOD);
//	return Utility::ReadMemoryEx<FTTransform>(boneAddv + (indexnum * 0x30));
//}
//
//VECTOR3 Algorithm::GetBoneWorldPosition2(DWORD Actor, int32_t index)
//{
//	DWORD SkeletalMeshComponent = Utility::ReadMemoryEx<DWORD>(Actor + Offset::Mesh);
//	FTTransform bone = GetBoneIndex(SkeletalMeshComponent, index);
//	FTTransform ComponentToWorld = Utility::ReadMemoryEx<FTTransform>(SkeletalMeshComponent + 0x140);
//	D3DMATRIX Matrix = MatrixMultiplication(bone.ToMatrixWithScale(), ComponentToWorld.ToMatrixWithScale());
//	return VECTOR3(Matrix._41, Matrix._42, Matrix._43);
//}