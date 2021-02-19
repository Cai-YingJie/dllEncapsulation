// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 EXPORTCLASSDLL_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// EXPORTCLASSDLL_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
#ifdef EXPORTCLASSDLL_EXPORTS
#define EXPORTCLASSDLL_API __declspec(dllexport)
#else
#define EXPORTCLASSDLL_API __declspec(dllimport)
#endif

class ImgMath
{
public:
	virtual ~ImgMath() { ; }
	//初始化为0才是纯虚函数，没有0这个初始化器，它们仅仅是虚函数
	virtual int Add(int a, int b) = 0;
	virtual int Subtract(int a, int b) = 0;
};


class MyMath :public ImgMath
{
public:
	MyMath(){};
	int Add(int a, int b);
	int Subtract(int a, int b);

	int a, b;
};

extern "C"
{
	EXPORTCLASSDLL_API ImgMath* _cdecl CreateMathObject();
};

typedef ImgMath* (*CREATE_MATH)();