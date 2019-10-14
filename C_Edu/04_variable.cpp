#include "04_variable.h"
#define TAX_RATE 0.2

void play_04()
{
	int num;
	int play = 1;

	printf("변수 관련 예제\n\n");

	while (play)
	{
		printf("1. sizeof()로 각 자료형및 데이터 크기 출력.\n");
		printf("2. 각 자료형의 정수 최댓값, 최솟값 출력.\n");
		printf("3. 상수 예제\n");
		printf("4. 아스키코드 예제\n");
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
			use_sizeof();
			break;
		case 2:
			output_data_type_max_n_min();
			break;
		case 3:
			constant();
			break;
		case 4:
			Ascii_n_number();
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}

// 각 자료형과 변수,상수의 크기 비교
void use_sizeof()
{
	bool play = true;			// 루프를 반복할지 말지 정하는 변수
	int input_num;				// 어느 걸 출력할지 입력받는 변수

	while (play)
	{
		printf("0. 종료\n");
		printf("1. char의 크기\n");
		printf("2. bool의 크기\n");
		printf("3. short의 크기\n");
		printf("4. int의 크기\n");
		printf("5. long의 크기\n");
		printf("6. long long의 크기\n");
		printf("7. float의 크기\n");
		printf("8. double의 크기\n");
		printf("9. long double의 크기\n");
		printf("10. unsigned int의 크기\n");
		printf("11. 값을 입력받는때 쓰고 있는 input_num변수의 크기\n");
		printf("12. 10의 크기\n");
		printf("13. Hello World의 크기\n");
		printf("14. 위에 전부");

		// 값이나 자료형을 직접 입력 받고 싶었지만 입력 받는 부분만 힘들어지고 크게 구조가 바뀌지 않아서 그냥 int로 받음
		scanf_s("%d", &input_num);

		system("cls");

		switch (input_num)
		{
		case 0:
			printf("종료.\n");
			play = false;
			break;
		case 1:
			printf("char의 크기는 %d", sizeof(char));
			break;
		case 2:
			printf("bool의 크기는 %d", sizeof(bool));
			break;
		case 3:
			printf("short의 크기는 %d", sizeof(short));
			break;
		case 4:
			printf("int의 크기는 %d", sizeof(int));
			break;
		case 5:
			printf("long의 크기는 %d", sizeof(long));
			break;
		case 6:
			printf("long long의 크기는 %d", sizeof(long long));
			break;
		case 7:
			printf("float의 크기는 %d", sizeof(float));
			break;
		case 8:
			printf("double의 크기는 %d", sizeof(double));
			break;
		case 9:
			printf("long double의 크기는 %d", sizeof(long double));
			break;
		case 10:
			printf("unsigned int의 크기는 %d", sizeof(unsigned int));
			break;
		case 11:
			printf("input_num의 크기는 %d", sizeof(input_num));
			break;
		case 12:
			printf("10의 크기는 %d", sizeof(10));
			break;
		case 13:
			printf("Hello World의 크기는 %d", sizeof("Hello World"));
			break;
		case 14:
			printf("전부 출력");
			printf("char의 크기는 %d", sizeof(char));
			printf("bool의 크기는 %d", sizeof(bool));
			printf("short의 크기는 %d", sizeof(short));
			printf("int의 크기는 %d", sizeof(int));
			printf("long의 크기는 %d", sizeof(long));
			printf("long long의 크기는 %d", sizeof(long long));
			printf("float의 크기는 %d", sizeof(float));
			printf("double의 크기는 %d", sizeof(double));
			printf("long double의 크기는 %d", sizeof(long double));
			printf("unsigned int의 크기는 %d", sizeof(unsigned int));
			printf("input_num의 크기는 %d", sizeof(input_num));
			printf("10의 크기는 %d", sizeof(10));
			printf("Hello World의 크기는 %d", sizeof("Hello World"));
			break;
		default:
			printf("잘못된 값 입력. 다시 입력. : ");
			break;
		}
		printf("\n\n");
	}
}

// 각 자료형의 최댓값 최솟값 출력
void output_data_type_max_n_min()
{
	bool play = true;			// 루프를 반복할지 말지 정하는 변수
	int input_num;				// 어느 걸 출력할지 입력받는 변수

	while (play)
	{
		printf("0. 종료\n");
		printf("1. char의 최솟값, 최댓값\n");
		printf("2. bool의 최솟값, 최댓값\n");
		printf("3. short의 최솟값, 최댓값\n");
		printf("4. int의 최솟값, 최댓값\n");
		printf("5. long의 최솟값, 최댓값\n");
		printf("6. long long의 최솟값, 최댓값\n");
		printf("7. unsigned char의 최솟값, 최댓값\n");
		printf("8. unsigned short의 최솟값, 최댓값\n");
		printf("9. unsigned int의 최솟값, 최댓값\n");
		printf("10. unsigned long의 최솟값, 최댓값\n");
		printf("11. unsigned long long의 최솟값, 최댓값\n");
		printf("12. 위에 전부\n");
		printf("원하는 데이터 번호를 입력하세요. : ");

		scanf_s("%d", &input_num);

		system("cls");

		if (input_num == 0)
		{
			printf("종료.\n");
			play = false;
		}
		else if (input_num == 1)
		{
			char max_min[2] = { CHAR_MAX, CHAR_MIN };
			printf("char의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 2)
		{
			bool max_min[2] = { 1,0 };	// 예전에는 char같이 1바이트 정수로 쓸수 있었던걸로 기억하지만 지금은 안된다.
										// 어차피 bool은 true, false로 쓰는 용도니 이상한 값 넣지 말자.
			printf("bool의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 3)
		{
			short max_min[2] = { SHRT_MAX , SHRT_MIN };
			printf("short의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 4)
		{
			int max_min[2] = { INT_MAX, INT_MIN };
			printf("int의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 5)
		{
			long max_min[2] = { LONG_MAX, LONG_MIN };
			printf("long의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 6)
		{
			long long max_min[2] = { LLONG_MAX , LLONG_MIN };
			printf("long long의 최댓값는 %lld, 최솟값은 %lld\n", max_min[0], max_min[1]);	// long long는 %d를 사용하면 제대로된 값이 나오지 않을 수 있다.
		}
		else if (input_num == 7)
		{
			unsigned char max_min[2] = { USHRT_MAX, 0 };
			unsigned char n_num = 1, p_num = 1;	// 최댓값과 최솟값을 구하기 위한 변수
			unsigned char n_plus = 1;
			unsigned char p_plus = 0;
			bool loop = true;					// 반복문 사용

			// 재귀함수로 하려다가 그냥 반복문으로 함. 덕분에 코드가 쓸데없이 길어짐. 포인터 들어가면 재귀함수로 바꿀까?
			// long long 출력이 이상하게 돼서 알아보니 %d가 아닌 %lld를 사용해야했던 문제;;;
			while (loop)
			{

				n_num -= n_plus;
				if (n_num < p_num && n_plus > p_plus)
				{
					p_plus = n_plus;
					n_plus *= 10;
					if (n_plus < 0)
					{
						n_plus = p_plus;
					}
				}
				else if (n_num > p_num)			// 언더플로우가 나면 n_num이 p_num보다 커짐
				{
					if (n_plus == 1)
					{
						loop = false;
						max_min[1] = p_num;
					}
					else
					{
						n_num = p_num;
						p_plus = n_plus;
						n_plus /= 10;
					}
				}
				p_num = n_num;
			}

			printf("unsigned char의 최댓값는 %u, 최솟값은 %u\n", max_min[0], max_min[1]);	// unsigned는 %u를 사용
		}
		else if (input_num == 8)
		{
			unsigned short max_min[2] = { USHRT_MAX, 0 };
			unsigned short n_num = 1, p_num = 1;	// 최댓값과 최솟값을 구하기 위한 변수
			unsigned short n_plus = 1;
			unsigned short p_plus = 0;
			bool loop = true;				// 반복문 사용

			while (loop)
			{

				n_num -= n_plus;
				if (n_num < p_num && n_plus > p_plus)
				{
					p_plus = n_plus;
					n_plus *= 10;
					if (n_plus < 0)
					{
						n_plus = p_plus;
					}
				}
				else if (n_num > p_num)	// 언더플로우가 나면 n_num이 p_num보다 커짐
				{
					if (n_plus == 1)
					{
						loop = false;
						max_min[1] = p_num;
					}
					else
					{
						n_num = p_num;
						p_plus = n_plus;
						n_plus /= 10;
					}
				}
				p_num = n_num;
			}
			printf("unsigned short의 최댓값는 %u, 최솟값은 %u\n", max_min[0], max_min[1]);
		}
		else if (input_num == 9)
		{
			unsigned int max_min[2] = { USHRT_MAX, 0 };
			unsigned int n_num = 1, p_num = 1;	// 최댓값과 최솟값을 구하기 위한 변수
			unsigned int n_plus = 1;
			unsigned int p_plus = 0;
			bool loop = true;				// 반복문 사용

			while (loop)
			{

				n_num -= n_plus;
				if (n_num < p_num && n_plus > p_plus)
				{
					p_plus = n_plus;
					n_plus *= 10;
					if (n_plus < 0)
					{
						n_plus = p_plus;
					}
				}
				else if (n_num > p_num)	// 언더플로우가 나면 n_num이 p_num보다 커짐
				{
					if (n_plus == 1)
					{
						loop = false;
						max_min[1] = p_num;
					}
					else
					{
						n_num = p_num;
						p_plus = n_plus;
						n_plus /= 10;
					}
				}
				p_num = n_num;
			}
			printf("unsigned int의 최댓값는 %u, 최솟값은 %u\n", max_min[0], max_min[1]);
		}
		else if (input_num == 10)
		{
			unsigned long max_min[2] = { USHRT_MAX, 0 };
			unsigned long n_num = 1, p_num = 1;	// 최댓값과 최솟값을 구하기 위한 변수
			unsigned long n_plus = 1;
			unsigned long p_plus = 0;
			bool loop = true;				// 반복문 사용

			while (loop)
			{

				n_num -= n_plus;
				if (n_num < p_num && n_plus > p_plus)
				{
					p_plus = n_plus;
					n_plus *= 10;
					if (n_plus < 0)
					{
						n_plus = p_plus;
					}
				}
				else if (n_num > p_num)	// 언더플로우가 나면 n_num이 p_num보다 커짐
				{
					if (n_plus == 1)
					{
						loop = false;
						max_min[1] = p_num;
					}
					else
					{
						n_num = p_num;
						p_plus = n_plus;
						n_plus /= 10;
					}
				}
				p_num = n_num;
			}
			printf("unsigned long의 최댓값는 %u, 최솟값은 %u\n", max_min[0], max_min[1]);
		}
		else if (input_num == 11)
		{
			unsigned long long max_min[2] = { USHRT_MAX, 0 };
			unsigned long long n_num = 1, p_num = 1;	// 최댓값과 최솟값을 구하기 위한 변수
			unsigned long long n_plus = 1;
			unsigned long long p_plus = 0;
			bool loop = true;				// 반복문 사용

			while (loop)
			{

				n_num -= n_plus;
				if (n_num < p_num && n_plus > p_plus)
				{
					p_plus = n_plus;
					n_plus *= 10;
					if (n_plus < 0)
					{
						n_plus = p_plus;
					}
				}
				else if (n_num > p_num)	// 언더플로우가 나면 n_num이 p_num보다 커짐
				{
					if (n_plus == 1)
					{
						loop = false;
						max_min[1] = p_num;
					}
					else
					{
						n_num = p_num;
						p_plus = n_plus;
						n_plus /= 10;
					}
				}
				p_num = n_num;
			}
			printf("unsigned long long의 최댓값는 %llu, 최솟값은 %llu\n", max_min[0], max_min[1]);	// unsigned long long은 값이 엄청 커서 %llu를 사용
		}
		else if (input_num == 12)
		{
			{
				char max_min[2] = { CHAR_MAX, CHAR_MIN };
				printf("char의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}
			{
				bool max_min[2] = { 1,0 };	// 예전에는 char같이 1바이트 정수로 쓸수 있었던걸로 기억하지만 지금은 안된다.
											// 하지만 bool은 true, false로 쓰는 용도니 이상한 값 넣지 말자.
				printf("bool의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}
			{
				short max_min[2] = { SHRT_MAX , SHRT_MIN };
				printf("short의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}
			{
				int max_min[2] = { INT_MAX, INT_MIN };
				printf("int의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}
			{
				long max_min[2] = { LONG_MAX, LONG_MIN };
				printf("long의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}
			{
				long long max_min[2] = { LLONG_MAX , LLONG_MIN };
				printf("long long의 최댓값는 %lld, 최솟값은 %lld\n", max_min[0], max_min[1]);
			}
			{
				unsigned char max_min[2] = { USHRT_MAX, 0 };
				unsigned char n_num = 1, p_num = 1;	// 최댓값과 최솟값을 구하기 위한 변수
				unsigned char n_plus = 1;
				unsigned char p_plus = 0;
				bool loop = true;				// 반복문 사용

				while (loop)
				{

					n_num -= n_plus;
					if (n_num < p_num && n_plus > p_plus)
					{
						p_plus = n_plus;
						n_plus *= 10;
						if (n_plus < 0)
						{
							n_plus = p_plus;
						}
					}
					else if (n_num > p_num)	// 언더플로우가 나면 n_num이 p_num보다 커짐
					{
						if (n_plus == 1)
						{
							loop = false;
							max_min[1] = p_num;
						}
						else
						{
							n_num = p_num;
							p_plus = n_plus;
							n_plus /= 10;
						}
					}
					p_num = n_num;
				}

				printf("unsigned char의 최댓값는 %u, 최솟값은 %u\n", max_min[0], max_min[1]);
			}
			{
				unsigned short max_min[2] = { USHRT_MAX, 0 };
				unsigned short n_num = 1, p_num = 1;	// 최댓값과 최솟값을 구하기 위한 변수
				unsigned short n_plus = 1;
				unsigned short p_plus = 0;
				bool loop = true;				// 반복문 사용

				while (loop)
				{

					n_num -= n_plus;
					if (n_num < p_num && n_plus > p_plus)
					{
						p_plus = n_plus;
						n_plus *= 10;
						if (n_plus < 0)
						{
							n_plus = p_plus;
						}
					}
					else if (n_num > p_num)	// 언더플로우가 나면 n_num이 p_num보다 커짐
					{
						if (n_plus == 1)
						{
							loop = false;
							max_min[1] = p_num;
						}
						else
						{
							n_num = p_num;
							p_plus = n_plus;
							n_plus /= 10;
						}
					}
					p_num = n_num;
				}
				printf("unsigned short의 최댓값는 %u, 최솟값은 %u\n", max_min[0], max_min[1]);
			}
			{
				unsigned int max_min[2] = { USHRT_MAX, 0 };
				unsigned int n_num = 1, p_num = 1;	// 최댓값과 최솟값을 구하기 위한 변수
				unsigned int n_plus = 1;
				unsigned int p_plus = 0;
				bool loop = true;				// 반복문 사용

				while (loop)
				{

					n_num -= n_plus;
					if (n_num < p_num && n_plus > p_plus)
					{
						p_plus = n_plus;
						n_plus *= 10;
						if (n_plus < 0)
						{
							n_plus = p_plus;
						}
					}
					else if (n_num > p_num)	// 언더플로우가 나면 n_num이 p_num보다 커짐
					{
						if (n_plus == 1)
						{
							loop = false;
							max_min[1] = p_num;
						}
						else
						{
							n_num = p_num;
							p_plus = n_plus;
							n_plus /= 10;
						}
					}
					p_num = n_num;
				}
				printf("unsigned int의 최댓값는 %u, 최솟값은 %u\n", max_min[0], max_min[1]);
			}
			{
				unsigned long max_min[2] = { USHRT_MAX, 0 };
				unsigned long n_num = 1, p_num = 1;	// 최댓값과 최솟값을 구하기 위한 변수
				unsigned long n_plus = 1;
				unsigned long p_plus = 0;
				bool loop = true;				// 반복문 사용

				while (loop)
				{

					n_num -= n_plus;
					if (n_num < p_num && n_plus > p_plus)
					{
						p_plus = n_plus;
						n_plus *= 10;
						if (n_plus < 0)
						{
							n_plus = p_plus;
						}
					}
					else if (n_num > p_num)	// 언더플로우가 나면 n_num이 p_num보다 커짐
					{
						if (n_plus == 1)
						{
							loop = false;
							max_min[1] = p_num;
						}
						else
						{
							n_num = p_num;
							p_plus = n_plus;
							n_plus /= 10;
						}
					}
					p_num = n_num;
				}
				printf("unsigned long의 최댓값는 %u, 최솟값은 %u\n", max_min[0], max_min[1]);
			}
			{
				unsigned long long max_min[2] = { ULLONG_MAX, 0 };
				unsigned long long n_num = 1, p_num = 1;	// 최댓값과 최솟값을 구하기 위한 변수
				unsigned long long n_plus = 1;
				unsigned long long p_plus = 0;
				bool loop = true;				// 반복문 사용

				while (loop)
				{

					n_num -= n_plus;
					if (n_num < p_num && n_plus > p_plus)
					{
						p_plus = n_plus;
						n_plus *= 10;
						if (n_plus < 0)
						{
							n_plus = p_plus;
						}
					}
					else if (n_num > p_num)	// 언더플로우가 나면 n_num이 p_num보다 커짐
					{
						if (n_plus == 1)
						{
							loop = false;
							max_min[1] = p_num;
						}
						else
						{
							n_num = p_num;
							p_plus = n_plus;
							n_plus /= 10;
						}
					}
					p_num = n_num;
				}
				printf("unsigned long long의 최댓값는 %llu, 최솟값은 %llu\n", max_min[0], max_min[1]);
			}
		}
		else
		{
			printf("잘못된 값 입력. 다시 입력. : ");
		}
		printf("\n\n");
	}
}

// 상수
void constant()
{
	const int months = 12;								// const 상수. 값을 바꿀 수 없다.
	int m_salaray, y_salary;

	printf("월급을 입력하시요 : ");
	scanf_s("%d", &m_salaray);

	y_salary = months * m_salaray;
	printf("연봉은 %d입니다.\n", y_salary);
	printf("세금은 %f입니다.\n", y_salary * TAX_RATE);	// 전처리기 상수. 맨 위에 있다.
}

// 아스키코드와 숫자출력
void Ascii_n_number()
{
	printf("숫자와 대응하는 아스키 코드 출력\n");
	for (char i = 0; i >= 0; ++i)				// 127번째 아스키 코드를 출력하기 위한 편법. i < 128 이나 i <= 127하면 오버플로우 나면서 무한 루프 돈다.
	{											// i++이면 되지 않을까? 했지만 안됬다.
		printf("%d : '%c'\n", i, i);
	}
}