#include "01_printf().h"

// �������α׷� ���� ���α׷��� �������� ũ�� �з��ؼ� �����ϴ� �Լ�. �˾� ��� �������� ������ �ڸ�Ʈ�� �������� �ʴ´�.
void play_01()
{
	int num;
	int play = 1;
	
	// ������ �������α׷� �̸�
	printf("printf() ���� ����\n\n");

	while (play)
	{
		// �������α׷��� �ִ� ���� ����
		printf("1. Hello World ���\n");
		printf("2. ������ ���\n");
		printf("\n");
		printf("������ ���� ��ȣ �Է�.(�ٸ� ���α׷� ������ 0��) : ");

		// �Է�ó��
		scanf_s("%d", &num);

		system("cls");

		switch (num)	// �������α׷� ���� ���α׷��� ����ġ���� ����
		{
		case 0:
			play = 0;
			printf("����.");
			break;
		case 1:
			print_Hello_World();
			break;
		case 2:
			multi_sentence();
			break;
		default:
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}

void print_Hello_World()
{
	printf("Hello World");						// ��� ���α׷��� ������ ����.
}

void multi_sentence()
{
	printf("***************\n");				
	printf("Hello world\nHello C\n");			// printf�ϳ��� 2�� ���
	printf("���� ������ �����Ѵ�.");				// ���� ���
	printf("\n���� ������ �����°� �Ⱦ��Ѵ�.\n");	// �տ� ���� ������ ����ϰ� ����
	printf("LOL");								// ���
}