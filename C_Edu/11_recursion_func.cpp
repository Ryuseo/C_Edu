#include "11_recursion_func.h"

void play_11()
{
	int num;
	int play = 1;

	printf(" ���� ����\n\n");

	while (play)
	{
		printf("1. �ϳ����� ž ����\n");
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
			hanoi();
			break;
		default:
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}

//������ �ϳ����� ž ����
void hanoi()
{
	int input_n;
	printf("� ¥�� ž�� �ű���? : ");
	scanf_s("%d", &input_n);
	recursion(input_n, 'A', 'B', 'C');
}

//�ڱⰡ �ڱ��ڽ��� �θ��� �Լ�
void recursion(int n, char from, char tmp, char to)
{
	if (n == 1)								//Ż�� ���� ��ȯ���� void�� return�� ����?
	{
		printf("���� 1�� %c���� %c���� �ű��.\n", from, to);
	}
	else
	{
		recursion(n - 1, from, to, tmp);	//�ڱⰡ �ڽ��� �θ��� �ִ�.
		printf("���� %d�� %c���� %c���� �ű��.\n",n, from, to);
		recursion(n - 1, tmp, from, to);
	}
}