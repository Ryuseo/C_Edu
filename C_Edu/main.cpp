#include "01_printf().h"
#include "02_Warmnig_Up.h"
#include "03_scanf_s().h"
#include "04_variable.h"

int main(void)
{
	int num;
	int play = 1;
	while (play)
	{
		printf("0. 종료\n");
		printf("1. printf() 관련 예제 프로그램.\n");
		printf("2. 연습으로 만든 계산기.\n");
		printf("3. scanf_s() 관련 예제 프로그램.\n");
		printf("4. 변수 관련 예제 프로그램\n");
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
		case 3:
			play_03();
			break;
		case 4:
			play_04();
			break;
		default:
			printf("없는 번호. 다시 입력.\n");
			break;
		}
	}
}