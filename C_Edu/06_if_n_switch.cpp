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

// 해당 연도가 윤년인지 계산하는 함수
void calculate_leap_year()	
{
	int year;

	printf("연도를 입력하시오.");
	scanf_s("%d", &year);

	// 윤년은 4년에 1번씩이며 100으로 나누어 떨어지는 해는 제외되지만 400으로 떨어지는 해는 윤년이라고 한다.
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d년은 윤년입니다.\n", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다.\n", year);
	}
}

// 각 달의 일수를 출력하는 함수
void calculate_days_per_month()
{
	int month, days;

	printf("달을 입력하시오.(1~12) : ");
	scanf_s("%d", &month);
	

	// switch가 점프테이블로 구현되는 경우가 많아 조건이 일정수 이상 되면 switch가 더 유리하다고 한다. 3개 이상의 경우 switch가 유리하다는 말이 있다.
	// 하지만 컴파일러마다 다르기도하고 같은 컴파일러라 하더라도 최적화에 따라 달라지는데다가 그렇게까지 극단적인 성능차이가 나지 않기에 의미에 두는게 좋다고 하는 사람도 있다.
	switch (month)
	{
	case 2:
		days = 28;
		break;
	case 4:			// 4,6,9,11은 동일하게 30일이기에 break;넣지 않음으로 같은 결과를 출력하도록 함
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:		// 어느 케이스에도 해당하지 않는 경우
		days = 31;
		break;
	}
	printf("%d월의 일수는 %d입니다. \n", month, days);
}