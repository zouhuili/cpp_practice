// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� DLLDEMO_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// DLLDEMO_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef DLLDEMO_EXPORTS
#define DLLDEMO_API __declspec(dllexport)
#else
#define DLLDEMO_API __declspec(dllimport)
#endif

// �����Ǵ� Dlldemo.dll ������
//class DLLDEMO_API CDlldemo {
//public:
//	CDlldemo(void);
//	// TODO: �ڴ�������ķ�����
//};
//DLLDEMO_API int nDlldemo;

extern "C" DLLDEMO_API int Max(int a ,int b);
