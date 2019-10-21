#include "14_string.h"

#define ARRAY_SIZE 5

void play_14()
{
	int num;
	int play = 1;

	printf("문자열 관련 예제\n\n");

	while (play)
	{
		printf("1. 배열의 초기화 세가지 방법과 출력\n");
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
			init_string();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}

// 문자열을 초기화하는 3가지 방법
void init_string()
{
	// 선언하면서 초기화를 해주지 않으면 반드시 크기를 명시해야 한다.
	char string_01[ARRAY_SIZE];
	
	// 문자열 초기화 방법이라기 보다는 배열 초기화 방법에 가깝다.
	// 초기화 하면서 선언할때 입력되는 데이터에 따라서 크기가 정해진다.
	// 초기화하는 데이터보다 큰 데이터를 저장할 수 있게 하려면 크기를 명시하거나 NULL문자를 넣어주면 된다.
	char string_02[] = { 'A', 'B', 'C', 'D', '\0' };
	
	// 아마 제일 많이 쓰게될 문자열 초기화 방법.
	char string_03[] = "abcd";

	// 제일 기초적인 초기화 방법.
	string_01[0] = '1';
	string_01[1] = '2';
	string_01[2] = '3';
	string_01[3] = '4';
	string_01[4] = '\0';

	// 크기를 알수 없는 배열의 출력방식.
	int i = 0;
	while (string_01[i] != '\0')
	{
		// ++i가 아닌 i++를 쓴 이유는 5-2번 예제에 있다.
		printf("%c", string_01[i++]);
	}
	printf("\n");


	// 하지만 문자열은 그냥 출력하면 된다.
	printf("%s\n", string_02);
	printf("%s\n", string_03);
}