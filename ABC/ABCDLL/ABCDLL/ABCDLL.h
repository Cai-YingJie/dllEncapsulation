// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 ABCDLL_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// EXPORTCLASSDLL_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。

#ifdef ABCDLL_EXPORTS
#define EXPORTABCDLL_API __declspec(dllexport)
#else
#define EXPORTABCDLL_API __declspec(dllimport)
#endif

class BaseClass
{
public:
	virtual ~BaseClass(){ ; };
	virtual int add(int a, int b) = 0;
	virtual int substract(int a, int b) = 0;
private:

};

class MyClass :public BaseClass
{
public:
	MyClass(){};
	int add(int a, int b);
	int substract(int a, int b);
private:

};

extern "C"
{
	EXPORTABCDLL_API BaseClass* _cdecl CreatObject();
}

typedef BaseClass* (*CreatFun)();
