#include "06_if_n_switch.h"

void play_06()
{
	int num;
	int play = 1;

	printf("조건문 관련 예제\n\n");

	while (play)
	{
		printf("1. 윤년 계산(if)\n");
		printf("2. 각 달당 일수 출력(switch)");
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
			calculate_leap_year();
			break;
		case 2:
			calculate_days_per_month();
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}

void calculate_leap_year()
{
	int year;

	printf("연도를 입력하시오.");
	scanf_s("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d년은 윤년입니다.\n", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다.\n", year);
	}
}

void calculate_days_per_month()
{
	int month, days;

	printf("달을 입력하시오.(1~12) : ");
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
	printf("%d월의 일수는 %d입니다. \n", month, days);
}