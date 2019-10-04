#include "13_pointer.h"

//드디어 C의 꽃이자 C의 최고의 무기이며 모든걸 망치는 만악의 근원인 포인터다. 그리고 제일 어렵다.
void play_13()
{
	int num;
	int play = 1;

	printf(" 관련 예제\n\n");

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