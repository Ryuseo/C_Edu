#include "05_math.h"

void play_05()
{
	int num;
	int play = 1;

	printf("수식과 연산자 관련 예제\n\n");

	while (play)
	{
		printf("1. 산술연산자 예제\n");
		printf("2. 증감연산자 예제\n");
		printf("3. 복합 대입연산자 예제\n");
		printf("4. 명시적 형변환 예제\n");
		printf("\n");
		printf("실행할 예제 번호 입력.(다른 프로그램 실행은 0번) : ");
		scanf_s("%d", &num);

		system("cls");

		switch (num)
		{
		case 0:
			play = 0;
			printf("종료.");
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
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}

void arithmetic_op()
{
	int num[2];
	printf("정수 2개 입력하시오. : ");
	scanf_s("%d %d",&num[0], &num[1]);

	printf("%d + %d = %d\n",num[0], num[1], num[0] + num[1]);
	printf("%d - %d = %d\n", num[0], num[1], num[0] - num[1]);
	printf("%d * %d = %d\n", num[0], num[1], num[0] * num[1]);
	printf("%d / %d = %f\n", num[0], num[1], float(num[0] / num[1]));	//나누기는 실수가 나올수 있기때문에 실수 출력. 실수 출력을 위해 실수형으로 형변환
	printf("%d %% %d = %d\n", num[0], num[1], num[0] % num[1]);
}

void incdec()
{
	int x = 10, y = 10;

	printf("x,y = 10\n");

	printf("x = %d\n", x);
	printf("++x = %d\n", ++x);	//출력전 증가
	printf("x = %d\n", x);

	printf("y = %d\n", y);
	printf("y++ = %d\n", y++);	//출력후 증가
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