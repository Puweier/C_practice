#include<iostream>
using namespace std;

//继承中的对象模型
class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son : Base {
public:
	int m_D;
};

void test01() {
	//父类中所有非静态成员属性都会被子类继承下去
	//父类中私有成员属性是被编译器隐藏了，因此是访问不到，但确实被继承下去了
	cout << "size of Son = " << sizeof(Son) << endl;
}

int main() {
	test01();
	return 0;
}