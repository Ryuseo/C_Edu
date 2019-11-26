#include "13_pointer.h"

// ���� C�� ������ ���� ��ġ�� ������ �ٿ��� �����ʹ�. �׸��� ���� ��ƴ�.
void play_13()
{
	int num;
	int play = 1;

	printf("������ ���� ����\n\n");

	while (play)
	{
		printf("1. ���� �ּ� ��� ����\n");
		printf("2. ������ ������ �� ��� ����\n");
		printf("3. �����Ͱ� ����Ű�� �ּ� ���� ����\n");
		printf("4. �����ͷ� �� ���� ����\n");
		printf("5. �迭�� �������� ���� ����\n");
		printf("6. �迭�� ������ ���������� �� �о�� ����\n");
		printf("7. �迭�� �Լ��� �ѱ�� ���������� �� �о�� ����\n");
		printf("8. �����ͷ� ������ ���� ȣ�� ���� ����\n");
		printf("9. const�� ���� �����Ͱ� ����Ű�� �ּ� �Ǵ� ����Ű�� �ּ��� ���� �ٲ� �� �ִ��� Ȯ���ϴ� ����");

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
			print_address();
			break;
		case 2:
			print_value();
			break;
		case 3:
			pointer_01();
			break;
		case 4:
			pointer_02();
			break;
		case 5:
			pointer_array_01();
			break;
		case 6:
			pointer_array_02();
			break;
		case 7:
			array_pointer_para();
			break;
		case 8:
			call_of_ref();
			break;
		case 9:
			const_int_change_val();
			break;
		default:
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}

// ������ �ּҰ��� ����ϴ� �Լ�
static void print_address()
{
	int i = 10;
	char c = 'c';
	double d = 12.3;

	int* ip = NULL;
	char* cp = NULL;
	double* dp = NULL;

	ip = &i;
	cp = &c;
	dp = &d;

	// ���� �������� %u�� �������� ���ڼ����� ������ ����� %p�� ����Ѵٰ� �Ѵ�. ��� ����� ũ�� �޶�����.
	// %u�� unsigned ���� ���, %p�� �ּҸ� 16������ ���
	printf("�Ϲ� ������ �ּ����\n");
	printf("i�� �ּ� : %p\n", &i);
	printf("c�� �ּ� : %p\n", &c);
	printf("d�� �ּ� : %p\n", &d);
	
	printf("\n");

	printf("������ ������ �ּ����\n");
	printf("i�� �ּ� : %p\n", ip);
	printf("c�� �ּ� : %p\n", cp);
	printf("d�� �ּ� : %p\n", dp);
}

// �����Ͱ� ���� �ּ��� �� ����ϴ� �Լ�
static void print_value()
{
	int i = 10;
	char c = 'c';
	double d = 12.3;

	int* ip = NULL;
	char* cp = NULL;
	double* dp = NULL;

	ip = &i;
	cp = &c;
	dp = &d;

	printf("�Ϲ� ������ �����\n");
	printf("i�� �ּ� : %d\n", i);
	printf("c�� �ּ� : %c\n", c);
	printf("d�� �ּ� : %f\n", d);

	printf("\n");

	// ���� ����(*)�� ���� ����ϰ� �ִ�.
	// int -> int*(�������� �ּ� ����) : &
	// int* -> int(�����Ϳ��� �� ����) : *
	// �������� ��������. �Ӹ��� ���Ŀ´�.
	printf("������ ������ �����\n");
	printf("i�� �ּ� : %d\n", *ip);
	printf("c�� �ּ� : %c\n", *cp);
	printf("d�� �ּ� : %f\n", *dp);
}

// �����Ϳ� ���ο� �ּҸ� �����ϴ� �Լ�
static void pointer_01()
{
	int v_01 = 10, v_02 = 20;
	int* p = NULL;

	p = &v_01;
	
	printf("�ּ� ���� ��\n");

	// �Ϲݺ����� �� ��°� �Ϲݺ����� &�� �ּҸ� ���
	printf("v_01 = %d\n", v_01);
	printf("&v_01 = %p\n", &v_01);

	// ������ ������ �ּ� ��°� *�� ���� �����ؼ� �� ���
	printf("*p = %d\n", *p);
	printf("p = %p\n", p);

	// �ּ� �� ����
	p = &v_02;

	printf("\n�ּ� ���� ��\n");

	printf("v_02 = %d\n", v_02);
	printf("&v_02 = %p\n", &v_02);

	printf("*p = %d\n", *p);
	printf("p = %p\n", p);
}

// �����ͷ� �ش� �ּ��� �� ����
// �����͸� �����Ҷ� �ݵ�� ����� ������ �ּ� �Ǵ�, NULL�� �ʱ�ȭ �ؾ��ϴ� �����̴�. ���� �ϰ��� �ְ� NULL�� �ʱ�ȭ �ϴ°� ��ȣ�Ѵ�.
// ���� NULL�� �ʱ�ȭ �����ʰ� ������ �ּҷ� �ʱ�ȭ �Ѵٸ� �ּ��� �� �޾�����.
// ������ ������ϱ� �����Ҷ� ����� ������ �ּҷ� �����ϴ°� �Ⱦ����� �ʴ´�.
// �׷��ٸ� ����� �������� ������� ������ NULL�� �ʱ�ȭ �ϴ°� ������?
// ������ ���� ������ �ٿ��ֱ� �ϰ����� ���Կ����ڸ� ���� ����ϴ°� ���ɿ� �Ҽ��ϰ� �ǿ����� �ټ� �ִ�.
// ������ �����Ҵ�� �޸� ���Ѵٰ� �ݵ�� ������ ����°� �ƴ϶� �̹��ϴ�.
// �� ���� ����. ȥ���ϸ� �����ɰ� �������� ������ �ϰԵǸ� ȸ�Ƿ� ���� ������� �����Ѵ�.
// ������ ��Ģ�� �������. �����Ϸ��� �������� ������ �ȵɼ��� ������, �߸��� ���ɼ��� �ִٸ� �ᱹ �߸��Ǳ� �����̴�.
static void pointer_02()
{
	int v = 10;
	int* p = NULL;

	p = &v;

	printf("�� ���� ��\n");

	printf("v = %d\n", v);
	printf("&v = %p\n", &v);

	printf("*p = %d\n", *p);
	printf("p = %p\n", p);

	// �����Ͱ� ����Ű�� �ִ� �ּҿ� �ִ� ���� �ٲ�
	*p = 20;

	printf("\n�� ���� ��\n");

	printf("v = %d\n", v);
	printf("&v = %p\n", &v);

	printf("*p = %d\n", *p);
	printf("p = %p\n", p);
}

// �迭�� ù��° ������ �ּҿ� �迭�� �̸��� ����(?)�� �����ϴ� �Լ�
// ���� �����ϱ� �ָ��ϴ�.
// ����� �迭�� �̸��� �迭 0�� ���Ҹ� ����Ű�� �����Ͷ�� �Ŵ�.
static void pointer_array_01()
{
	int a[] = { 10, 20, 30, 40, 50 };

	for (int i = 0; i < 5; ++i)
	{
		printf("&a[%d] = %p\n",i, &a[i]);
	}
	printf("\n");

	printf("a = %p\n\n", a);

	if (&a[0] == a)
	{
		printf("a[0]�� �ּҿ� a�� �����ϴ�.\n");
	}
}

// �迭�� ������ ������������ ����ϱ�
// ���� ��ũ�帮��Ʈ�� �Ӹ����� �Ƹ��Ƹ�������. �ڷᱸ��å�� ã�ƺ���.
// �� c++���� �ϰ� �ڷᱸ���� �ؾ���.
// ��ũ�帮��Ʈ... ������ 8��... ����... �� �Ӹ���....
static void pointer_array_02()
{
	int a[] = { 10, 20, 30, 40, 50 };

	for (int i = 0; i < 5; ++i)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	printf("\n");

	for (int i = 0; i < 5; ++i)
	{
		printf("*(a + %d) = %d\n", i, *(a + i));
	}
}

// �迭�� �Ű������� �ް� �� �迭�� �����ͷ� �о�� �Լ��� �����Լ����� ȣ���
static void array_pointer_para()
{
	int a[] = { 10,20,30,40,50 };
	int n = 5;

	printf("�Լ��� �ѱ�� �� �迭 ��� : \n");

	for (int i = 0; i < n; ++i)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}

	printf("\n");

	array_pointer_para_sub(a, n);
}

// �迭�� �Ű������� �ް� �� �迭�� �����ͷ� �о�� �Լ��� ��ü
static void array_pointer_para_sub(const int a[], const int n)
{
	printf("�Լ��� �Ѱ� ������ ��� : \n");

	for (int i = 0; i < n; ++i)
	{
		printf("*(a + %d) = %d\n", i, *(a + i));
	}
}

// c������ ������ ���� ȣ���� �������� �ʴ´�.
// �����ͷ� ����ϰ� �����Ѵ�.
static void call_of_ref()
{
	int a = 100, b = 200;

	printf("a = %d, b = %d\n",a ,b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}

// ������ ���� ȣ���� �Ͼ�� �Լ�
static void swap(int* a, int *b)	//�����ͷ� �ּҰ��� �Ű������� �ް� �ִ�.
{
	*a ^= *b ^= *a ^= *b;
}

// ���������(?)�� ����Ű�� �ּҳ� ���� �ٲܼ� �ִ��� Ȯ���ϱ� ���� �ۼ��� �Լ�
// 16_adv_pointer���� �ڼ��� �ٷ�
static void const_int_change_val()
{
	int num_01 = 1;
	int num_02 = 2;
	const int* num_p = &num_01;

	printf("num_01's val =\t%d\n", num_01);
	printf("num_01's add =\t%p\n", &num_01);
	printf("num_02's val =\t%d\n", num_02);
	printf("num_02's add =\t%p\n", &num_02);
	printf("num_p's val =\t%d\n", *num_p);
	printf("num_p's add =\t%p\n", num_p);

	num_p = &num_02;
	printf("\nnum_p�� ����Ű�� �ּ� ����\n");
	printf("num_p's val =\t%d\n", *num_p);
	printf("num_p's add =\t%p\n", num_p);
	printf("\n������ num_p�� ����Ű�� �ּ��� ���� �ٲ� �� ������. �������.");

	// �����Ϳ� const�� ������ ����Ű�� ����� �ٲܼ� ������ ���� �ٲܼ� ���°� Ȯ�� ���.
	// Ȯ���� �ϰ� �ʹٸ� �Ʒ� �ڵ��� �ּ� ��ȣ�� �����ϰ� �����ϸ� ��������� �˷��ش�.
	// *num_p = 12;
}