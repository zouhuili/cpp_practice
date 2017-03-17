#include "stdafx.h"
//#include <iostream>
///*******************/
//typedef void(*callBack)(int val);
//typedef struct data
//{
//	int number;
//	callBack cb;
//	data(callBack value):cb(value){};
//	void work()
//	{
//		
//		cb(number);
//	}
//	~data(){}
//};
//void callBackImpl(int x)
//{
//	std::cout<<"come on "<<x<<std::endl;
//
//}
//int main()
//{
//	data Mydata(&callBackImpl);
//	Mydata.number=2017;
//	Mydata.work();
//	system("pause");
//	return 0;
//}
//
//////定义函数指针
// //typedef void(*callBack)();
// ////定义结构体
// //typedef struct data
// //{
//	// callBack cb;//函数指针
//	// data(callBack value):cb(value){}
//	// void Make()
//	// {
//	//	 cb();
//	// }
//	// ~data(){}
// //};
// //void callBackImpl()
// //{
//	// std::cout<<"回调"<<std::endl;
// //}
// //int main()
// //{
//	// data Mydata(&callBackImpl);
//	// Mydata.Make();
//	// system("pause");
//	//return 0;
// //}
///******************************/
////class Interface
////{
////public:
////	virtual void interface()=0;
////	virtual~Interface(){};
////};
//class InterfaceImpl:public Interface
//{
//	virtual void interface()
//	{
//		std::cout<<"come on"<<std::endl;
//	}
//	~InterfaceImpl()
//	{
//		std::cout<<"$$$$$$$$$$"<<std::endl;
//	};
//};
//class work
//{
//private:
//	Interface *ptr;
//public:
//	 work(Interface *q);
//	 void mainWork()
//	 {
//		 ptr->interface();
//	 }
//	 ~work(){
//		 delete ptr;
//		 std::cout<<"success"<<std::endl;
//	 }
//};
//work::work(Interface *q)
//{
//	ptr=q;
//}
//void test()
//{
//	work Mywork(new InterfaceImpl);
//	Mywork.mainWork();
//}
//void main()
//{
//	test();
//	system("pause");
//}