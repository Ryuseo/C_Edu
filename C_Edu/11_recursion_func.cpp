#include "11_recursion_func.h"

void play_11()
{
	int num;
	int play = 1;

	printf(" 관련 예제\n\n");

	while (play)
	{
		printf("1. 하노이의 탑 예제\n");
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
			hanoi();
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}

//유명한 하노이의 탑 문제
void hanoi()
{
	int input_n;
	printf("몇개 짜리 탑을 옮길까요? : ");
	scanf_s("%d", &input_n);
	recursion(input_n, 'A', 'B', 'C');
}

//자기가 자기자신을 부르는 함수
void recursion(int n, char from, char tmp, char to)
{
	if (n == 1)								//탈출 조건 반환형이 void라 return은 없다?
	{
		printf("원판 1을 %c에서 %c으로 옮긴다.\n", from, to);
	}
	else
	{
		recursion(n - 1, from, to, tmp);	//자기가 자신을 부르고 있다.
		printf("원판 %d을 %c에서 %c으로 옮긴다.\n",n, from, to);
		recursion(n - 1, tmp, from, to);
	}
}