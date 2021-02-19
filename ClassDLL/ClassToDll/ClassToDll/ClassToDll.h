// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� CLASSTODLL_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// CLASSTODLL_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef CLASSTODLL_EXPORTS
#define CLASSTODLL_API __declspec(dllexport)
#else
#define CLASSTODLL_API __declspec(dllimport)
#endif

// �����Ǵ� ClassToDll.dll ������
class CLASSTODLL_API MyClass {
public:
	MyClass();
	~MyClass();
	int TestFunction(int a, int b);

private:
	class MyMath;
	MyMath *pID;

};

extern CLASSTODLL_API int nClassToDll;

CLASSTODLL_API int fnClassToDll(void);
