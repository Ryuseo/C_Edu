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
		printf("5. 관계 연산자 예제\n");
		printf("6. 논리 연산자 예제\n");
		printf("7. 비트 연산자 예제\n");
		printf("8. 연산자 테크닉 예제\n");
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
	printf("double pie = %lf\n", number);		//왜 %f와 출력 결과가 같을까? -> https://gigglehd.com/zbxe/10649472  기본 인자 진급이라는 것 때문인듯
	printf("(char)pie = %d\n", (char)number);
	printf("(int)pie = %d\n", (int)number);
	printf("(long)pie = %d\n", (long)number);
	printf("(float)pie = %f\n", (float)number);	//왜 %lf와 출력 결과가 같을까? -> %lf와 %f는 내부적으로 동일하게 작동한다고 한다. 그냥 scanf에는 %lf가 있는데 printf에는 없어서 헷갈리지 말라고 만들었다고도 한다.
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
	for (int i = 0; i < 3; ++i)//O(N*N*N*N) ㄷㄷ
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
	switch_value_notemp();	//temp없이 2개의 변수의 값 바꾸기
	check_odd_or_even();	//3항연산자로 홀짝 체크하기
}

void switch_value_notemp()
{
	int a = 10, b = 20;

	printf("temp없이 값 바꾸기 : a = %d, b = %d -> ", a, b);

	a ^= b ^= a ^= b;

	printf("a = %d, b = %d\n", a, b);
}

void check_odd_or_even()
{
	printf("홀짝 체크 : ");

	for (int i = 0; i < 10; i++)
		i & 1 ? printf("홀(%d) / ", i) : printf("짝(%d) / ", i);
	printf("\n");
}