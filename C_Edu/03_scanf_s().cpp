#include "03_scanf_s().h"

void play_03()
{
	int num;
	int play = 1;

	printf("scanf_s() ���� ����\n\n");

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

// �Լ� �̸���� �Է¹��� �μ��� ���ϴ� �Լ���.
static void add()
{
	int input_a, input_b;												// �Է� �޾� ������ ����
	printf("���� 2�� �Է�. ����Ǵ� ���ͷ� ����. : ");
	scanf_s("%d %d", &input_a, &input_b);								// ���� 2�� �Է�
	printf("%d + %d = %d", input_a, input_b, input_a + input_b);		// ��� ���
}

// ���� ������ ���ϴ� �Լ���.
static void calculate_area_circle()
{
	float input_r;

	printf("���� ���� �������� �Է��Ͻÿ�. : ");
	scanf_s("%f", &input_r);

	printf("%f\n", input_r);
	printf("���� ������ %f\n", (double)input_r * (double)input_r * 3.1415);
	// �Է��Ҷ��� %f�� ���� float�� ������� ����ġ��
	// ����Ҷ��� double�� ĳ�����϶�� ������
}

// ȯ�� �����̴�.
static void exchange_rate()
{
	float rate;						// ��/�޷� ȯ��
	int money;						// ��

	printf("ȯ���� �Է��ϼ���. : ");
	scanf_s("%f",&rate);			// float����ص� �Է� ������ ���� ���� �������ٵ� ������ �Ǽ��� ���� ������ �����. �����Ҹ�. �޸𸮰� �ջ��������

	printf("��ȭ�� �Է��ϼ���. : ");
	scanf_s("%d", &money);

	printf("��ȭ %d�� �޷� %f�Դϴ�.\n", money, money / rate);
}

// �簢�� �ѷ��� ���� ����Լ���. �̸��� �ʹ� ������� ���� ����̶�� ������.
static void show_rect_info()
{
	int input_w, input_h;
	printf("�簢���� �ʺ�� ���̸� �Է��ϼ���. �������� �����մϴ�. : ");
	scanf_s("%d %d", &input_w, &input_h);

	// �Լ����� ���� ��ȯ�ϹǷ� ���� �Ѱ��ְ� �ִ�.
	printf("�ѷ��� %d�̰� ���̴� %d�Դϴ�.\n", calculate_perimeter_rect(input_w, input_h),calculate_area_rect(input_w, input_h));
}

// �簢���� �ѷ��� ���ϴ� �Լ�
static int calculate_perimeter_rect(const int w, const int h)
{
	return 2 * (w + h);
}

// �簢���� ���̸� ���ϴ� �Լ�
static int calculate_area_rect(const int w, const int h)
{
	return w * h;
}