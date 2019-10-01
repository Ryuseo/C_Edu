#include "09_static.h"
#define SUCCESS 1
#define FAIL 2
#define LIMIT 3

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
	static int super_id = 1234;
	static int super_password = 5678;
	static int try_count = 0;

	try_count++;
	if (try_count >= LIMIT)
	{
		printf("횟수 초과\n");
		exit(1);
	}
	if (id == super_id && password == super_password)
		return SUCCESS;
	else
		return FAIL;
}