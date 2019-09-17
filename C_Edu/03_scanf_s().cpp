#include "03_scanf_s().h"

void play_03()
{
	int num;
	int play = 1;

	printf("printf() ���� ����\n\n");

	while (play)
	{
		printf("1. ���� ���α׷�\n");
		printf("2. ���� ���� ���ϱ�\n");
		printf("3. �� -> �޷� ���\n");
		printf("4. �簢���� ���̿� �ѷ� ���");
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
			add();
			break;
		case 2:
			calculate_area_circle();
			break;
		case 3:
			exchange_rate();
			break;
		case 4:
			show_rect_info();
			break;
		default:
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}

void add()
{
	int input_a, input_b;												//�Է� �޾� ������ ����
	printf("���� 2�� �Է�. ����Ǵ� ���ͷ� ����. : ");
	scanf_s("%d %d", &input_a, &input_b);								//���� 2�� �Է�
	printf("%d + %d = %d", input_a, input_b, input_a + input_b);	//��� ���
}

void calculate_area_circle()
{
	float input_r;

	printf("���� ���� �������� �Է��Ͻÿ�. : ");
	scanf_s("%f", &input_r);

	printf("���� ������ %f\n", input_r * input_r * 3.1415);
}

void exchange_rate()
{
	float rate;						//��/�޷� ȯ��
	int money;						//��

	printf("ȯ���� �Է��ϼ���. : ");
	scanf_s("%f",&rate);			//�Էµ� ���� �����Ǵµ� ������ �𸣰���

	printf("��ȭ�� �Է��ϼ���. : ");
	scanf_s("%d", &money);

	printf("��ȭ %d�� �޷� %f�Դϴ�.\n", money, money / rate);
}

void show_rect_info()
{
	int input_w, input_h;
	printf("�簢���� �ʺ�� ���̸� �Է��ϼ���. �������� �����մϴ�. : ");
	scanf_s("%d %d", &input_w, &input_h);

	printf("�ѷ��� %d�̰� ���̴� %d�Դϴ�.\n", calculate_perimeter_rect(input_w, input_h),calculate_area_rect(input_w, input_h));
}

int calculate_perimeter_rect(int w, int h)
{
	return 2 * (w + h);
}

int calculate_area_rect(int w, int h)
{
	return w * h;
}