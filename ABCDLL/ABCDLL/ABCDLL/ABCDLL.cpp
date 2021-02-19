// ABCDLL.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "ABCDLL.h"

EXPORTABCDLL_API BaseClass* _cdecl CreatObeject()
{
	return new MyClass();
}

int MyClass::add(int a, int b)
{
	return a + b;
}

int MyClass::substract(int a, int b)
{
	return a - b;
}
