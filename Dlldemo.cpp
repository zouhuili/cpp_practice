// Dlldemo.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "Dlldemo.h"


// ���ǵ���������һ��ʾ��
//DLLDEMO_API int nDlldemo=0;

// ���ǵ���������һ��ʾ����
DLLDEMO_API int Max(int a,int b)
{
	if(a==b)   
		return NULL;   
	else if(a>b)   
		return a;   
	else   
		return b;  
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� Dlldemo.h
//CDlldemo::CDlldemo()
//{
//	return;
//}
