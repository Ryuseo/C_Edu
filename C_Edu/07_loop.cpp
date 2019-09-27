#include "07_loop.h"

void play_07()
{
	int num;
	int play = 1;

	printf("printf() 관련 예제\n\n");

	while (play)
	{
		printf("1. \n");
		printf("\n");
		printf("실행할 예제 번호 입력.(다른 프로그램 실행은 0번) : ");
		scanf_s("%d", &num);

		system("cls");

		switch (num)
		{
		case 0:
			play = 0;
			printf("종료.");
			break;
		case 1:
			break;
		case 2:
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}