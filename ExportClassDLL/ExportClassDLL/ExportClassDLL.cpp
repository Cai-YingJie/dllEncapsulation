// ExportClassDLL.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "ExportClassDLL.h"


EXPORTCLASSDLL_API ImgMath* _cdecl CreateMathObject()
{
	return new MyMath();
}

int MyMath::Add(int a, int b)
{
	return a + b;
}

int MyMath::Subtract(int a, int b)
{
	return a - b;
}

