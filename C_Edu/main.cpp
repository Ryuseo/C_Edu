#include "01_printf().h"
#include "02_Warmnig_Up.h"

int main(void)
{
	int num;
	int play = 1;
	while (play)
	{
		printf("0. 종료\n");
		printf("1. printf() 관련 예제.\n");
		printf("2. 연습으로 만든 계산기.\n");
		printf("\n");
		printf("실행할 프로그램 번호 입력 : ");

		scanf_s("%d", &num);
		system("cls");

		switch (num)
		{
		case 0:
			printf("종료.");
			play = 0;
			break;
		case 1:
			play_01();
			break;
		case 2:
			calculater();
			break;
		default:
			printf("없는 번호. 다시 입력.\n");
			break;
		}
	}
}