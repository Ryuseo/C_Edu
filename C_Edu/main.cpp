#include "01_printf().h"
#include "02_Warmnig_Up.h"

int main(void)
{
	int num;
	int play = 1;
	while (play)
	{
		printf("0. ����\n");
		printf("1. printf() ���� ����.\n");
		printf("2. �������� ���� ����.\n");
		printf("\n");
		printf("������ ���α׷� ��ȣ �Է� : ");

		scanf_s("%d", &num);
		system("cls");

		switch (num)
		{
		case 0:
			printf("����.");
			play = 0;
			break;
		case 1:
			play_01();
			break;
		case 2:
			calculater();
			break;
		default:
			printf("���� ��ȣ. �ٽ� �Է�.\n");
			break;
		}
	}
}