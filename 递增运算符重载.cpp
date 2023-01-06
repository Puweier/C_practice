//#include<iostream>
//using namespace std;
//
//
////重载递增运算符
//
////自定义整型
//class MyInteger {
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger() {
//		m_Num = 0;
//	}
//
//	//重载前置++运算符
//	 MyInteger &operator++() {
//		m_Num++;
//		return *this;
//	}
//
//	 //重载后置++运算符
//	 //int表示占位参数，可以用于区分前置递增和后置递增
//	 MyInteger operator++(int) {
//		 //先记录当时的结果
//		 MyInteger temp = *this;
//		 //递增
//		 m_Num++;
//		 //返回
//		 return temp;
//
//	 }
//
//
//private:
//	int m_Num;
//};
//
////重载左移运算符
//ostream& operator<<(ostream& cout, MyInteger myint) {
//	cout << myint.m_Num;
//	return cout;
//}
//
//
//void test01() {
//	MyInteger myint;
//	cout << ++myint << endl;
//}
//
//void test02() {
//	MyInteger myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//
//int main() {
//	test02();
//	return 0;
//}