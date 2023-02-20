#include<iostream>
using namespace std;

//��̬����2 ������Ʒ
class AbstractDrinking {
public:

	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//PourInCup
	virtual void PourInCup() = 0;

	//���븨��
	virtual void PutSomething() = 0;

	//������Ʒ
	void makeDrink() {

		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//��������
class Coffee :public AbstractDrinking {
public:
	//��ˮ
	virtual void Boil() {
		cout << "��ũ��ɽȪˮ" << endl;
	}

	//����
	virtual void Brew() {
		cout << "���ݿ���" << endl;
	}

	//PourInCup
	virtual void PourInCup() {
		cout << "���뱭��" << endl;
	}

	//���븨��
	virtual void PutSomething() {
		cout << "�����Ǻ�ţ��" << endl;
	}


};

//������Ҷ
class tea :public AbstractDrinking {
public:
	//��ˮ
	virtual void Boil() {
		cout << "���Ȫˮ" << endl;
	}

	//����
	virtual void Brew() {
		cout << "���ݲ�Ҷ" << endl;
	}

	//PourInCup
	virtual void PourInCup() {
		cout << "���뱭��" << endl;
	}

	//���븨��
	virtual void PutSomething() {
		cout << "�������" << endl;
	}
};

//��������
void doWork(AbstractDrinking* abs) {
	abs->makeDrink();
	delete abs;//�ͷ�
}

void test01() {
	//��������
	doWork(new Coffee);
}

int main() {

	test01();
	return 0;
}
