// TestDll.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "..//ClassToDll/ClassToDll.h"
#include "windows.h"
#include <iostream>

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	HINSTANCE hDLL = LoadLibrary(L"ClassToDll.dll");
	
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

