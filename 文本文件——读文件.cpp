//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//
//void test01() {
//	ifstream ifs;
//	ifs.open("text.txt", ios::in);
//	if (!ifs.is_open()) {
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	//������
//
//	//��һ��
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf) {
//		cout << buf << endl;
//	}
//
//	ifs.close();*/
//
//	//�ڶ���
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf))) {
//		cout << buf << endl;
//	}
//
//	ifs.close();*/
//
//	//������
//	/*string buf;
//	while (getline(ifs, buf)) {
//		cout << buf << endl;
//
//	}
//	ifs.close();*/
//
//	//������
//	/*char c;
//	while((c = ifs.get()) != EOF) {
//		cout << c;
//	}
//	ifs.close();*/
//
//}
//
//
//
//int main() {
//	test01();
//	return 0;
//}