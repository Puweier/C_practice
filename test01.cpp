#include <iostream>
using namespace std;
class Person{
public:
	//���캯��
	Person() {
		cout << "Person���޲ι��캯������" << endl;
	}
	Person(int a) {
		age = a;
		cout << "Person���вι��캯������" << endl;
	}
	//�������캯��
	Person(const Person & p) {
		age = p.age;
		cout << "Person�Ŀ������캯���ص���" << endl;
	}
	//��������
	~Person() {
		cout << "Person��������������" << endl;
	}
	int age;

};

//����
void test01() {
	////1�����ŷ�
	//Person p;
	//Person p2(10);
	//Person p3(p2);
	//cout << "p2������Ϊ��" << p2.age << endl;
	//cout << "p3������Ϊ��" << p3.age << endl;
	
	////2����ʾ��
	//Person p1;
	//Person p2 = Person(p2);
	//Person p3 = Person(p2);

	//3����ʽת����
	Person p4 = 10; //�൱��д�� Person p4 = Person(10);
	Person p5 = p4; //��������
}

int main() {
	test01();
}