//#include<iostream>
//using namespace std;
//#include<string>
//
////�������ʹ�������
//class Animal {
//public:
//	Animal() {
//		cout << "Animal�Ĺ��캯������" << endl;
//	}
//	virtual ~Animal() {
//		cout << "Animal��������������" << endl;
//	}
//	//���麯��
//	virtual void speak() = 0;
//};
//
//class Cat :public Animal {
//public:
//	Cat(string name) {
//		cout << "Cat�Ĺ��캯������" << endl;
//		m_Name = new string(name);
//	}
//	virtual void speak() {
//		cout << *m_Name<<"Сè��˵��" << endl;
//	}
//
//	~Cat() {
//		if (m_Name != NULL) {
//			cout << "Cat��������������" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	string* m_Name;
//};
//
//void test01() {
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	//����ָ��������ʱ�򣬲����������������������������������ж������ԣ������ڴ�й©
//	delete animal;
//}
//
//
//int main() {
//
//	test01();
//	return 0;
//}