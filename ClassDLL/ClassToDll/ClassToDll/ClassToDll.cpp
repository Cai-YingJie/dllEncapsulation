// ClassToDll.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "MyMath.h"

// ���ǵ���������һ��ʾ��
CLASSTODLL_API int nClassToDll=0;

// ���ǵ���������һ��ʾ����
CLASSTODLL_API int fnClassToDll(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� ClassToDll.h
MyClass::MyClass()
{
	pID = new MyMath();
}

MyClass::~MyClass()
{
	delete pID;
}
int MyClass::TestFunction(int a , int b)
{
	return pID->add(a, b);
}
