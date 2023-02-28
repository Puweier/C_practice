#include<iostream>
#include"workerManager.h"
using namespace std;
#include "worker.h"
#include "employee.h"

int main() {


	//实例化管理者对象
	WorkerManager wm;

	int choice = 0; //用来存储用户的选项
	while (true) {
		//调用显示菜单成员函数
		wm.Show_Menu();

		cout << "请输入您的选择：" << endl;
		cin >> choice; //接收用户的选择

		switch (choice) {
		case 0:  //退出系统
			wm.ExitSystem();
			break;
		case 1:  //增加职工
			wm.Add_Emp();
			break;
		case 2:  //显示职工
			wm.Show_Empt();
			break;
		case 3:  //删除职工
			wm.Del_Emp();
			break;
		case 4:  //修改职工
			wm.Mod_Emp();
			break;
		case 5:  //查找职工
			wm.Find_Emp();
			break;
		case 6:  //排序职工
			wm.Sort_Emp();
			break;
		case 7:  //清空职工
			wm.Clean_File();
			break;
		default:
			system("cls");
			break;

		}
	}

	system("pause");

	return 0;
}