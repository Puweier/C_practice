//#include<iostream>
//using namespace std;
//
////空指针调用成员函数
//
//class Person {
//public:
//	void showClassName() {
//		cout << "this is Person class" << endl;
//	}
//
//	void showPersonAge() {
//		//报错原因是传入的指针是为NULL
//		if (this == NULL) {
//			return;
//		}
//		cout << "age = " << m_age << endl;
//	}
//	int m_age;
//};
//
//void test01() {
//	Person* p = NULL;
//	p->showPersonAge();
//}