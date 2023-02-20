//#include<iostream>
//using namespace std;
//#include<fstream>
//
//class Person {
//public:
//	char m_Name[64];//姓名
//	int m_Age;//年龄
//};
//
//
//void test01() {
//	ofstream ofs;
//	ofs.open("person.txt", ios::out | ios::binary);
//	Person p = { "张三", 18 };
//	ofs.write((const char*)&p, sizeof(Person));
//	ofs.close();
//
//}
//
//
//int main() {
//	test01();
//	return 0;
//}
