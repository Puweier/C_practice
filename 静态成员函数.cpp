//#include<iostream>
//using namespace std;
//
////��̬��Ա����
////���ж�����һ��
////��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//
//class Person {
//public:
//	static void func() {
//		m_A = 100;
//		//m_B = 200; //��̬��Ա�������ɷ��ʷǾ�̬��Ա�������޷����ֵ������ĸ������m_B
//		cout << "static void func����" << endl;
//	}
//
//	static int m_A; //��̬��Ա����
//	int m_B;//�Ǿ�̬��Ա����
//};
//
//int Person::m_A = 0;
//
//void test01() {
//	//1��ͨ���������
//	Person p;
//	p.func();
//
//	//2��ͨ����������
//	Person::func();
//}
//
//int main() {
//	test01();
//	return 0;
//}