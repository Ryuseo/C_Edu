#include "01_printf().h"

void play_01()
{
	int num;
	int play = 1;
	
	printf("printf() ���� ����\n\n");

	while (play)
	{
		printf("1. Hello World ���\n");
		printf("2. ������ ���\n");
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
			print_Hello_World();
			break;
		case 2:
			multi_sentence();
			break;
		default:
			printf("���� ����. �ٽ� �Է�");
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
	printf("���� ������ �����Ѵ�.");
	printf("\n���� ������ �����°� �Ⱦ��Ѵ�.\n");
	printf("LOL");
}