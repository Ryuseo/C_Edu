#include "05_math.h"

void play_05()
{
	int num;
	int play = 1;

	printf("���İ� ������ ���� ����\n\n");

	while (play)
	{
		printf("1. ��������� ����\n");
		printf("2. ���������� ����\n");
		printf("3. ���� ���Կ����� ����\n");
		printf("4. ����� ����ȯ ����\n");
		printf("5. ���� ������ ����\n");
		printf("6. �� ������ ����\n");
		printf("7. ��Ʈ ������ ����\n");
		printf("8. ������ ��ũ�� ����\n");
		printf("9. ���մ��Կ����ڿ� ��������� + ���Կ������� �ӵ� ��\n");
		printf("10. ������������������ �ӵ� ��\n");
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
			arithmetic_op();
			break;
		case 2:
			incdec();
			break;
		case 3:
			compound_assignment_op();
			break;
		case 4:
			explicit_casting();
			break;
		case 5:
			relational_op();
			break;
		case 6:
			logical_op();
			break;
		case 7:
			bit_op();
		case 8:
			sp_skill_op();
			break;
		case 9:
			test_compound_assignment_op_performance();
			break;
		case 10:
			test_incdec_performance();
			break;
		default:
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}

// ����������̴�.
static void arithmetic_op()
{
	int num[2];
	printf("���� 2�� �Է��Ͻÿ�. : ");
	scanf_s("%d %d",&num[0], &num[1]);

	printf("%d + %d = %d\n",num[0], num[1], num[0] + num[1]);			// ���ϱ�
	printf("%d - %d = %d\n", num[0], num[1], num[0] - num[1]);			// ����
	printf("%d * %d = %d\n", num[0], num[1], num[0] * num[1]);			// ���ϱ�
	printf("%d / %d = %f\n", num[0], num[1], double(num[0] / num[1]));	// ������� �Ǽ��� ���ü� �ֱ⶧���� �Ǽ� ���. �Ǽ� ����� ���� �Ǽ������� ����ȯ
	printf("%d %% %d = %d\n", num[0], num[1], num[0] % num[1]);			// �������� ���ϴ� �������̴�.MOD.
}

// �����������̴�.
static void incdec()
{
	int x = 10, y = 10;

	printf("x,y = 10\n");

	printf("x = %d\n", x);
	printf("++x = %d\n", ++x);	// ����� ����
	printf("x = %d\n", x);

	printf("y = %d\n", y);
	printf("y++ = %d\n", y++);	// ����� ����. ���� ���� �������� ��� ���� ���纻�� ����� ���������� �ϰ� ���纻�� ��ȯ�ϱ⿡ ���� ���������ں��� ������. 
	printf("y = %d\n", y);		// �׷��⿡ ���� ���� ������ ����� �����Ѵ�. �� ���� ���̴� ����������� ����� ��Ҽ��� Ŀ����.
}

static void compound_assignment_op()	// ����(MSDN������ �Ҵ�)������. ����� ������ �ѹ��� ó���Ѵ�.
{
	int x = 10, y = 3;
	printf("x = 10, y = 3\n\n");

	printf("x += y == x = x + y = %d\n",x + y);
	printf("x -= y == x = x - y = %d\n", x - y);
	printf("x *= y == x = x * y = %d\n", x * y);
	printf("x /= y == x = x / y = %d\n", x / y);
	printf("x %%= y == x = x %% y = %d\n", x % y);
	printf("x &= y == x = x & y = %d\n", x & y);
	printf("x |= y == x = x | y = %d\n", x | y);
	printf("x ^= y == x = x ^ y = %d\n", x ^ y);
	printf("x >>= y == x = x >> y = %d\n", x >> y);
	printf("x <<= y == x = x << y = %d\n", x << y);
}

static void explicit_casting()
{
	double number = 128.14159265358979323846264338327950288419716939937;
	printf("double pie = %lf\n", number);		// �� %f�� ��� ����� ������? -> https:// gigglehd.com/zbxe/10649472  �⺻ ���� �����̶�� �� �����ε�
	printf("(char)pie = %d\n", (char)number);
	printf("(int)pie = %d\n", (int)number);
	printf("(long)pie = %d\n", (long)number);
	printf("(float)pie = %f\n", (float)number);	// �� %lf�� ��� ����� ������? -> %lf�� %f�� ���������� �����ϰ� �۵��Ѵٰ� �Ѵ�. �׳� scanf���� %lf�� �ִµ� printf���� ��� �򰥸��� ����� ������ٰ� �Ѵ�.
}

static void relational_op()
{
	int nums[3][3];

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			nums[i][j] = (rand() % 20) - 10;
		}
	}

	// O(n*n*n*n) ó�� �������� O(n*n)�̴�.
	// n�� �������� ũ���� �ݺ����� �����ʹ� �ٸ���.
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 3; ++k)
			{
				for (int l = 0; l < 3; ++l)
				{
					printf("%d == %d : ", nums[i][j], nums[k][l]);
					printf(nums[i][j] == nums[k][l] ? "true\n" : "false\n");

					printf("%d != %d : ", nums[i][j], nums[k][l]);
					printf(nums[i][j] != nums[k][l] ? "true\n" : "false\n");

					printf("%d > %d : ", nums[i][j], nums[k][l]);
					printf(nums[i][j] > nums[k][l] ? "true\n" : "false\n");

					printf("%d < %d : ", nums[i][j], nums[k][l]);
					printf(nums[i][j] < nums[k][l] ? "true\n" : "false\n");

					printf("%d >= %d : ", nums[i][j], nums[k][l]);
					printf(nums[i][j] >= nums[k][l] ? "true\n" : "false\n");

					printf("%d <= %d : ", nums[i][j], nums[k][l]);
					printf(nums[i][j] <= nums[k][l] ? "true\n" : "false\n");
					printf("\n");
				}
			}
		}
		printf("\n");
	}
}

static void logical_op()
{
	bool tf[2] = { true, false };
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{		
			printf(tf[i] ? "true && " : "false && ");
			printf(tf[j] ? "true : " : "false : ");
			printf(tf[i] && tf[j] ? "true\n" : "false\n");

			printf(tf[i] ? "true || " : "false || ");
			printf(tf[j] ? "true : " : "false : ");
			printf(tf[i] || tf[j] ? "true\n" : "false\n");

			printf(tf[i] ? "!true : " : "!false : ");
			printf(!tf[i] ? "true\n" : "false\n");

			printf("\n");
		}
	}
}

static void bit_op()
{
	int x = 9, y = 10;

	printf("x AND(&) y = %08X\n", x & y);
	printf("x OR(|) y = %08X\n", x | y);
	printf("x XOR(^) y= %08X\n", x ^ y);
	printf("NOT(~) x = %08X\n", ~x);
	printf("x << 1 = %08X\n", x << 1);
	printf("x >> 1 = %08X\n", x >> 1);
}

static void sp_skill_op()
{
	switch_value_notemp();	// temp���� 2���� ������ �� �ٲٱ�
	check_odd_or_even();	// 3�׿����ڷ� Ȧ¦ üũ�ϱ�
}

static void switch_value_notemp()
{
	int a = 10, b = 20;

	printf("temp���� �� �ٲٱ� : a = %d, b = %d -> ", a, b);

	a ^= b ^= a ^= b;

	printf("a = %d, b = %d\n", a, b);
}

static void check_odd_or_even()
{
	printf("Ȧ¦ üũ : ");

	for (int i = 0; i < 10; i++)
		i & 1 ? printf("Ȧ(%d) / ", i) : printf("¦(%d) / ", i);
	printf("\n");
}

// ���մ��Կ����ڿ� ���Կ����� + ����������� ������ ���ϰ� �; ����� �ô�. ��� �������� �ֿ켱�̶�� �����Ѵ�. �Լ� �̸� ���� ������.
// ����� ���� �����ϸ� Ư���� ������� ������ �ƴ϶� �׶� �׶� OS�� ���¿� ���� �ٸ��� �ϴ�.
// unsigned long long�� �ִ񰪸�ŭ ������ �ִ��� ���̰� ũ�Գ��� �ؼ� ���Ϸ��� �ߴµ� ���� ���� �ʾƼ� ���⸦ �ε�ܺ��� int �ִ񰪸�ŭ 10�� ������ �� 4��
// unsigend long long�� �ִ��� 18,446,744,073,709,551,615�̰� int�� �ִ��� 2,147,483,647���� 8,589,934,596�� ���̳���.
// �ϱ����� �̹� �̻��Ѱ� ��ġ ë��� �ߴ�. 8,589,934,596 * 4 / 60 / 60 / 24 = 99,420���̴�....
// �׷��� Ÿ���ؼ� 1,000,000,000���� 60�� �ݺ��ؼ� ��ճ���� �ߴ�.
// ����� 64��Ʈ ����� ���� �����ߴ�.
// ������ ���� ���� ���� ������ ����ȭ�� ������ ���� �ʰ� �ٷ� ����� ���������� �ֱ� �����̴�.
// ���� + ���	1.536300 1.535733 1.532233 1.535950 1.530883 1.532600
// ���մ���		1.535767 1.535550 1.532033 1.535750 1.531283 1.532350
// �۾��ϴ� ������ ������ ���� ������ �Ͽ� �� 3���� ���� + ����� ���� �߰� �� 3���� ������ ���� �ߴ�.
// case���� ���� ������ ������ ��ü�� ���մ��Կ����ڰ� �������� �˼� �ִ�.
static void test_compound_assignment_op_performance()
{
	int i = 0, j = 0;	// �ݺ����� �� ������. �Ҵ��ϸ鼭 ����� �޶����°� ����
	clock_t start1, start2, end1, end2;
	int temp;
	long double avr1 = 0, avr2 = 0;
	for (int l = 0; l < 6; ++l)
	{
		avr1 = 0;
		avr2 = 0;
		for (int k = 0; k < 60; ++k)			// ����� �������� ������ ������. 60�� ������ 1���� �� 3�� ���� �ɷ��� 3�������� ���� ������ �ߴ�.
		{
			temp = 0;
			start2 = clock();
			for (j = 0; j < 1000000000; ++j)	// �� 1.5�� �ɸ��� �����̴�.
			{
				temp += 1;
			}
			end2 = clock();

			temp = 0;
			start1 = clock();
			for (i = 0; i < 1000000000; ++i)
			{
				temp = temp + 1;
			}
			end1 = clock();

			avr1 += (float)(end1 - start1) / CLOCKS_PER_SEC;
			avr2 += (float)(end2 - start2) / CLOCKS_PER_SEC;
		}
		printf("���Կ����� + ��������� ���	: %f\n", avr1 / 60);
		printf("���մ��Կ����� ���			: %f\n", avr2 / 60);
	}
}

// ��ģ�迡 ���������ڵ� �غô�.
// ���������� 64��Ʈ ����� ���� �����ߴ�.
// �������������� 1.533483 1.535283 1.531017 1.534600 1.538233 1.535117
// �������������� 1.533467 1.535617 1.530450 1.538233 1.537217 1.535133
// �ű��ϰԵ� ������ ������ ���� ��찡 �ִ°� ���� �ִ�.
// �⺻������ ������ ���� �ٲٱ����� ��������ڸ� �����ϰ� ���� �ٲپ� ���� ��ȯ�ϱ� ������ ������ �� �����ٰ� �Ѵ�.
// ������ �̷��� ����� ���°� Ŭ�������� ����������� �ڽ�Ʈ�� ū ������ ������� �ʾұ� ������ ��������ڿ� �ɸ��� �ð����� OS�� �۾��Ҵ翡 ���� �ӵ����̰� ū�ɷ� �����ȴ�..
static void test_incdec_performance()
{
	int i = 0, j = 0;	// �ݺ����� �� ������. �Ҵ��ϸ鼭 ����� �޶����°� ����
	clock_t start1, start2, end1, end2;
	int temp;
	long double avr1 = 0, avr2 = 0;

	for (int l = 0; l < 6; ++l)
	{
		avr1 = 0;
		avr2 = 0;
		for (int k = 0; k < 60; ++k)
		{
			temp = 0;
			start1 = clock();
			for (i = 0; i < 1000000000; ++i)
			{
				++temp;
			}
			end1 = clock();

			temp = 0;
			start2 = clock();
			for (j = 0; j < 1000000000; ++j)
			{
				temp++;
			}
			end2 = clock();

			avr1 += (float)(end1 - start1) / CLOCKS_PER_SEC;
			avr2 += (float)(end2 - start2) / CLOCKS_PER_SEC;
		}
		printf("�������������� ���	: %f\n", avr1 / 60);
		printf("�������������� ���	: %f\n", avr2 / 60);
	}
}