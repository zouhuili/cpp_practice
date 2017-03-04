// Dlldemo.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "Dlldemo.h"


// 这是导出变量的一个示例
//DLLDEMO_API int nDlldemo=0;

// 这是导出函数的一个示例。
DLLDEMO_API int Max(int a,int b)
{
	if(a==b)   
		return NULL;   
	else if(a>b)   
		return a;   
	else   
		return b;  
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 Dlldemo.h
//CDlldemo::CDlldemo()
//{
//	return;
//}
