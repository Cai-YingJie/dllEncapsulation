// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� EXPORTCLASSDLL_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// EXPORTCLASSDLL_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef EXPORTCLASSDLL_EXPORTS
#define EXPORTCLASSDLL_API __declspec(dllexport)
#else
#define EXPORTCLASSDLL_API __declspec(dllimport)
#endif

class ImgMath
{
public:
	virtual ~ImgMath() { ; }
	//��ʼ��Ϊ0���Ǵ��麯����û��0�����ʼ���������ǽ������麯��
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