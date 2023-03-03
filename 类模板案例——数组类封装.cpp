#include<iostream>
using namespace std;
#include "MyArray.hpp"


void printIntArray(MyArray<int>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i];
	}
}

void test01() {
	MyArray<int>arr1(5);
	for (int i = 0; i < 5; i++) {
		arr1.Push_Tail(i);
	}
	cout << "array1的打印输出为：" << endl;
	printIntArray(arr1);
}

int main() {
	test01();
	return 0;
}