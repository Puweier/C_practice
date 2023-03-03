#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray {
public:
	//�вι��� ���� ����
	MyArray(int capacity) {
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//��������
	MyArray(const MyArray& arr) {
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator=��ֹǳ��������
	MyArray& operator=(const MyArray& arr) {
		if (this->pAddress != NULL) {
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//β�巨
	void Push_Tail(const T& value) {
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size) {
			return;
		}
		this->pAddress[this->m_Size] = value;
		this->m_Size++; //��������Ĵ�С
	}

	//βɾ��
	void Pop_Tail() {
		//���û����ʲ������һ��Ԫ�أ���Ϊβɾ
		if (this->m_Size = 0) {
			return;
		}
		this->m_Size--;
	}

	//ͨ���±귽ʽ���������е�Ԫ��
	T& operator[](int index) {
		return this->pAddress[index];
	}

	//�������������
	int getCapacity() {
		return this->m_Capacity;

	}

	//��������Ĵ�С
	int getSize() {
		return this->m_Size;
	}

	//��������
	~MyArray() {
		if (this->pAddress != NULL) {
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress;  //ָ��ָ��������ٵ���ʵ����
	int m_Capacity; //���������
	int m_Size;  //����Ĵ�С
};