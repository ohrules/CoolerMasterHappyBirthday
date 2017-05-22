#include <Windows.h>
#include "SDKDLL.h"
#include <iostream>

int duration = 700; //sleep time in milliseconds

void A()
{
	for (int i = 1; i < 6; i++)
	{
		SetLedColor(i, 15, 255, 255, 255);
	}

	SetLedColor(1, 16, 255, 255, 255);
	SetLedColor(3, 16, 255, 255, 255);

	for (int i = 1; i < 6; i++)
	{
		SetLedColor(i, 17, 255, 255, 255);
	}
	Sleep(duration);
	SetFullLedColor(0, 0, 0);
}

void B()
{
	for (int i = 1; i < 6; i++)
	{
		SetLedColor(i, 15, 255, 255, 255);
	}
	for (int i = 1; i < 6; i = i + 2)
	{
		SetLedColor(i, 16, 255, 255, 255);
	}

	SetLedColor(2, 17, 255, 255, 255);
	SetLedColor(4, 17, 255, 255, 255);
	Sleep(duration);
	SetFullLedColor(0, 0, 0);
}

void D()
{
	for (int i = 1; i < 6; i++)
	{
		SetLedColor(i, 15, 255, 255, 255);
	}

	SetLedColor(1, 16, 255, 255, 255);
	SetLedColor(5, 16, 255, 255, 255);

	for (int i = 2; i < 5; i = i + 2)
	{
		SetLedColor(i, 17, 255, 255, 255);
	}
	Sleep(duration);
	SetFullLedColor(0, 0, 0);
}

void H()
{
	for (int i = 1; i < 6; i++)
	{
		SetLedColor(i, 15, 255, 255, 255);
	}

	SetLedColor(3, 16, 255, 255, 255);

	for (int i = 1; i < 6; i++)
	{
		SetLedColor(i, 17, 255, 255, 255);
	}
	Sleep(duration);
	SetFullLedColor(0, 0, 0);
}

void I()
{
	for (int i = 15; i < 18; i++)
	{
		SetLedColor(1, i, 255, 255, 255);
		SetLedColor(5, i, 255, 255, 255);
	}

	for (int i = 2; i < 5; i++)
	{
		SetLedColor(i, 16, 255, 255, 255);
	}
	Sleep(duration);
	SetFullLedColor(0, 0, 0);
}

void P()
{
	for (int i = 1; i < 6; i++)
	{
		SetLedColor(i, 15, 255, 255, 255);
	}

	SetLedColor(1, 16, 255, 255, 255);
	SetLedColor(3, 16, 255, 255, 255);

	for (int i = 1; i < 4; i++)
	{
		SetLedColor(i, 17, 255, 255, 255);
	}
	Sleep(duration);
	SetFullLedColor(0, 0, 0);
}

void R()
{
	for (int i = 1; i < 6; i++)
	{
		SetLedColor(i, 15, 255, 255, 255);
	}

	SetLedColor(1, 16, 255, 255, 255);
	SetLedColor(3, 16, 255, 255, 255);

	for (int i = 1; i < 6; i++)
	{
		if (i != 3)
			SetLedColor(i, 17, 255, 255, 255);
	}
	Sleep(duration);
	SetFullLedColor(0, 0, 0);
}

void T()
{
	for (int i = 15; i < 18; i++)
	{
		SetLedColor(1, i, 255, 255, 255);
	}

	for (int i = 2; i < 5; i++)
	{
		SetLedColor(i, 16, 255, 255, 255);
	}
	Sleep(duration);
	SetFullLedColor(0, 0, 0);
}

void Y()
{
	for (int i = 1; i < 4; i++)
	{
		SetLedColor(i, 15, 255, 255, 255);
		SetLedColor(i, 17, 255, 255, 255);
	}

	for (int i = 3; i < 6; i++)
	{
		SetLedColor(i, 16, 255, 255, 255);
	}

	Sleep(duration);
	SetFullLedColor(0, 0, 0);
}

int main()
{
	SetControlDevice(DEV_MKeys_M_White);
	if(IsDevicePlug())
	{
		EnableLedControl(true); //take control of the keyboard

		SetFullLedColor(0, 0, 0); //disable all lights
		
		H();
		A();
		P();
		P();
		Y();

		Sleep(duration); //break between words

		B();
		I();
		R();
		T();
		H();
		D();
		A();
		Y();

		EnableLedControl(false); //give control back
	}
	return 0;
}
