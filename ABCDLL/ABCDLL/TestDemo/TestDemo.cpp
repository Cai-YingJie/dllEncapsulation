// TestDemo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "..//ABCDLL/ABCDLL.h"
#include "windows.h"
#include<iostream>

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	HINSTANCE hDLL = LoadLibrary(L"ABCDLL.dll");

	if (hDLL == NULL)
	{
		cout << "Failed to load libraray" << endl;
	}
	else
	{
		CreatFun EnteryFun = (CreatFun)GetProcAddress(hDLL, "CreatObeject");

		BaseClass* Fun1 = EnteryFun();
		BaseClass* Fun2 = EnteryFun();
		if (Fun1 || Fun2)
		{
			cout << " 1 + 1 = " << Fun1->add(1, 1) << endl;
			cout << "5 - 1 = " << Fun2->substract(5, 1) << endl;
		}
		FreeLibrary(hDLL);
	}
	cin.get();
	return 0;
}

