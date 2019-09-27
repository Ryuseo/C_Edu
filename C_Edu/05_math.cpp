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
		default:
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}

void arithmetic_op()
{
	int num[2];
	printf("���� 2�� �Է��Ͻÿ�. : ");
	scanf_s("%d %d",&num[0], &num[1]);

	printf("%d + %d = %d\n",num[0], num[1], num[0] + num[1]);
	printf("%d - %d = %d\n", num[0], num[1], num[0] - num[1]);
	printf("%d * %d = %d\n", num[0], num[1], num[0] * num[1]);
	printf("%d / %d = %f\n", num[0], num[1], float(num[0] / num[1]));	//������� �Ǽ��� ���ü� �ֱ⶧���� �Ǽ� ���. �Ǽ� ����� ���� �Ǽ������� ����ȯ
	printf("%d %% %d = %d\n", num[0], num[1], num[0] % num[1]);
}

void incdec()
{
	int x = 10, y = 10;

	printf("x,y = 10\n");

	printf("x = %d\n", x);
	printf("++x = %d\n", ++x);	//����� ����
	printf("x = %d\n", x);

	printf("y = %d\n", y);
	printf("y++ = %d\n", y++);	//����� ����
	printf("y = %d\n", y);
}

void compound_assignment_op()
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

void explicit_casting()
{
	double number = 128.14159265358979323846264338327950288419716939937;
	printf("double pie = %lf\n", number);		//�� %f�� ��� ����� ������? -> https://gigglehd.com/zbxe/10649472  �⺻ ���� �����̶�� �� �����ε�
	printf("(char)pie = %d\n", (char)number);
	printf("(int)pie = %d\n", (int)number);
	printf("(long)pie = %d\n", (long)number);
	printf("(float)pie = %f\n", (float)number);	//�� %lf�� ��� ����� ������? -> %lf�� %f�� ���������� �����ϰ� �۵��Ѵٰ� �Ѵ�. �׳� scanf���� %lf�� �ִµ� printf���� ��� �򰥸��� ����� ������ٰ� �Ѵ�.
}

void relational_op()
{
	srand(time(NULL));
	int nums[3][3];

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			nums[i][j] = (rand() % 20) - 10;
		}
	}
	for (int i = 0; i < 3; ++i)//O(N*N*N*N) ����
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

void logical_op()
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

void bit_op()
{
	int x = 9, y = 10;

	printf("x AND(&) y = %08X\n", x & y);
	printf("x OR(|) y = %08X\n", x | y);
	printf("x XOR(^) y= %08X\n", x ^ y);
	printf("NOT(~) x = %08X\n", ~x);
	printf("x << 1 = %08X\n", x << 1);
	printf("x >> 1 = %08X\n", x >> 1);
}

void sp_skill_op()
{
	switch_value_notemp();	//temp���� 2���� ������ �� �ٲٱ�
	check_odd_or_even();	//3�׿����ڷ� Ȧ¦ üũ�ϱ�
}

void switch_value_notemp()
{
	int a = 10, b = 20;

	printf("temp���� �� �ٲٱ� : a = %d, b = %d -> ", a, b);

	a ^= b ^= a ^= b;

	printf("a = %d, b = %d\n", a, b);
}

void check_odd_or_even()
{
	printf("Ȧ¦ üũ : ");

	for (int i = 0; i < 10; i++)
		i & 1 ? printf("Ȧ(%d) / ", i) : printf("¦(%d) / ", i);
	printf("\n");
}