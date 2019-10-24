#include "15_structure.h"

void play_15()
{
	int num;
	int play = 1;

	printf("����ü ���� ����\n\n");

	while (play)
	{
		printf("1. ����ü �⺻ ����\n");
		printf("2. ����ü�� ������ ����ü ����\n");
		printf("3. ����ü �����Ϳ� ����ü ����\n");
		printf("4. ����ü�� �Լ� ����\n");
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
			calculate_distance();
			break;
		case 2:
			input_employee_info();
			break;
		case 3:
			pointer_N_struct();
			break;
		case 4:
			func_N_struct();
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

void calculate_distance()
{
	three_D_point_pos a_point, b_point;

	//-10.00 ~ 10.00�� �ʱ�ȭ
	a_point.x = (rand() % 2001 - 1000) / 100.f;
	a_point.y = (rand() % 2001 - 1000) / 100.f;
	a_point.z = (rand() % 2001 - 1000) / 100.f;

	b_point.y = (rand() % 2001 - 1000) / 100.f;
	b_point.z = (rand() % 2001 - 1000) / 100.f;
	b_point.x = (rand() % 2001 - 1000) / 100.f;

	printf("a_point.x = %f,\ta_point.y = %f,\ta_point.z = %f\n", a_point.x, a_point.y, a_point.z);
	printf("b_point.x = %f,\tb_point.y = %f,\tb_point.z = %f\n", b_point.x, b_point.y, b_point.z);

	//3�������� 2�� ������ �Ÿ� ���ϴ� ����
	printf("%f", sqrt(pow((a_point.x - b_point.x), 2) + pow(a_point.y - b_point.y, 2) + pow(a_point.z - b_point.z, 2)));
}

// ����ü�� ����ü�� ������ �������� �����͸� �־���.
void input_employee_info()
{
	employee_info employee[20] = { NULL };

	int i = 0;
	while (true)
	{
		printf("�̸��� �Է��Ͻÿ�. : ");
		scanf_s("%s",employee[i].name, 20);
		printf("���̸� �Է��Ͻÿ�. : ");
		scanf_s("%d", &employee[i].age);
		printf("������ �Է��Ͻÿ�. : ");
		scanf_s("%f", &employee[i].salary);
		printf("��å�� �Է��Ͻÿ�. : ");
		scanf_s("%s", employee[i].position, 20);
		printf("�Ի����� �Է��Ͻÿ�. �������� ���� : ");
		scanf_s("%d %d %d", &employee[i].join_day.year, &employee[i].join_day.month, &employee[i].join_day.day);
		printf("������ �Է��Ͻÿ�. �������� ���� : ");
		scanf_s("%d %d %d", &employee[i].date_of_birth.year, &employee[i].date_of_birth.month, &employee[i].date_of_birth.day);

		++i;

		if (i >= 20)
		{
			printf("�Է¼� ���ѿ� �����߽��ϴ�. �����մϴ�.\n");
		}

		printf("�������� 0 �ƴϸ� 1 : ");
		scanf_s("%d", &i);

		if (i == 0)
		{
			break;
		}
	}

	for (i = 0; i < 20 && employee[i].age != 0; ++i)
	{
		printf("�̸�\t: %s ",employee[i].name);
		printf("����\t: %d�� ", employee[i].age);
		printf("����\t: %f ", employee[i].salary);
		printf("��å\t: %s ", employee[i].position);
		printf("�Ի���\t: %d�� %d�� %d��", employee[i].date_of_birth.year, employee[i].date_of_birth.month, employee[i].date_of_birth.day);
		printf("����\t: %d�� %d�� %d��", employee[i].date_of_birth.year, employee[i].date_of_birth.month, employee[i].date_of_birth.day);
		printf("\n\n");
	}
}

// ��ũ�� ����Ʈ
// �����Ҵ� �ȵ�� �� ����� �����ϰԸ� ����
void pointer_N_struct()
{
	linked_list a, b, *p;

	a.data = 1;
	a.next = &b;
	b.data = 2;
	b.next = NULL;	//���������� ���� �˸��� ����

	p = &a;			//Ž���� ���ۼ���

	while (p != NULL)
	{
		printf("data : %d\n",p->data);
		p = p->next;
	}
}

void func_N_struct()
{
	year_month_day a = {1,1,1};

	printf("a.year = %d\n", a.year);

	sub_capyfunc_of_func_N_struct(a);

	printf("a.year = %d\n",a.year);

	sub_movefunc_of_func_N_struct(&a);

	printf("a.year = %d\n", a.year);
}

void sub_capyfunc_of_func_N_struct(year_month_day a)
{
	a.year = 10;
}

void sub_movefunc_of_func_N_struct(year_month_day* a)
{
	a->year = 20;
}