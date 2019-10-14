#include "09_static.h"
#define SUCCESS 1
#define FAIL 2
#define LIMIT 3

static int static_g_num = 0;

void play_09()
{
	int num;
	int play = 1;

	printf("static 관련 예제\n\n");

	while (play)
	{
		printf("1. 로그인 예제\n");
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
			login();
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}

void login()
{
	printf("static 예제 : 로그인\n\n");
	int id, password, result;

	while (true)
	{
		printf("id : ____\b\b\b\b");
		scanf_s("%d" , &id);
		printf("pass : ____\b\b\b\b");
		scanf_s("%d" , &password);
		result = check(id, password);
		if (result == SUCCESS) break;
	}
	printf("로그인 성공\n");
}

int check(int id, int password)
{
	static int super_id = 1234;			// 함수를 벗어나도 다른 지역변수처럼 값이 없어지지 않고 남아있는다.
	static int super_password = 5678;
	static int try_count = 0;			

	try_count++;
	if (try_count >= LIMIT)				// static이기에 의미가 있다. 그냥 지역변수였다면 의미없는 if문
	{									// 그냥 지역변수였다면 함수를 나가면 try_count 변수는 사라지고 다시 함수가 실행됬을때 새로운 초기화된 변수가 되었을 것이다.
		printf("횟수 초과\n");
		exit(1);
	}
	if (id == super_id && password == super_password)
		return SUCCESS;
	else
		return FAIL;
}