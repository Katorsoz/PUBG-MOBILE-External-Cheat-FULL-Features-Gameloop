#include "Aimbot.h"
#include"Memory.h"
#include<thread>


bool Aimbot::InsideFov(float OverlayScreenWidth, float OverlayScreenHeight, VECTOR2 PlayerW2SBone, float FovRadius)
{
	VECTOR2 Cenpoint;
	Cenpoint.X = PlayerW2SBone.X - (OverlayScreenWidth / 2);
	Cenpoint.Y = PlayerW2SBone.Y - (OverlayScreenHeight / 2);

	if (Cenpoint.X * Cenpoint.X + Cenpoint.Y * Cenpoint.Y <= FovRadius * FovRadius)
	{
		return true;
	}


	return false;
}

bool Aimbot::InsideFov1(float OverlayScreenWidth, float OverlayScreenHeight, VECTOR3 PlayerW2SBone, float FovRadius)
{
	VECTOR3 Cenpoint;
	Cenpoint.X = PlayerW2SBone.X - (OverlayScreenWidth / 2);
	Cenpoint.Y = PlayerW2SBone.Y - (OverlayScreenHeight / 2);

	if (Cenpoint.X * Cenpoint.X + Cenpoint.Y * Cenpoint.Y <= FovRadius * FovRadius)
	{
		return true;
	}


	return false;
}


VECTOR3 Aimbot::GetClosestEnemy()
{
	float targetDistance = 9999.0;
	int dist, headdist;
	VECTOR3 EnemyTruePositions;
	VECTOR3 Screen;
	for (int i = 0; i < Data::AActorList.size(); i++) {
		if (Algorithm::WorldToScreenBone1(Esp::ViewMatrix, Data::AActorList[i].Bones.HeadPos, Screen, &dist))
		{
			if (Setting::fovcircle)
			{
				if (InsideFov1(DX11Window::Width, DX11Window::Height, Screen, Setting::fovcircleredus))
				{
					float cross_dist = sqrt(pow(Screen.X - DX11Window::Width / 2, 2) + pow(Screen.Y - DX11Window::Height / 2, 2));
					if (cross_dist < targetDistance)
					{
						EnemyTruePositions = Screen;
						targetDistance = cross_dist;

					}
				}
			}
			else
			{
				if (Algorithm::WorldToScreenBone1(Esp::ViewMatrix, Data::AActorList[i].Bones.HeadPos, Screen, &dist))
				{
					float cross_dist = sqrt(pow(Screen.X - DX11Window::Width / 2, 2) + pow(Screen.Y - DX11Window::Height / 2, 2));

					if (cross_dist < targetDistance)
					{
						EnemyTruePositions = Screen;
						targetDistance = cross_dist;

					}
				}
			}
		}
	}
	return EnemyTruePositions;
}



VOID Aimbot::AimbotThread()
{
	INT Num = 0;
	INT Num2 = 0;
	FLOAT Num4 = 0;
	FLOAT Num5 = 0;

	VECTOR3 Head;
	Head.X = 0;
	Head.Y = 0;
	FLOAT X = 0;
	FLOAT Y = 0;

	while (true)
	{
		VECTOR2 MagicCoordinates;
		if (!Setting::ShowMenu)
		{
			if (Setting::Aimbot)
			{
				if ((GetAsyncKeyState(Setting::AimbotKey) & 0x8000)) // Left Mouse button
				{
					Head = GetClosestEnemy();
					if ((Head.X > 0 && Head.Y > 0))
					{
						Num = DX11Window::Width / 2;
						Num2 = DX11Window::Height / 2;
						//Setting::Aimspeed = 11;  // Aim speed
						Num4 = 0.0f;
						Num5 = 0.0f;

						X = Head.X;
						Y = Head.Y;

						if (X > 0)
						{
							if (X > (float)Num)
							{
								Num4 = -((float)Num - X);
								Num4 /= Setting::Aimspeed;
								if (Num4 + (float)Num > (float)(Num * 2))
								{
									Num4 = 0.0f;
								}
							}

							if (X < (float)Num)
							{
								Num4 = X - (float)Num;
								Num4 /= Setting::Aimspeed;
								if (Num4 + (float)Num < 0.0f)
								{
									Num4 = 0.0f;
								}
							}
						}

						if (Y > 0)
						{
							if (Y > (float)Num2)
							{
								Num5 = -((float)Num2 - Y);
								Num5 /= Setting::Aimspeed;
								if (Num5 + (float)Num2 > (float)(Num2 * 2))
								{
									Num5 = 0.0f;
								}
							}

							if (Y < (float)Num2)
							{
								Num5 = Y - (float)Num2;
								Num5 /= Setting::Aimspeed;
								if (Num5 + (float)Num2 < 0.0f)
								{
									Num5 = 0.0f;
								}
							}
						}

						mouse_event(1U, (int)Num4, (int)Num5, NULL, NULL);
					}
				}
			}
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(30));
	}
}
