//#include<iostream>
//using namespace std;
//#include<string>
//
////虚析构和纯虚析构
//class Animal {
//public:
//	Animal() {
//		cout << "Animal的构造函数调用" << endl;
//	}
//	virtual ~Animal() {
//		cout << "Animal的析构函数调用" << endl;
//	}
//	//纯虚函数
//	virtual void speak() = 0;
//};
//
//class Cat :public Animal {
//public:
//	Cat(string name) {
//		cout << "Cat的构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//	virtual void speak() {
//		cout << *m_Name<<"小猫在说话" << endl;
//	}
//
//	~Cat() {
//		if (m_Name != NULL) {
//			cout << "Cat的析构函数调用" << endl;
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
//	//父类指针在析构时候，不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄漏
//	delete animal;
//}
//
//
//int main() {
//
//	test01();
//	return 0;
//}