//// TestDll.cpp : 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
//#include "..//ABCDLL/ABCDLL.h"
//#include "windows.h"
//#include <iostream>
//using namespace std;
//
//int _tmain(int argc, _TCHAR* argv[])
//{
//	//HINSTANCE hDLL2 = LoadLibrary(L"ABCDLL.dll");
//	HINSTANCE hDLL = LoadLibrary(L"ABCDLL.dll");
//	std::cout << GetLastError() << endl;
//	if (hDLL = NULL)
//	{
//		cout << "Failed to load libraray ..." << endl;
//	}
//	else
//	{
//		CreatFun EnteryFunction = (CreatFun)GetProcAddress(hDLL, "CreatObject");
//
//		BaseClass* FunOne = EnteryFunction();
//		BaseClass* FunTwo = EnteryFunction();
//		if (FunOne && FunTwo)
//		{
//			cout << "1 + 1 = " << FunOne->add(1, 1) << endl;
//			cout << "3 - 1 = " << FunTwo->substract(3, 1) << endl;
//		}
//	}
//	cin.get();
//	return 0;
//}
//
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
		CreatFun EnteryFun = (CreatFun)GetProcAddress(hDLL, "CreatObject");

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

