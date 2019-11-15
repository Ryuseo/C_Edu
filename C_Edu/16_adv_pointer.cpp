#include "16_adv_pointer.h"

void play_16()
{
	int num;
	int play = 1;

	printf(" 관련 예제\n\n");

	while (play)
	{
		printf("1. 더블 포인터 예제\n");
		printf("2. 포인터 배열 예제\n");
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
			double_pointer();
			break;
		case 2:
			array_pointer();
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

// 더블 포인터 예제
void double_pointer()
{
	int i = 100;	// 정수형 변수
	int* sp = &i;	// i를 가리키는 포인터
	int** dp = &sp;	// sp를 가리키는 더블 포인터

	printf("int i의 값	: %d\n", i);
	printf("int i의 주소	: %p\n\n", &i);

	// 포인터의 값은 주소이기에 %p로 출력했다.
	printf("int* sp의 값	: %p\n", sp);
	printf("int* sp가 가리키는 주소의 값	: %d\n", *sp);
	printf("int* sp의 주소	: %p\n\n", &sp);

	printf("int** dp의 값	: %p\n", dp);
	printf("int** dp가 가리키는 포인터가 가리키는 주소의 값 : %d\n", **dp);
	printf("int** dp의 주소	: %p\n\n", &dp);

	printf("int i의 주소와 int* sp의 값이 같은가? : ");
	if (&i == sp) printf("네.\n\n");
	else printf("아니요.\n\n");

	printf("int* sp의 주소와 int** dp의 값이 같은가? : ");
	if (&sp == dp) printf("네.\n\n\n");
	else printf("아니요.\n\n\n");


	//이중포인터로 정수형 변수의 값 변경
	printf("**dp = 200 실행\n\n");

	**dp = 200;

	printf("int i의 값은? : %d\n\n", i);

	printf("변수 int i2 = 300 선언. *dp = &i2 실행\n\n");
	int i2 = 300;

	*dp = &i2;

	printf("int i2의 값	: %d\n", i2);
	printf("int i2의 주소	: %p\n\n", &i2);

	printf("int* sp의 값	: %p\n", sp);
	printf("int* sp가 가리키는 주소의 값	: %d\n", *sp);
	printf("int* sp의 주소	: %p\n\n", &sp);
}

// 포인터 배열
void array_pointer()
{
	int ai[7];

	for (int i = 0; i < 7; ++i)
	{
		ai[i] = rand() % 100;
	}

	int* ap[7];
	for (int i = 0; i < 7; ++i)
	{
		ap[i] = &ai[i];
	}

	for (int i = 0; i < 7; ++i)
	{
		printf("ai[%d]의 값 = %d\n", i, ai[i]);
		printf("ap[%d]의 값 = %d\n", i, *ap[i]);
		printf("ap[%d]의 주소 = %p\n", i, ap[i]);
	}
}