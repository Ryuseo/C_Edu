#include "07_loop.h"

void play_07()
{
	int num;
	int play = 1;

	srand(time(NULL));

	printf("반복문 관련 예제\n\n");

	while (play)
	{
		printf("1. 랜덤 정수 배열 버블정렬\n");
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
			bubble_sort();
			break;
		case 2:
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}

void bubble_sort()
{
	int nums[10][10];

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			nums[i][j] = (rand() % 20000) - 10000;
		}
	}

	printf("정렬전 : \n");
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			printf("%d\t", nums[i][j]);
		}
		printf("\n");
	}

	//버블 정렬
	for (int i = 0; i < 100; ++i)
	{
		for (int j = 0; j < 100; ++j)
		{
			if (nums[0][i] < nums[0][j])
			{
				nums[0][i] ^= nums[0][j] ^= nums[0][i] ^= nums[0][j];
			}
		}
	}

	printf("\n\n정렬후 : \n");
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			printf("%d\t", nums[i][j]);
		}
		printf("\n");
	}
}

void search()
{
	int nums[10];

	for (int i = 0; i < 10; ++i)
	{
		bool loop = true;
		while (loop)
		{	
			int temp = rand() % 10;
			for (int j = 0; j < i; ++j)
			{
				if (temp == nums[j])
				{
					loop = true;
					break;
				}
				else
				{
					nums[i] = temp;
					loop = false;
				}
			}
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		printf("%d\t", nums[i]);
	}
	printf("\n");

	int input;
	scanf_s("%d", &input);
}