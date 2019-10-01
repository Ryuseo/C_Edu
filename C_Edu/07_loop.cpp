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
		printf("2. 0~9 랜덤 배열 검색\n");
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
			search();
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
	//출력을 쉽게 10x10로 하려고 [10][10]으로 했을뿐.
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
	for (int i = 0; i < 100; ++i)		//[10][10]하고 [100]의 배열 위치는 동일하다. 하지만 10의 배수가 아닌 숫자일 경우 헷갈리기 쉬우니 왠만하면 하지 말자.
	{
		for (int j = 0; j < 100; ++j)	//[100]을 [10][10]으로 했다고 해서 O(pow(n,2))가 O(pow(n,4))가 되지 않는다. for문을 4개 써서 구현하더라도. 제곱을 어떻게 주석에 쓸까 고민이다.
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
	int nums[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };

	for (int i = 0; i < 10; ++i)
	{
		bool loop = true;
		while (loop == true)
		{
			int temp = rand() % 10;
			if (nums[temp] == -1)
			{
				loop = false;
				nums[temp] = i;
			}
		}
	}

	printf("찾을 숫자 입력 0~9 : ");
	int input;
	scanf_s("%d", &input);
	int loop = -1;

	printf("\n");
	while (input != nums[++loop])
	{
		printf("nums %d번째 번호는 %d, %d와 다릅니다.\n", loop + 1, nums[loop], input);
	}
	printf("\nnums %d번쨰 번호는 %d, %d와 같습니다.\n", loop + 1, nums[loop], input);
}