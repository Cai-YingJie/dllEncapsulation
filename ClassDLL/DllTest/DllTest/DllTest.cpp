// DllTest.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "MyMath.h"


// ���ǵ���������һ��ʾ��
DLLTEST_API int nDllTest=0;

// ���ǵ���������һ��ʾ����
DLLTEST_API int fnDllTest(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� DllTest.h
MyClass::MyClass()
{
	pID = new MyMath();
}

MyClass::~MyClass()
{
	delete pID;
}
int MyClass::TestFunction(int a, int b)
{
	return pID->add(a, b);
}
