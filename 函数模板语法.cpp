//#include<iostream>
//using namespace std;
//
////函数模板
//template<typename C>
//void mySwap(C& a, C& b) {
//	C temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01() {
//
//	int a = 10;
//	int b = 20;
//	
//	//利用函数模板进行交换
//	//两种方式使用函数模板
//	//1、自动类型推导
//	/*mySwap(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;*/
//	//2、显示指定类型
//	mySwap<int>(a, b); 
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
//
//
//int main() {
//
//	test01();
//	return 0;
//}