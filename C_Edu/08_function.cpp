#include "08_function.h"

void play_08()
{
	int num;
	int play = 1;

	printf("함수 관련 예제\n\n");	// 매개변수 넘겨주고 반환 받는 함수 하나 만들어야 겠다

	while (play)
	{
		printf("1. 매개변수 넘기고 반환받는 함수 예제.\n");
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
			func();
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}

// 지금까지 주구장창 만든게 함수라서 굳이 예제를 만들어야 하나 싶었지만 일단 만들었다.
// 매개변수도 2개나 받고 값도 반환한다. 정말 오랜만에 return을 썻다.
static void func()
{
	int input_a, input_b;

	printf("더할 숫자 2개 입력하세요. : ");
	scanf_s("%d %d",&input_a, &input_b);

	printf("add()함수에 input_a(%d)와 input_b(%d)를 매개변수로 넘깁니다.\n",input_a, input_b);
	int recive = add(input_a, input_b);
	printf("%d를 반환 받았습니다.", recive);
}

static int add(const int a, const int b)
{
	return a + b;
}