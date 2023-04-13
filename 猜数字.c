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
//	//生成随机数
//	int num = (unsigned)time(NULL) % 100 + 1;
//	printf("请猜数字\n");
//	int guss = 0;
//	scanf("%d", &guss);
//	while (1) {
//		if (guss == num) {
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//		else if (guss < num) {
//			printf("猜小了，请猜数字\n");
//			scanf("%d", &guss);
//
//		}
//		else if (guss > num) {
//			printf("猜大了，请猜数字\n");
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
//			printf("输入有误，请重新输入！\n");
//
//		}
//
//	} while (input);
//
//	return 0;
//}