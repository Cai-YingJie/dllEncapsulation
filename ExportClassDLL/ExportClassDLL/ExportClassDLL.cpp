// ExportClassDLL.cpp : ���� DLL Ӧ�ó���ĵ���������
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

