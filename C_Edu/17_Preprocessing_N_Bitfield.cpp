#include "17_Preprocessing_N_Bitfield.h"

//��ó����


void play_17()
{
	int num;
	int play = 1;

	printf("��ó����� ��Ʈ�ʵ� ���� ����\n\n");

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
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}