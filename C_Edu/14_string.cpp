#include "14_string.h"

#define ARRAY_SIZE 5

void play_14()
{
	int num;
	int play = 1;

	printf("���ڿ� ���� ����\n\n");

	while (play)
	{
		printf("1. �迭�� �ʱ�ȭ ������ ����� ���\n");
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
			init_string();
			break;
		case 2:
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

// ���ڿ��� �ʱ�ȭ�ϴ� 3���� ���
void init_string()
{
	// �����ϸ鼭 �ʱ�ȭ�� ������ ������ �ݵ�� ũ�⸦ ����ؾ� �Ѵ�.
	char string_01[ARRAY_SIZE];
	
	// ���ڿ� �ʱ�ȭ ����̶�� ���ٴ� �迭 �ʱ�ȭ ����� ������.
	// �ʱ�ȭ �ϸ鼭 �����Ҷ� �ԷµǴ� �����Ϳ� ���� ũ�Ⱑ ��������.
	// �ʱ�ȭ�ϴ� �����ͺ��� ū �����͸� ������ �� �ְ� �Ϸ��� ũ�⸦ ����ϰų� NULL���ڸ� �־��ָ� �ȴ�.
	char string_02[] = { 'A', 'B', 'C', 'D', '\0' };
	
	// �Ƹ� ���� ���� ���Ե� ���ڿ� �ʱ�ȭ ���.
	char string_03[] = "abcd";

	// ���� �������� �ʱ�ȭ ���.
	string_01[0] = '1';
	string_01[1] = '2';
	string_01[2] = '3';
	string_01[3] = '4';
	string_01[4] = '\0';

	// ũ�⸦ �˼� ���� �迭�� ��¹��.
	int i = 0;
	while (string_01[i] != '\0')
	{
		// ++i�� �ƴ� i++�� �� ������ 5-2�� ������ �ִ�.
		printf("%c", string_01[i++]);
	}
	printf("\n");


	// ������ ���ڿ��� �׳� ����ϸ� �ȴ�.
	printf("%s\n", string_02);
	printf("%s\n", string_03);
}