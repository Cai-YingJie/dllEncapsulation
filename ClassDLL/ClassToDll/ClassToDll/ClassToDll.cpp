// ClassToDll.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "MyMath.h"

// 这是导出变量的一个示例
CLASSTODLL_API int nClassToDll=0;

// 这是导出函数的一个示例。
CLASSTODLL_API int fnClassToDll(void)
{
	return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 ClassToDll.h
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
