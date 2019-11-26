#include "07_loop.h"

void play_07()
{
	int num;
	int play = 1;

	printf("�ݺ��� ���� ����\n\n");

	while (play)
	{
		printf("1. ���� ���� �迭 ��������\n");
		printf("2. 0~9 ���� �迭 �˻�\n");
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
			bubble_sort();
			break;
		case 2:
			search();
			break;
		default:
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}

// ���� �⺻���� ������ ���Ĺ���̴�.
static void bubble_sort()
{
	// ����� ���� 10x10�� �Ϸ��� [10][10]���� ������.
	int nums[10][10];
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			nums[i][j] = (rand() % 20000) - 10000;
		}
	}

	printf("������ : \n");
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			printf("%d\t", nums[i][j]);
		}
		printf("\n");
	}

	// ���� ����
	for (int i = 0; i < 100; ++i)			// [10][10]�ϰ� [100]�� �迭 ��ġ�� �����ϴ�. ������ 10�� ����� �ƴ� ������ ��� �򰥸��� ����� �ظ��ϸ� ���� ����.
	{
		for (int j = 0; j < 100; ++j)		// [100]�� [10][10]���� �ߴٰ� �ؼ� O(pow(n,2))�� O(pow(n,4))�� ���� �ʴ´�. for���� 4�� �Ἥ �����ϴ���. ������ ��� �ּ��� ���� ����̴�.
		{
			if (nums[0][i] < nums[0][j])	// �ڱ� �ڽŰ��� �������� ������	���ʿ������� ����ó������ ����.
			{
				nums[0][i] ^= nums[0][j] ^= nums[0][i] ^= nums[0][j];	// �������� ���� ���� ��Ʈ�������� ���� ���� �ٲٴ� ���̴�. �ӽ÷� �����͸� ������ ������ ������ �ʾƵ� �Ǵ°� �ŷ�����Ʈ!
			}
		}
	}

	printf("\n\n������ : \n");
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			printf("%d\t", nums[i][j]);
		}
		printf("\n");
	}
}

// �˻��ϴ� �Լ��̴�.
// while�� ���� ���� �����ε�, ������ �������°� ������ ������;;;
// ���� ������ ������ �������� �ٲ� �����̴�.
static void search()
{
	int nums[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };

	for (int i = 0; i < 10; ++i)	// �ߺ� �� ����̳� ����ó���� ���� �ʾƵ� �ǵ��� �ߺ��� �� ���� 10���� �迭�� 0~9������ ���� �־���.
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

	printf("ã�� ���� �Է� 0~9 : ");
	int input;
	scanf_s("%d", &input);
	int loop = -1;

	printf("\n");
	// �Է��� ���ڿ� ���� ������ ��� while���� �����Ѵ�. ��� ���������� �ݺ����� �����ϵ��� �ϴ°� ���� ���������� �ݺ����� �����ϵ��� �ϴ°� ���� �������̴�.
	while (input != nums[++loop])
	{
		printf("nums %d��° ��ȣ�� %d, %d�� �ٸ��ϴ�.\n", loop + 1, nums[loop], input);
	}
	printf("\nnums %d���� ��ȣ�� %d, %d�� �����ϴ�.\n", loop + 1, nums[loop], input);
}