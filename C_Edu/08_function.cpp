#include "08_function.h"

void play_08()
{
	int num;
	int play = 1;

	printf("�Լ� ���� ����\n\n");	// �Ű����� �Ѱ��ְ� ��ȯ �޴� �Լ� �ϳ� ������ �ڴ�

	while (play)
	{
		printf("1. �Ű����� �ѱ�� ��ȯ�޴� �Լ� ����.\n");
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
			func();
			break;
		default:
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}

// ���ݱ��� �ֱ���â ����� �Լ��� ���� ������ ������ �ϳ� �;����� �ϴ� �������.
// �Ű������� 2���� �ް� ���� ��ȯ�Ѵ�. ���� �������� return�� ����.
static void func()
{
	int input_a, input_b;

	printf("���� ���� 2�� �Է��ϼ���. : ");
	scanf_s("%d %d",&input_a, &input_b);

	printf("add()�Լ��� input_a(%d)�� input_b(%d)�� �Ű������� �ѱ�ϴ�.\n",input_a, input_b);
	int recive = add(input_a, input_b);
	printf("%d�� ��ȯ �޾ҽ��ϴ�.", recive);
}

static int add(const int a, const int b)
{
	return a + b;
}