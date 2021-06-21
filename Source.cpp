#include "stdafx.h"
#include <Windows.h>
#include <time.h>

//stdafx.h is not needed you can remove it if you want

int main()
{
	FreeConsole();
	int a, b;
	while (0 == 0) {
		a = GetSystemMetrics(SM_CXSCREEN);
		b = GetSystemMetrics(SM_CYSCREEN);
		StretchBlt(GetDC(NULL), 50, 50, a - 100, b - 100, GetDC(NULL), 0, 0, a, b, SRCCOPY);
		Sleep(1000);
	}
}
