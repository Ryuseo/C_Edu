#include "12_array.h"

void play_12()
{
	srand(time(NULL));
	int num;
	int play = 1;

	printf("배열 관련 예제\n\n");

	while (play)
	{
		printf("1. 랜덤 고기 정보 출력기\n");
		printf("1. 랜덤 숫자 5개 출력기\n");
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
			random_meat_info();
			break;
		case 2:
			random_num_gene();
			break;
		case 3:
			array_to_func();
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}

// 랜덤으로 고기 정보를 작성하고 출력하는 함수
void random_meat_info()
{
	// 다차원 배열
	char meat[][9] = { { "살치살" }, { "삼겹살" }, { "앞다리살" } };
	char grade[] = { 'A' ,'1' ,'2' };
	int price[] = { 1000,2000,3000 };

	// 배열에 랜덤하게 접근해서 출력함
	printf("%s이 %c등급에 %d입니돠~!\n", meat[rand() % 3], grade[rand() % 3], price[rand() % 3]);
}

// 랜덤한 숫자 5개를 배열에 넣고 그 배열의 숫자를 모두 출력하는 반복문을 이용한 배열 응용 예제
void random_num_gene()
{
	int nums[5] = { 0, };

	// 배열을 순차적으로 순회하며 테이터 입력
	for (int i = 0; i < 5; ++i)
	{
		nums[i] = rand() % 10;
	}

	// 배열에 순차적으로 접근해서 출력함
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\t", nums[i]);
	}
	printf("\n");
}

// 함수에게 배열 전달하는 함수 예제
void array_to_func()
{
	int array_n[3] = { rand() % 10,rand() % 10,rand() % 10 };	// 랜덤으로 초기화
	printf("보낼 배열 내용 : ");
	for (int i = 0; i < 3; ++i)									// 보내기 전에 값 확인
	{
		printf("%d ", array_n[i]);
	}
	printf("\n\n");
	
	recive_array(array_n, 3);									// 보냄

	printf("함수 종료후 배열 내용 : ");
	for (int i = 0; i < 3; ++i)									// 받은후 함수에서 한 작업 적용 확인
	{
		printf("%d ", array_n[i]);
	}
	printf("\n\n");
}

// 보낸 배열을 받는 함수
void recive_array(int a[], const int size)
{
	printf("받은 배열 내용 : ");
	for (int i = 0; i < size; ++i)								// 받은 내용 확인
	{
		printf("%d ", a[i]);
	}
	printf("\n\n");

	printf("배열 원소들을 1씩 더하고 이 함수 종료.");

	for (int i = 0; i < size; ++i)								// 받은 배열의 값을 바꿈
	{
		++a[i];
	}
}