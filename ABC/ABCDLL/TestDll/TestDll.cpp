// TestDll.cpp : �������̨Ӧ�ó������ڵ㡣


#include "stdafx.h"
#include "..//ABCDLL/ABCDLL.h"
#include "windows.h"
#include<iostream>

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	//����dll
	HINSTANCE hDLL = LoadLibrary(L"ABCDLL.dll");

	if (hDLL == NULL)
	{
		cout << "Failed to load libraray" << endl;
	}
	else
	{
		//��ȡCreatObject()�ĵ�ַ���˺�����ǰ���ABCDLL.cpp���ᵽ
		CreatFun EnteryFunction = (CreatFun)GetProcAddress(hDLL, "CreatObject");

		BaseClass* FuncOne = EnteryFunction();
		BaseClass* FuncTwo = EnteryFunction();
		if (FuncOne || FuncTwo)
		{
			cout << " 1 + 1 = " << FuncOne->add(1, 1) << endl;
			cout << "5 - 1 = " << FuncTwo->substract(5, 1) << endl;
		}
		FreeLibrary(hDLL);
	}
	cin.get();
	system("pause");
	return 0;
}
