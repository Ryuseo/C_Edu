#include "07_loop.h"

void play_07()
{
	int num;
	int play = 1;

	printf("printf() ���� ����\n\n");

	while (play)
	{
		printf("1. \n");
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
			break;
		case 2:
			break;
		default:
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}