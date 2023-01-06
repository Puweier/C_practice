#include<iostream>
using namespace std;

//��ֵ���������
class Person {
public:
	Person(int age) {
		m_age = new int(age);
	}

	~Person() {
		if (m_age != NULL) {
			delete m_age;
			m_age = NULL;
		}
	}

	//���ظ�ֵ�����
	Person& operator=(Person &p) {
		//Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ�������
		if (m_age != NULL) {
			delete m_age;
			m_age = NULL;
		}
		//���
		m_age = new int(*p.m_age);
		//���ض�����
		return *this;
	}
	int* m_age;
};

void test01() {
	Person p1(18);
	Person p2(20);
	Person p3(30);
	p3 = p2 = p1; //��ֵ����
	cout << "p1������Ϊ��" << *p1.m_age << endl;
	cout << "p2������Ϊ��" << *p2.m_age << endl;
	cout << "p2������Ϊ��" << *p3.m_age << endl;
}

int main() {
	test01();
	return 0;
}