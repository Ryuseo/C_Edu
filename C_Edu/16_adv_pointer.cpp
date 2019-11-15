#include "16_adv_pointer.h"

void play_16()
{
	int num;
	int play = 1;

	printf(" ���� ����\n\n");

	while (play)
	{
		printf("1. ���� ������ ����\n");
		printf("2. ������ �迭 ����\n");
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
			double_pointer();
			break;
		case 2:
			array_pointer();
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		default:
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}

// ���� ������ ����
void double_pointer()
{
	int i = 100;	// ������ ����
	int* sp = &i;	// i�� ����Ű�� ������
	int** dp = &sp;	// sp�� ����Ű�� ���� ������

	printf("int i�� ��	: %d\n", i);
	printf("int i�� �ּ�	: %p\n\n", &i);

	// �������� ���� �ּ��̱⿡ %p�� ����ߴ�.
	printf("int* sp�� ��	: %p\n", sp);
	printf("int* sp�� ����Ű�� �ּ��� ��	: %d\n", *sp);
	printf("int* sp�� �ּ�	: %p\n\n", &sp);

	printf("int** dp�� ��	: %p\n", dp);
	printf("int** dp�� ����Ű�� �����Ͱ� ����Ű�� �ּ��� �� : %d\n", **dp);
	printf("int** dp�� �ּ�	: %p\n\n", &dp);

	printf("int i�� �ּҿ� int* sp�� ���� ������? : ");
	if (&i == sp) printf("��.\n\n");
	else printf("�ƴϿ�.\n\n");

	printf("int* sp�� �ּҿ� int** dp�� ���� ������? : ");
	if (&sp == dp) printf("��.\n\n\n");
	else printf("�ƴϿ�.\n\n\n");


	//���������ͷ� ������ ������ �� ����
	printf("**dp = 200 ����\n\n");

	**dp = 200;

	printf("int i�� ����? : %d\n\n", i);

	printf("���� int i2 = 300 ����. *dp = &i2 ����\n\n");
	int i2 = 300;

	*dp = &i2;

	printf("int i2�� ��	: %d\n", i2);
	printf("int i2�� �ּ�	: %p\n\n", &i2);

	printf("int* sp�� ��	: %p\n", sp);
	printf("int* sp�� ����Ű�� �ּ��� ��	: %d\n", *sp);
	printf("int* sp�� �ּ�	: %p\n\n", &sp);
}

// ������ �迭
void array_pointer()
{
	int ai[7];

	for (int i = 0; i < 7; ++i)
	{
		ai[i] = rand() % 100;
	}

	int* ap[7];
	for (int i = 0; i < 7; ++i)
	{
		ap[i] = &ai[i];
	}

	for (int i = 0; i < 7; ++i)
	{
		printf("ai[%d]�� �� = %d\n", i, ai[i]);
		printf("ap[%d]�� �� = %d\n", i, *ap[i]);
		printf("ap[%d]�� �ּ� = %p\n", i, ap[i]);
	}
}