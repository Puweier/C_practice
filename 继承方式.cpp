//#include<iostream>
//using namespace std;
//
////继承方式
//class Base1 {
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
////公共继承
//class Son1 :public Base1 {
//public:
//	void fun() {
//		m_A = 10; //父类中公共权限成员到子类中依然是公共权限
//		m_B = 10; //父类中保护权限成员到子类中依然是保护权限
//	}
//};
//
////保护继承
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
//		m_A = 100; //父类中，到子类中变为保护权限
//		m_B = 100; //父类中保护成员，到子类中变为保护权限
//	}
//};
//
////私有继承
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
//		m_A = 100; //父类中公共成员子类中变为私有成员
//		m_B = 100; //父类中保护成员到子类中变为私有成员
//	}
//
//};
//
//class Grand3 :public Son3 {
//	//到了Son3中m_A变为私有，即使是儿子也访问不到
//};
//
//int main() {
//
//	return 0;
//}