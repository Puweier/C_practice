//#include<iostream>
//using namespace std;
//#include<string>
//
////��ϵ���������
//
//class Person {
//public:
//	Person(string name, int age) {
//		m_name = name;
//		m_age = age;
//	}
//
//	bool operator==(Person& p) {
//		if (this->m_name == p.m_name && this->m_age == p.m_age) {
//			return true;
//		}
//		return false;
//	}
//
//	bool operator!=(Person& p) {
//		if (this->m_name == p.m_name && this->m_age == p.m_age) {
//			return false;
//		}
//		return true;
//	}
//
//	string m_name;
//	int m_age;
//};
//
//void test01() {
//	Person p1("Tom", 18);
//	Person p2("Tom", 18);
//	if (p1 == p2) {
//		cout << "p1��p2����ȵģ�" << endl;
//	}
//	else {
//		cout << "p1��p2�ǲ���ȵģ�" << endl;
//	}
//	if (p1 != p2) {
//		cout << "p1��p2�ǲ���ȵģ�" << endl;
//	}
//	else {
//		cout << "p1��p2����ȵģ�" << endl;
//	}
//}
//
//
//int main() {
//	test01();
//	return 0;
//}