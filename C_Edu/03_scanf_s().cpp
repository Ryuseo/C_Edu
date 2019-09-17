#include "03_scanf_s().h"

void play_03()
{
	int num;
	int play = 1;

	printf("printf() 관련 예제\n\n");

	while (play)
	{
		printf("1. 덧셈 프로그램\n");
		printf("2. 원의 면적 구하기\n");
		printf("3. 원 -> 달러 계산\n");
		printf("4. 사각형의 넓이와 둘레 계산");
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
			add();
			break;
		case 2:
			calculate_area_circle();
			break;
		case 3:
			exchange_rate();
			break;
		case 4:
			show_rect_info();
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}

void add()
{
	int input_a, input_b;												//입력 받아 저장할 변수
	printf("정수 2개 입력. 공백또는 엔터로 구분. : ");
	scanf_s("%d %d", &input_a, &input_b);								//정수 2개 입력
	printf("%d + %d = %d", input_a, input_b, input_a + input_b);	//결과 출력
}

void calculate_area_circle()
{
	float input_r;

	printf("구할 원의 반지름을 입력하시오. : ");
	scanf_s("%f", &input_r);

	printf("원의 면적은 %f\n", input_r * input_r * 3.1415);
}

void exchange_rate()
{
	float rate;						//원/달러 환율
	int money;						//돈

	printf("환율을 입력하세요. : ");
	scanf_s("%f",&rate);			//입력된 값이 변질되는데 이유를 모르겠음

	printf("원화를 입력하세요. : ");
	scanf_s("%d", &money);

	printf("원화 %d는 달러 %f입니다.\n", money, money / rate);
}

void show_rect_info()
{
	int input_w, input_h;
	printf("사각형의 너비와 높이를 입력하세요. 공백으로 구분합니다. : ");
	scanf_s("%d %d", &input_w, &input_h);

	printf("둘레는 %d이고 넓이는 %d입니다.\n", calculate_perimeter_rect(input_w, input_h),calculate_area_rect(input_w, input_h));
}

int calculate_perimeter_rect(int w, int h)
{
	return 2 * (w + h);
}

int calculate_area_rect(int w, int h)
{
	return w * h;
}