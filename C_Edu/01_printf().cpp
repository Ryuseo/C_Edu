#include "01_printf().h"

void play_01()
{
	int num;
	int play = 1;
	
	printf("printf() 관련 예제\n\n");

	while (play)
	{
		printf("1. Hello World 출력\n");
		printf("2. 여러줄 출력\n");
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
			print_Hello_World();
			break;
		case 2:
			multi_sentence();
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}

void print_Hello_World()
{
	printf("Hello World");
}

void multi_sentence()
{
	printf("***************\n");
	printf("Hello world\nHello C\n");
	printf("나는 게임을 좋아한다.");
	printf("\n나는 집밖을 나가는걸 싫어한다.\n");
	printf("LOL");
}