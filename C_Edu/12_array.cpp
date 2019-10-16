#include "12_array.h"

void play_12()
{
	srand(time(NULL));
	int num;
	int play = 1;

	printf("�迭 ���� ����\n\n");

	while (play)
	{
		printf("1. ���� ��� ���� ��±�\n");
		printf("1. ���� ���� 5�� ��±�\n");
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
			random_meat_info();
			break;
		case 2:
			random_num_gene();
			break;
		case 3:
			array_to_func();
			break;
		default:
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}

// �������� ��� ������ �ۼ��ϰ� ����ϴ� �Լ�
void random_meat_info()
{
	// ������ �迭
	char meat[][9] = { { "��ġ��" }, { "����" }, { "�մٸ���" } };
	char grade[] = { 'A' ,'1' ,'2' };
	int price[] = { 1000,2000,3000 };

	// �迭�� �����ϰ� �����ؼ� �����
	printf("%s�� %c��޿� %d�Դϵ�~!\n", meat[rand() % 3], grade[rand() % 3], price[rand() % 3]);
}

// ������ ���� 5���� �迭�� �ְ� �� �迭�� ���ڸ� ��� ����ϴ� �ݺ����� �̿��� �迭 ���� ����
void random_num_gene()
{
	int nums[5] = { 0, };

	// �迭�� ���������� ��ȸ�ϸ� ������ �Է�
	for (int i = 0; i < 5; ++i)
	{
		nums[i] = rand() % 10;
	}

	// �迭�� ���������� �����ؼ� �����
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\t", nums[i]);
	}
	printf("\n");
}

// �Լ����� �迭 �����ϴ� �Լ� ����
void array_to_func()
{
	int array_n[3] = { rand() % 10,rand() % 10,rand() % 10 };	// �������� �ʱ�ȭ
	printf("���� �迭 ���� : ");
	for (int i = 0; i < 3; ++i)									// ������ ���� �� Ȯ��
	{
		printf("%d ", array_n[i]);
	}
	printf("\n\n");
	
	recive_array(array_n, 3);									// ����

	printf("�Լ� ������ �迭 ���� : ");
	for (int i = 0; i < 3; ++i)									// ������ �Լ����� �� �۾� ���� Ȯ��
	{
		printf("%d ", array_n[i]);
	}
	printf("\n\n");
}

// ���� �迭�� �޴� �Լ�
void recive_array(int a[], const int size)
{
	printf("���� �迭 ���� : ");
	for (int i = 0; i < size; ++i)								// ���� ���� Ȯ��
	{
		printf("%d ", a[i]);
	}
	printf("\n\n");

	printf("�迭 ���ҵ��� 1�� ���ϰ� �� �Լ� ����.");

	for (int i = 0; i < size; ++i)								// ���� �迭�� ���� �ٲ�
	{
		++a[i];
	}
}