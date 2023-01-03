#include <iostream>
using namespace std;
class Person{
public:
	//构造函数
	Person() {
		cout << "Person的无参构造函数调用" << endl;
	}
	Person(int a) {
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person & p) {
		age = p.age;
		cout << "Person的拷贝构造函数地调用" << endl;
	}
	//析构函数
	~Person() {
		cout << "Person的析构函数调用" << endl;
	}
	int age;

};

//调用
void test01() {
	////1、括号法
	//Person p;
	//Person p2(10);
	//Person p3(p2);
	//cout << "p2的年龄为：" << p2.age << endl;
	//cout << "p3的年龄为：" << p3.age << endl;
	
	////2、显示法
	//Person p1;
	//Person p2 = Person(p2);
	//Person p3 = Person(p2);

	//3、隐式转换法
	Person p4 = 10; //相当于写了 Person p4 = Person(10);
	Person p5 = p4; //拷贝构造
}

int main() {
	test01();
}