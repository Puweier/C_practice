//#include<iostream>
//using namespace std;
//
//class Person {
//public:
//	Person(int age) {
//		//this指针指向的是被调用的成员函数所属的对象
//		this->age = age;
//	}
//
//	Person& PersonAddPerson(Person p) {
//		this->age += p.age;
//		//返回对象本身
//		return *this;
//	}
//
//	int age;
//};
//
////1、解决名称冲突
//void test01() {
//	Person p1(18);
//	cout << "p1的年龄为：" << p1.age << endl;
//}
//
////2、返回对象本身用*this
//void test02() {
//	Person p1(10);
//	Person p2(10);
//	//链式编程思想
//	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
//	cout << "p2的年龄为：" << p2.age << endl;
//}
//
//int main() {
//	//test01();
//	test02();
//	return 0;
//}