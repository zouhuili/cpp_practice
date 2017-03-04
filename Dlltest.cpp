// Dlltest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include <iostream>
using namespace std;

typedef int (*lpMax)(int a, int b);

int main(int argc, char *argv[])
{
      HMODULE hDll = LoadLibrary(L"Dlldemo.dll");
	  lpMax M;   
	  M = (lpMax)GetProcAddress(hDll,"Max");
	  int value;   
	  value = M(2,9);   
	  std::cout<<value<<std::endl;
	  system("pause");
           

            FreeLibrary(hDll);
}
#pragma comment(lib, "..\\debug\\DLLdemo.lib")
extern "C" _declspec(dllimport) int Max(int a, int b);
void main()   
{   
      int value;   
      value = Max(2,9);   
     cout<<"The Max value is \n"<<value;
	 system("pause");
}
