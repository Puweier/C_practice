//#include<iostream>
//using namespace std;
//class Person {
//public:
//	Person() {
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//
//	}
//	Person(int age) {
//		m_age = age;
//		cout << "Person���вι��캯���ĵ���" << endl;
//	}
//	~Person() {
//		cout << "Person�����������ĵ���" << endl;
//	}
//	Person(const Person& p) {
//		m_age = p.m_age;
//		cout << "Person�Ŀ������캯������" << endl;
//	}
//	int m_age;
//};
//
//void test01() {
//	Person p1(20);
//	Person p2(p1);
//
//	cout << "p2������Ϊ��" << p2.m_age << endl;
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