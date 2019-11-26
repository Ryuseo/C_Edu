#include "16_adv_pointer.h"

void play_16()
{
	int num;
	int play = 1;

	printf("������ ��ȭ ����\n\n");

	while (play)
	{
		printf("1. ���� ������ ����\n");
		printf("2. �⺻ ������ �迭 ����\n");
		printf("3. ���ڿ� ������ �迭 ����\n");
		printf("4. �Լ� ������ �迭 ����\n");
		printf("5. const�� ������ ����\n");
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
			array_pointer_string();
			break;
		case 4:
			func_pointer();
			break;
		case 5:
			const_N_pointer();
			break;
		default:
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}

// ���� ������ ����
static void double_pointer()
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

// ������ �迭 ����
static void array_pointer()
{
	int ai[5];

	for (int i = 0; i < 5; ++i)
	{
		ai[i] = rand() % 100;
	}

	int* ap[5];
	for (int i = 0; i < 5; ++i)
	{
		ap[i] = &ai[i];
	}

	for (int i = 0; i < 5; ++i)
	{
		printf("ai[%d]�� �� = %d\n", i, ai[i]);
		printf("ap[%d]�� �� = %d\n", i, *ap[i]);
		printf("ai[%d]�� �ּ� = %p\n", i, &ai[i]);
		printf("ap[%d]�� �ּ� = %p\n\n", i, ap[i]);
	}
}

// ���ڿ� ������ �迭 ����(���׵� �迭)
static void array_pointer_string()
{
	const char* fname[4] = {
	"apple",
	"blueberry",
	"orange",
	"melon"
	};

	// fname�� �ּҴ� *fname
	// fname�ε� ����� ������ �̰� fname[0]�� �ּҿ� ����. ����Ű�� �ּҰ� ��µȴ�.
	printf("fname�� �ּ�    = %p\n\n", *fname);

	printf("fname[%d]�� �� = %s\n", 0, fname[0]);
	printf("fname[%d]�� �ּ� = %p\n\n", 0, &fname[0]);	// 

	fname[0] = "parr";

	printf("fname[%d]�� �� = %s\n", 0, fname[0]);
	printf("fname[%d]�� �ּ� = %p\n\n", 0, &fname[0]);

	for (int i = 1; i < 4; ++i)
	{
		printf("fname[%d]�� �� = %s\n", i, fname[i]);
		printf("fname[%d]�� �ּ� = %p\n\n", i, &fname[i]);
	}
}

// �迭 �����Ͷ�°͵� ������ ����
// �Լ������� ����
static void func_pointer()
{
	int result;
	//�Լ� ������ �迭�̴�.
	int (*pf[2])(int, int);
	int input_a, input_b;

	printf("���ϰ� �� ���� 2�� �Է� : ");
	scanf_s("%d %d",&input_a, &input_b);
	
	pf[0] = add;
	printf("%d + %d = %d\n", input_a, input_b, result = pf[0](10, 20));

	pf[1] = sub;
	printf("%d - %d = %d\n", input_a, input_b, result = pf[1](10, 20));
}

// �Լ� ������ �������� ���� +-�Լ�
static int add(const int a, const int b)
{
	return a + b;
}

static int sub(const int a, const int b)
{
	return a - b;
}

//const�� ������ ����
static void const_N_pointer()
{
	char string_01[] = "qwer";
	char string_02[] = "asdf";

	const char* p = string_01;
	char* const q = string_01;

	printf("%s\n", p);
	//p[0] = 'z';
	p = string_02;
	printf("%s\n", p);

	printf("%s\n", q);
	q[0] = 'z';
	//q = string_02;
	printf("%s\n", q);

	printf("const char*�� ���� �ٲ� �� ������ ����Ű�� �ּҴ� �ٲܼ� �ְ�,\n");
	// const�� char�� �����Ѵٰ� ��������. ��� ĳ������ ������.
	printf("char* const�� ���� �ٲ� �� ������ ����Ű�� �ּҴ� �ٲܼ� ����.\n");
	// const�� �����͸� �����Ѵٰ� ��������. ĳ���� �������� ���ȭ
	// const�� ������ �ִ°� ���ȭ �Ѵٰ� ����.
}