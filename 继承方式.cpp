//#include<iostream>
//using namespace std;
//
////�̳з�ʽ
//class Base1 {
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
////�����̳�
//class Son1 :public Base1 {
//public:
//	void fun() {
//		m_A = 10; //�����й���Ȩ�޳�Ա����������Ȼ�ǹ���Ȩ��
//		m_B = 10; //�����б���Ȩ�޳�Ա����������Ȼ�Ǳ���Ȩ��
//	}
//};
//
////�����̳�
//class Base2 {
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son2 :protected Base2 {
//public:
//	void func() {
//		m_A = 100; //�����У��������б�Ϊ����Ȩ��
//		m_B = 100; //�����б�����Ա���������б�Ϊ����Ȩ��
//	}
//};
//
////˽�м̳�
//class Base3 {
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son3 : private Base3 {
//public:
//	void func() {
//		m_A = 100; //�����й�����Ա�����б�Ϊ˽�г�Ա
//		m_B = 100; //�����б�����Ա�������б�Ϊ˽�г�Ա
//	}
//
//};
//
//class Grand3 :public Son3 {
//	//����Son3��m_A��Ϊ˽�У���ʹ�Ƕ���Ҳ���ʲ���
//};
//
//int main() {
//
//	return 0;
//}