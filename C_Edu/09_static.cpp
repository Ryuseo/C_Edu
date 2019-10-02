#include "09_static.h"
#define SUCCESS 1
#define FAIL 2
#define LIMIT 3

//static을 위해서 만들었다. extern까지는 기존 예제프로그램과는 구성이 많이 다르게 되있다.
void play_09()
{
	login();
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
	static int super_id = 1234;			//함수를 벗어나도 다른 지역변수처럼 값이 없어지지 않고 남아있는다.
	static int super_password = 5678;
	static int try_count = 0;			

	try_count++;
	if (try_count >= LIMIT)				//static이기에 의미가 있다. 그냥 지역변수였다면 의미없는 변수
	{
		printf("횟수 초과\n");
		exit(1);
	}
	if (id == super_id && password == super_password)
		return SUCCESS;
	else
		return FAIL;
}