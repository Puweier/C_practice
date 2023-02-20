#include<iostream>
using namespace std;
#include<fstream>


class Person {
public:
	char m_Name[64];
	int m_Age;
};

void test01() {
	ifstream ifs;
	ifs.open("person.txt", ios::binary);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}
	//读文件
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
	ifs.close();

}


int main() {
	test01();
	return 0;
}