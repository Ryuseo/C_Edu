#include "01_printf().h"
#include "02_Warmnig_Up.h"
#include "03_scanf_s().h"
#include "04_variable.h"

int main(void)
{
	int num;
	int play = 1;
	while (play)
	{
		printf("0. ����\n");
		printf("1. printf() ���� ���� ���α׷�.\n");
		printf("2. �������� ���� ����.\n");
		printf("3. scanf_s() ���� ���� ���α׷�.\n");
		printf("4. ���� ���� ���� ���α׷�\n");
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
		case 3:
			play_03();
			break;
		case 4:
			play_04();
			break;
		default:
			printf("���� ��ȣ. �ٽ� �Է�.\n");
			break;
		}
	}
}