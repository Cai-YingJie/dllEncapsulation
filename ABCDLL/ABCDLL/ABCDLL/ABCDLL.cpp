// ABCDLL.cpp : ���� DLL Ӧ�ó���ĵ���������
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
