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
		printf("9. 복합대입연산자와 산술연산자 + 대입연산자의 속도 비교\n");
		printf("10. 전후위증감연산자의 속도 비교\n");
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
		case 9:
			test_compound_assignment_op_performance();
			break;
		case 10:
			test_incdec_performance();
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}

// 산술연산자이다.
static void arithmetic_op()
{
	int num[2];
	printf("정수 2개 입력하시오. : ");
	scanf_s("%d %d",&num[0], &num[1]);

	printf("%d + %d = %d\n",num[0], num[1], num[0] + num[1]);			// 더하기
	printf("%d - %d = %d\n", num[0], num[1], num[0] - num[1]);			// 빼기
	printf("%d * %d = %d\n", num[0], num[1], num[0] * num[1]);			// 곱하기
	printf("%d / %d = %f\n", num[0], num[1], double(num[0] / num[1]));	// 나누기는 실수가 나올수 있기때문에 실수 출력. 실수 출력을 위해 실수형으로 형변환
	printf("%d %% %d = %d\n", num[0], num[1], num[0] % num[1]);			// 나머지를 구하는 연산자이다.MOD.
}

// 증감연산자이다.
static void incdec()
{
	int x = 10, y = 10;

	printf("x,y = 10\n");

	printf("x = %d\n", x);
	printf("++x = %d\n", ++x);	// 출력전 증가
	printf("x = %d\n", x);

	printf("y = %d\n", y);
	printf("y++ = %d\n", y++);	// 출력후 증가. 후위 증감 연산자의 경우 먼저 복사본을 만들고 증감연산을 하고 복사본을 반환하기에 전위 증감연산자보다 느리다. 
	printf("y = %d\n", y);		// 그렇기에 전위 증감 연산자 사용을 권장한다. 이 성능 차이는 복사생성자의 비용이 비쌀수록 커진다.
}

static void compound_assignment_op()	// 대입(MSDN에서는 할당)연산자. 연산과 대입을 한번에 처리한다.
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
	printf("double pie = %lf\n", number);		// 왜 %f와 출력 결과가 같을까? -> https:// gigglehd.com/zbxe/10649472  기본 인자 진급이라는 것 때문인듯
	printf("(char)pie = %d\n", (char)number);
	printf("(int)pie = %d\n", (int)number);
	printf("(long)pie = %d\n", (long)number);
	printf("(float)pie = %f\n", (float)number);	// 왜 %lf와 출력 결과가 같을까? -> %lf와 %f는 내부적으로 동일하게 작동한다고 한다. 그냥 scanf에는 %lf가 있는데 printf에는 없어서 헷갈리지 말라고 만들었다고도 한다.
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

	// O(n*n*n*n) 처럼 보이지만 O(n*n)이다.
	// n은 데이터의 크기지 반복문의 갯수와는 다르다.
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
	switch_value_notemp();	// temp없이 2개의 변수의 값 바꾸기
	check_odd_or_even();	// 3항연산자로 홀짝 체크하기
}

static void switch_value_notemp()
{
	int a = 10, b = 20;

	printf("temp없이 값 바꾸기 : a = %d, b = %d -> ", a, b);

	a ^= b ^= a ^= b;

	printf("a = %d, b = %d\n", a, b);
}

static void check_odd_or_even()
{
	printf("홀짝 체크 : ");

	for (int i = 0; i < 10; i++)
		i & 1 ? printf("홀(%d) / ", i) : printf("짝(%d) / ", i);
	printf("\n");
}

// 복합대입연산자와 대입연산자 + 산술연산자의 성능을 비교하고 싶어서 만들어 봤다. 사실 가독성이 최우선이라고 생각한다. 함수 이름 길이 지못미.
// 결과는 거의 동일하며 특별히 어느쪽이 빠른게 아니라서 그때 그때 OS의 상태에 따라 다른듯 하다.
// unsigned long long의 최댓값만큼 돌려서 최대한 차이가 크게나게 해서 비교하려고 했는데 끝이 나질 않아서 계산기를 두들겨보니 int 최댓값만큼 10번 돌리면 약 4초
// unsigend long long의 최댓값은 18,446,744,073,709,551,615이고 int의 최댓값은 2,147,483,647으로 8,589,934,596배 차이난다.
// 하기전에 이미 이상한걸 눈치 챘어야 했다. 8,589,934,596 * 4 / 60 / 60 / 24 = 99,420일이다....
// 그래서 타협해서 1,000,000,000번씩 60번 반복해서 평균내기로 했다.
// 참고로 64비트 디버그 모드로 실행했다.
// 릴리즈 모드로 하지 않은 이유는 최적화로 연산을 하지 않고 바로 결과를 내놓을수도 있기 때문이다.
// 대입 + 산술	1.536300 1.535733 1.532233 1.535950 1.530883 1.532600
// 복합대입		1.535767 1.535550 1.532033 1.535750 1.531283 1.532350
// 작업하는 순서도 영향을 주지 않을까 하여 앞 3번은 대입 + 산술을 먼저 했고 뒤 3번은 대입을 먼저 했다.
// case수가 적고 오차도 작지만 대체로 복합대입연산자가 빠른것을 알수 있다.
static void test_compound_assignment_op_performance()
{
	int i = 0, j = 0;	// 반복문에 쓸 변수다. 할당하면서 결과가 달라지는걸 방지
	clock_t start1, start2, end1, end2;
	int temp;
	long double avr1 = 0, avr2 = 0;
	for (int l = 0; l < 6; ++l)
	{
		avr1 = 0;
		avr2 = 0;
		for (int k = 0; k < 60; ++k)			// 평균을 내기위해 여러번 돌린다. 60인 이유는 1번에 약 3초 정도 걸려서 3분정도면 끝이 나도록 했다.
		{
			temp = 0;
			start2 = clock();
			for (j = 0; j < 1000000000; ++j)	// 약 1.5초 걸리는 숫자이다.
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
		printf("대입연산자 + 산술연산자 평균	: %f\n", avr1 / 60);
		printf("복합대입연산자 평균			: %f\n", avr2 / 60);
	}
}

// 내친김에 증감연산자도 해봤다.
// 마찬가지로 64비트 디버그 모드로 실행했다.
// 전위증가연산자 1.533483 1.535283 1.531017 1.534600 1.538233 1.535117
// 후위증가연산자 1.533467 1.535617 1.530450 1.538233 1.537217 1.535133
// 신기하게도 오히려 후위가 빠른 경우가 있는걸 볼수 있다.
// 기본적으로 후위는 값을 바꾸기전에 복사생성자를 실행하고 값을 바꾸어 값을 반환하기 때문에 후위가 더 느리다고 한다.
// 하지만 이러한 결과가 나온건 클래스같이 복사생성자의 코스트가 큰 변수를 사용하지 않았기 때문에 복사생성자에 걸리는 시간보다 OS의 작업할당에 따른 속도차이가 큰걸로 생각된다..
static void test_incdec_performance()
{
	int i = 0, j = 0;	// 반복문에 쓸 변수다. 할당하면서 결과가 달라지는걸 방지
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
		printf("전위증가연산자 평균	: %f\n", avr1 / 60);
		printf("후위증가연산자 평균	: %f\n", avr2 / 60);
	}
}