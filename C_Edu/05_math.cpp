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
	printf("x %%= y == x = x % y = %d\n", x % y);
	printf("x &= y == x = x & y = %d\n", x & y);
	printf("x |= y == x = x | y = %d\n", x | y);
	printf("x ^= y == x = x ^ y = %d\n", x ^ y);
	printf("x >>= y == x = x >> y = %d\n", x >> y);
	printf("x <<= y == x = x << y = %d\n", x << y);
}

void explicit_casting()
{
	double number = 139843767015701275173.14159265358979323846264338327950288419716939937;
	printf("double pie = %lf\n", number);
	printf("(char)pie = %d\n", (char)number);
	printf("(int)pie = %d\n", (int)number);
	printf("(long)pie = %d\n", (long)number);
	printf("(float)pie = %f\n", (float)number);
}