//#include<iostream>
//using namespace std;
//class Person {
//public:
//	Person() {
//		cout << "Person的默认构造函数调用" << endl;
//
//	}
//	Person(int age) {
//		m_age = age;
//		cout << "Person的有参构造函数的调用" << endl;
//	}
//	~Person() {
//		cout << "Person的析构函数的调用" << endl;
//	}
//	Person(const Person& p) {
//		m_age = p.m_age;
//		cout << "Person的拷贝构造函数调用" << endl;
//	}
//	int m_age;
//};
//
//void test01() {
//	Person p1(20);
//	Person p2(p1);
//
//	cout << "p2的年龄为：" << p2.m_age << endl;
//}
//
//void dowork(Person p) {
//
//}
//
//void test02() {
//	Person p;
//	dowork(p);
//}
//
//
//Person dowork02() {
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//
//void test03() {
//	Person p = dowork02();
//	cout << (int*)&p << endl;
//}
//
//
//int main() {
//	/*test01();*/
//	/*test02();*/
//	test03();
//
//	return 0;
//}