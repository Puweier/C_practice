//#include<iostream>
//using namespace std;
//
////静态成员函数
////所有对象共享一个
////静态成员函数只能访问静态成员变量
//
//class Person {
//public:
//	static void func() {
//		m_A = 100;
//		//m_B = 200; //静态成员函数不可访问非静态成员变量，无法区分到底是哪个对象的m_B
//		cout << "static void func调用" << endl;
//	}
//
//	static int m_A; //静态成员变量
//	int m_B;//非静态成员变量
//};
//
//int Person::m_A = 0;
//
//void test01() {
//	//1、通过对象访问
//	Person p;
//	p.func();
//
//	//2、通过类名访问
//	Person::func();
//}
//
//int main() {
//	test01();
//	return 0;
//}