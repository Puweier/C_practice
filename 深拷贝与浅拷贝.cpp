//#include<iostream>
//using namespace std;
//class Person {
//public:
//	Person() {
//		cout << "Person的默认构造函数调用" << endl;
//	}
//
//	Person(int age, int height) {
//		m_age = age;
//		m_height = new int(height);
//		cout << "Person的有参构造函数调用" << endl;
//	}
//
//	
//	~Person() {
//		if (m_height != NULL) {
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	Person(const Person& p) {
//		m_age = p.m_age;
//		//深拷贝操作
//		m_height = new int(*p.m_height);
//	}
//
//	int m_age; //年龄
//	int* m_height; //身高
//};
//
//void test01() {
//	Person p1(18, 160);
//	cout << "p1的年龄为：" << p1.m_age << "身高为：" << *p1.m_height << endl;
//	Person p2(p1);
//	cout << "p2的年龄为：" << p2.m_age << "身高为：" << *p2.m_height << endl;
//
//}
//
//int main() {
//	test01();
//	return 0;
//}
