// Test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"..//DllTest/DllTest.h"
#include "windows.h"
#include <iostream>

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	HINSTANCE hDLL = LoadLibrary(L"DllTest.dll");

	if (hDLL == NULL)
	{
		cout << "Failed to load library.." << endl;
	}
	else
	{
		MyClass Function;

		cout << " 1 + 1 = " << Function.TestFunction(1, 1) << endl;
	}
	cin.get();
	return 0;
}

