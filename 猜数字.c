//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<time.h>
//
//void menu() {
//	printf("********************\n");
//	printf("****** 1.play ******\n");
//	printf("****** 0.exit ******\n");
//	printf("********************\n");
//
//}
//
//void game() {
//	//���������
//	int num = (unsigned)time(NULL) % 100 + 1;
//	printf("�������\n");
//	int guss = 0;
//	scanf("%d", &guss);
//	while (1) {
//		if (guss == num) {
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;
//		}
//		else if (guss < num) {
//			printf("��С�ˣ��������\n");
//			scanf("%d", &guss);
//
//		}
//		else if (guss > num) {
//			printf("�´��ˣ��������\n");
//			scanf("%d", &guss);
//		}
//	}
//
//}
//int main() {
//	
//	int input = 0;
//	do {
//		menu();
//		scanf("%d", &input);
//		switch (input) {
//		case 0:
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("�����������������룡\n");
//
//		}
//
//	} while (input);
//
//	return 0;
//}