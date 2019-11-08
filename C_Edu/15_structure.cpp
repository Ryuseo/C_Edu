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
		printf("5. ���Ͽ�(����ü) ����\n");
		printf("6. ����ü �ȿ� ���Ͽ� �ֱ� ����\n");
		printf("7. ������(�̳�) ����\n");
		printf("8. typedef ����\n");
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
			use_union();
			break;
		case 6:
			choose_between_two_things();
			break;
		case 7:
			enumeration();
			break;
		case 8:
			typedefine();
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

// �Լ��� ����ü �ѱ��
// ��� �迭 �ѱ��� ũ�� �ٸ��� �ʴ�.
void func_N_struct()
{
	year_month_day a = {1,1,1};

	printf("a.year = %d\n", a.year);

	sub_capyfunc_of_func_N_struct(a);

	printf("a.year = %d\n",a.year);

	sub_movefunc_of_func_N_struct(&a);

	printf("a.year = %d\n", a.year);
}

// ����ü�� �޴� �Լ�. ������ ����
void sub_capyfunc_of_func_N_struct(year_month_day a)
{
	a.year = 10;
}

// ����ü�� �޴� �Լ�. ������ ����
void sub_movefunc_of_func_N_struct(year_month_day* a)
{
	a->year = 20;
}

// ���Ͽ� ����
void use_union()
{
	uni A;
	uni B;

	// ���� ����ü�̱⿡ ��������� �ϳ��� ���� ����ȴ�.
	// �ƽ�Ű �ڵ� 1�� ��(��Ȯ���� SOH), 97�� 'a'�̴�
	printf("A.i = 1 ����\n");
	A.i = 1;
	printf("A.i = %d\n", A.i);
	printf("A.i = %c\n", A.c);
	printf("\n");

	printf("A.c = 'a' ����\n");
	A.c = 'a';
	printf("A.i = %d\n", A.i);
	printf("A.i = %c\n", A.c);
	printf("\n");

	// ���� �ٸ� ����ü�� ���� �ٲ��� �ʴ´�.
	printf("B.i = 2 ����\n");
	B.i = 2;
	printf("A.i = %d\n", A.i);
	printf("A.i = %c\n", A.c);
	printf("\n");

	printf("B.c = 'b' ����\n");
	B.c = 'b';
	printf("A.i = %d\n", A.i);
	printf("A.i = %c\n", A.c);
	printf("\n");
}

// ����ü �ȿ� ���Ͽ� ����
void  choose_between_two_things()
{
	unistruct test;

	test.A.c = 'a';
	test.C.A.year = 2020;
	test.C.A.month = 1;
	test.C.A.day = 2;

	printf("test.A.c = %c\n", test.A.c);
	printf("test.A.c = %d\n", test.C.A.year);
	printf("test.A.c = %d\n", test.C.A.month);
	printf("test.A.c = %d\n", test.C.A.day);

	printf("\n\ntest.C ���Է�\n\n");

	test.C.B.x = 1.0f;
	test.C.B.y = 2.0f;
	test.C.B.z = 3.0f;

	printf("test.A.c = %c\n", test.A.c);
	printf("test.A.c = %f\n", test.C.B.x);
	printf("test.A.c = %f\n", test.C.B.y);
	printf("test.A.c = %f\n", test.C.B.z);
}

// ������ ����
void enumeration()
{
	const char* days_name[] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
	days d = WED;

	printf("%d��° ������ %s�Դϴ�.", d, days_name[d]);
}

// typedef ����
void typedefine()
{
	typedef enum { False, True } BOOL;

	BOOL input_b;
	printf("false 0, true : 1\n");
	
	while (true)
	{
		scanf_s("%d", &input_b);
		system("cls");

		if (input_b == False)
		{
			printf("\nfalse\n");
			break;
		}
		else if (input_b == True)
		{
			printf("\ntrue\n");
			break;
		}
		else
		{
			printf("\n�߸��� �Է�. ���Է�.\n");
		}
	}
}