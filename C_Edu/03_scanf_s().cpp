#include "03_scanf_s().h"

void play_03()
{
	int num;
	int play = 1;

	printf("scanf_s() 관련 예제\n\n");

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

// 함수 이름대로 입력받은 두수를 더하는 함수다.
static void add()
{
	int input_a, input_b;												// 입력 받아 저장할 변수
	printf("정수 2개 입력. 공백또는 엔터로 구분. : ");
	scanf_s("%d %d", &input_a, &input_b);								// 정수 2개 입력
	printf("%d + %d = %d", input_a, input_b, input_a + input_b);		// 결과 출력
}

// 윈의 면적을 구하는 함수다.
static void calculate_area_circle()
{
	float input_r;

	printf("구할 원의 반지름을 입력하시오. : ");
	scanf_s("%f", &input_r);

	printf("%f\n", input_r);
	printf("원의 면적은 %f\n", (double)input_r * (double)input_r * 3.1415);
	// 입력할때는 %f를 쓰면 float로 받으라고 난리치고
	// 출력할때는 double로 캐스팅하라고 난리야
}

// 환율 계산기이다.
static void exchange_rate()
{
	float rate;						// 원/달러 환율
	int money;						// 돈

	printf("환율을 입력하세요. : ");
	scanf_s("%f",&rate);			// float라고해도 입력 받으면 받은 값이 들어가야할텐데 정수는 실수든 값에 오류가 생긴다. 이유불명. 메모리가 손상됬을지도

	printf("원화를 입력하세요. : ");
	scanf_s("%d", &money);

	printf("원화 %d는 달러 %f입니다.\n", money, money / rate);
}

// 사각형 둘레와 넓이 계산함수다. 이름이 너무 길어져서 정보 출력이라고 지었다.
static void show_rect_info()
{
	int input_w, input_h;
	printf("사각형의 너비와 높이를 입력하세요. 공백으로 구분합니다. : ");
	scanf_s("%d %d", &input_w, &input_h);

	// 함수에서 값을 반환하므로 직접 넘겨주고 있다.
	printf("둘레는 %d이고 넓이는 %d입니다.\n", calculate_perimeter_rect(input_w, input_h),calculate_area_rect(input_w, input_h));
}

// 사각형의 둘레를 구하는 함수
static int calculate_perimeter_rect(const int w, const int h)
{
	return 2 * (w + h);
}

// 사각형의 넓이를 구하는 함수
static int calculate_area_rect(const int w, const int h)
{
	return w * h;
}