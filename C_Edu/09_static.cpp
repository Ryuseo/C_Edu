#include "09_static.h"
#define SUCCESS 1
#define FAIL 2
#define LIMIT 3

static int static_g_num = 0;

void play_09()
{
	int num;
	int play = 1;

	printf("static ���� ����\n\n");

	while (play)
	{
		printf("1. �α��� ����\n");
		printf("\n");
		printf("������ ���� ��ȣ �Է�.(�ٸ� ���α׷� ������ 0��) : ");
		scanf_s("%d", &num);

		system("cls");

		switch (num)
		{
		case 0:
			play = 0;
			printf("����.");
			break;
		case 1:
			login();
			break;
		default:
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}

void login()
{
	printf("static ���� : �α���\n\n");
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
	printf("�α��� ����\n");
}

int check(int id, int password)
{
	static int super_id = 1234;			// �Լ��� ����� �ٸ� ��������ó�� ���� �������� �ʰ� �����ִ´�.
	static int super_password = 5678;
	static int try_count = 0;			

	try_count++;
	if (try_count >= LIMIT)				// static�̱⿡ �ǹ̰� �ִ�. �׳� �����������ٸ� �ǹ̾��� if��
	{									// �׳� �����������ٸ� �Լ��� ������ try_count ������ ������� �ٽ� �Լ��� ���������� ���ο� �ʱ�ȭ�� ������ �Ǿ��� ���̴�.
		printf("Ƚ�� �ʰ�\n");
		exit(1);
	}
	if (id == super_id && password == super_password)
		return SUCCESS;
	else
		return FAIL;
}