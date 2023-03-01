//#include <iostream>
//using namespace std;
//#include<string>
//
//
//class Person {
//public:
//	Person(string name, int age) {
//		this->M_name = name;
//		this->M_age = age;
//	}
//
//	string M_name;
//	int M_age;
//};
//
////对比两个数据是否相等
//template<class T>
//bool myCompare(T& a, T& b) {
//	if (a == b) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
////利用具体化Person的版本实现代码，具体化优先调用
//template<> bool myCompare(Person& p1, Person& p2) {
//	if (p1.M_name == p2.M_name && p1.M_age == p2.M_age) {
//		return true;
//
//	}
//	else {
//		return false;
//	}
//}
//
//void test01() {
//	int a = 10;
//	int b = 20;
//	bool ret = myCompare(a, b);
//	if (ret) {
//		cout << "a == b" << endl;
//	}
//	else {
//		cout << "a != b" << endl;
//	}
//}
//
//void test02() {
//	Person p1("Tom", 10);
//	Person p2("Tom", 10);
//	bool ret = myCompare(p1, p2);
//	if (ret) {
//		cout << "p1 == p2" << endl;
//	}
//	else {
//		cout << "p1 != p2" << endl;
//
//	}
//}
//
//
//
//int main() {
//	test02();
//
//	return 0;
//
//}