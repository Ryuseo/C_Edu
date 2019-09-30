#include "06_if_n_switch.h"

void play_06()
{
	int num;
	int play = 1;

	printf("���ǹ� ���� ����\n\n");

	while (play)
	{
		printf("1. ���� ���(if)\n");
		printf("2. �� �޴� �ϼ� ���(switch)");
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
			calculate_leap_year();
			break;
		case 2:
			calculate_days_per_month();
			break;
		default:
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}

void calculate_leap_year()
{
	int year;

	printf("������ �Է��Ͻÿ�.");
	scanf_s("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d���� �����Դϴ�.\n", year);
	}
	else
	{
		printf("%d���� ������ �ƴմϴ�.\n", year);
	}
}

void calculate_days_per_month()
{
	int month, days;

	printf("���� �Է��Ͻÿ�.(1~12) : ");
	scanf_s("%d", &month);
	
	switch (month)
	{
	case 2:
		days = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}
	printf("%d���� �ϼ��� %d�Դϴ�. \n", month, days);
}