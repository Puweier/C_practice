//#include<iostream>
//using namespace std;
//
//////普通页面实现
////
//////Java页面
////class Java {
////public:
////	void head() {
////		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
////	}
////
////	void bottle() {
////		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
////	}
////
////	void left() {
////		cout << "Java、python、C++...（公共分类列表）" << endl;
////	}
////	void content() {
////		cout << "Java学科视频" << endl;
////	}
////};
////
//////Python页面
////class Python {
////public:
////	void head() {
////		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
////	}
////
////	void bottle() {
////		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
////	}
////
////	void left() {
////		cout << "Java、python、C++...（公共分类列表）" << endl;
////	}
////	void content() {
////		cout << "Python学科视频" << endl;
////	}
////};
////
//////C++页面
////class Cpp {
////public:
////	void head() {
////		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
////	}
////
////	void bottle() {
////		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
////	}
////
////	void left() {
////		cout << "Java、python、C++...（公共分类列表）" << endl;
////	}
////	void content() {
////		cout << "C++学科视频" << endl;
////	}
////};
////
//class BasePage {
//public:
//	void head() {
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//
//	void bottle() {
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//
//	void left() {
//		cout << "Java、python、C++...（公共分类列表）" << endl;
//	}
//};
//
////Java页面
//class Java :public BasePage {
//public:
//	void content() {
//		cout << "Java学科视频" << endl;
//	}
//};
//
////C++页面
//class Cpp :public BasePage {
//public:
//	void content() {
//		cout << "C++学科视频" << endl;
//	}
//};
//
////Python页面
//class Python :public BasePage {
//public:
//	void content() {
//		cout << "Python学科视频" << endl;
//	}
//};
//void test01(){
//	cout << "Java下载视频页面如下：" << endl;
//	Java ja;
//	ja.head();
//	ja.bottle();
//	ja.left();
//	ja.content();
//	cout << "----------------------------------" << endl;
//	cout << "Pyphon下载视频页面如下：" << endl;
//	Python p;
//	p.head();
//	p.bottle();
//	p.left();
//	p.content();
//	cout << "----------------------------------" << endl;
//	cout << "C++下载视频页面如下：" << endl;
//	Cpp cpp;
//	cpp.head();
//	cpp.bottle();
//	cpp.left();
//	cpp.content();
//
//}
//
//
//
//int main() {
//	test01();
//	return 0;
//}