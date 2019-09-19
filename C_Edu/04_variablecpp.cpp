#include "04_variable.h"

void play_04()
{
	int num;
	int play = 1;

	printf("printf() 관련 예제\n\n");

	while (play)
	{
		printf("1. sizeof()로 각 자료형및 데이터 크기 출력.\n");
		printf("2. 각 자료형의 정수 최댓값, 최솟값 출력.\n");
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
			use_sizeof();
			break;
		case 2:
			output_data_type_max_n_min();
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}

//각 자료형과 변수,상수의 크기 비교
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

//각 자료형의 최댓값 최솟값 출력
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
		printf("7. float의 최솟값, 최댓값\n");
		printf("8. double의 최솟값, 최댓값\n");
		printf("9. long double의 최솟값, 최댓값\n");
		printf("10. unsigned char의 최솟값, 최댓값\n");
		printf("11. unsigned short의 최솟값, 최댓값\n");
		printf("12. unsigned int의 최솟값, 최댓값\n");
		printf("13. unsigned long의 최솟값, 최댓값\n");
		printf("14. unsigned long long의 최솟값, 최댓값\n");
		printf("15. 위에 전부\n");
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
			bool max_min[2] = { 1,0 };	//예전에는 char같이 1바이트 정수로 쓸수 있었던걸로 기억하지만 지금은 안된다.
										//하지만 bool은 true, false로 쓰는 용도니 이상한 값 넣지 말자.
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
			//값이 이상하게 나옴
			//long long max_min[2] = { LLONG_MAX , LLONG_MIN };
			
			long long max_min[2];			//찾은 값 저장. 앞이 최대 뒤가 최소
			long long n_num = -1, p_num = -1;	//최댓값과 최솟값을 구하기 위한 변수
			bool loop = true;			//반복문 사용


			while (loop)
			{
				++n_num;
				if (n_num < p_num)	// 오버플로우가 나면 n_num이 p_num보다 작아짐
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			loop = true;	//재사용을 위한 초기화
			n_num = 1;
			p_num = 1;

			while (loop)
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[1] = p_num;
				}
				p_num = n_num;
			}
			printf("long long의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 7)
		{
			float max_min[2];			//찾은 값 저장. 앞이 최대 뒤가 최소
			float n_num = -1, p_num = -1;	//최댓값과 최솟값을 구하기 위한 변수
			bool loop = true;			//반복문 사용


			while (loop)
			{
				++n_num;
				if (n_num < p_num)	// 오버플로우가 나면 n_num이 p_num보다 작아짐
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			loop = true;	//재사용을 위한 초기화
			n_num = 1;
			p_num = 1;

			while (loop)
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[1] = p_num;
				}
				p_num = n_num;
			}

			printf("float의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 8)
		{
			double max_min[2];			//찾은 값 저장. 앞이 최대 뒤가 최소
			double n_num = -1, p_num = -1;	//최댓값과 최솟값을 구하기 위한 변수
			bool loop = true;			//반복문 사용


			while (loop)
			{
				++n_num;
				if (n_num < p_num)	// 오버플로우가 나면 n_num이 p_num보다 작아짐
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			loop = true;	//재사용을 위한 초기화
			n_num = 1;
			p_num = 1;

			while (loop)
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[1] = p_num;
				}
				p_num = n_num;
			}

			printf("double의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 9)
		{
			long double max_min[2];			//찾은 값 저장. 앞이 최대 뒤가 최소
			long double n_num = -1, p_num = -1;	//최댓값과 최솟값을 구하기 위한 변수
			bool loop = true;			//반복문 사용


			while (loop)
			{
				++n_num;
				if (n_num < p_num)	// 오버플로우가 나면 n_num이 p_num보다 작아짐
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			loop = true;	//재사용을 위한 초기화
			n_num = 1;
			p_num = 1;

			while (loop)			//언더플로우 나면 n_num이 p_num보다 커짐
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[1] = p_num;
				}
				p_num = n_num;
			}

			printf("long double의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 10)
		{
			unsigned char max_min[2] = { UCHAR_MAX, 0 };

			unsigned char n_num = 1, p_num = 1;	//최댓값과 최솟값을 구하기 위한 변수
			bool loop = true;					//반복문 사용


			while (loop)
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			printf("unsigned char의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 11)
		{
			unsigned short max_min[2] = { USHRT_MAX, 0 };

			unsigned short n_num = 1, p_num = 1;	//최댓값과 최솟값을 구하기 위한 변수
			bool loop = true;					//반복문 사용


			while (loop)
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			printf("unsigned char의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 12)
		{
			unsigned int max_min[2] = { USHRT_MAX, 0 };

			unsigned int n_num = 1, p_num = 1;	//최댓값과 최솟값을 구하기 위한 변수
			bool loop = true;					//반복문 사용


			while (loop)
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			printf("unsigned char의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 13)
		{
			unsigned long max_min[2] = { USHRT_MAX, 0 };

			unsigned long n_num = 1, p_num = 1;	//최댓값과 최솟값을 구하기 위한 변수
			bool loop = true;					//반복문 사용


			while (loop)
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			printf("unsigned char의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 14)
		{
			unsigned long long max_min[2] = { USHRT_MAX, 0 };

			unsigned long long n_num = 1, p_num = 1;	//최댓값과 최솟값을 구하기 위한 변수
			bool loop = true;					//반복문 사용


			while (loop)
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			printf("unsigned char의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 15)
		{
			printf("전부 출력\n");

			{
				char max_min[2] = { CHAR_MAX, CHAR_MIN };
				printf("char의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}	// char
			{
				bool max_min[2] = { 1,0 };	//예전에는 char같이 1바이트 정수로 쓸수 있었던걸로 기억하지만 지금은 안된다.
											//하지만 bool은 true, false로 쓰는 용도니 이상한 값 넣지 말자.
				printf("bool의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}	//bool
			{
				short max_min[2] = { SHRT_MAX , SHRT_MIN };
				printf("short의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}	//short
			{
				int max_min[2] = { INT_MAX, INT_MIN };
				printf("int의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}	//int
			{
				long max_min[2] = { LONG_MAX, LONG_MIN };
				printf("long의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}	//long
			{
				//값이 이상하게 나옴
				//long long max_min[2] = { LLONG_MAX , LLONG_MIN };

				long long max_min[2];			//찾은 값 저장. 앞이 최대 뒤가 최소
				long long n_num = -1, p_num = -1;	//최댓값과 최솟값을 구하기 위한 변수
				bool loop = true;			//반복문 사용


				while (loop)
				{
					++n_num;
					if (n_num < p_num)	// 오버플로우가 나면 n_num이 p_num보다 작아짐
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				loop = true;	//재사용을 위한 초기화
				n_num = 1;
				p_num = 1;

				while (loop)
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[1] = p_num;
					}
					p_num = n_num;
				}
				printf("long long의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}	//long long
			{
				float max_min[2];			//찾은 값 저장. 앞이 최대 뒤가 최소
				float n_num = -1, p_num = -1;	//최댓값과 최솟값을 구하기 위한 변수
				bool loop = true;			//반복문 사용


				while (loop)
				{
					++n_num;
					if (n_num < p_num)	// 오버플로우가 나면 n_num이 p_num보다 작아짐
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				loop = true;	//재사용을 위한 초기화
				n_num = 1;
				p_num = 1;

				while (loop)
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[1] = p_num;
					}
					p_num = n_num;
				}

				printf("float의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}	//float
			{
				double max_min[2];			//찾은 값 저장. 앞이 최대 뒤가 최소
				double n_num = -1, p_num = -1;	//최댓값과 최솟값을 구하기 위한 변수
				bool loop = true;			//반복문 사용


				while (loop)
				{
					++n_num;
					if (n_num < p_num)	// 오버플로우가 나면 n_num이 p_num보다 작아짐
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				loop = true;	//재사용을 위한 초기화
				n_num = 1;
				p_num = 1;

				while (loop)
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[1] = p_num;
					}
					p_num = n_num;
				}

				printf("double의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}	//double
			{
				long double max_min[2];			//찾은 값 저장. 앞이 최대 뒤가 최소
				long double n_num = -1, p_num = -1;	//최댓값과 최솟값을 구하기 위한 변수
				bool loop = true;			//반복문 사용


				while (loop)
				{
					++n_num;
					if (n_num < p_num)	// 오버플로우가 나면 n_num이 p_num보다 작아짐
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				loop = true;	//재사용을 위한 초기화
				n_num = 1;
				p_num = 1;

				while (loop)			//언더플로우 나면 n_num이 p_num보다 커짐
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[1] = p_num;
					}
					p_num = n_num;
				}

				printf("long double의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}	//long double
			{
				unsigned char max_min[2] = { UCHAR_MAX, 0 };

				unsigned char n_num = 1, p_num = 1;	//최댓값과 최솟값을 구하기 위한 변수
				bool loop = true;					//반복문 사용


				while (loop)
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				printf("unsigned char의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}	//unsigned char
			{
				unsigned short max_min[2] = { USHRT_MAX, 0 };

				unsigned short n_num = 1, p_num = 1;	//최댓값과 최솟값을 구하기 위한 변수
				bool loop = true;					//반복문 사용


				while (loop)
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				printf("unsigned char의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}	//unsigned short
			{
				unsigned int max_min[2] = { USHRT_MAX, 0 };

				unsigned int n_num = 1, p_num = 1;	//최댓값과 최솟값을 구하기 위한 변수
				bool loop = true;					//반복문 사용


				while (loop)
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				printf("unsigned char의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}	//unsigned int
			{
				unsigned long max_min[2] = { USHRT_MAX, 0 };

				unsigned long n_num = 1, p_num = 1;	//최댓값과 최솟값을 구하기 위한 변수
				bool loop = true;					//반복문 사용


				while (loop)
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				printf("unsigned char의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}	//unsigned long
			{
				unsigned long long max_min[2] = { USHRT_MAX, 0 };

				unsigned long long n_num = 1, p_num = 1;	//최댓값과 최솟값을 구하기 위한 변수
				bool loop = true;					//반복문 사용


				while (loop)
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				printf("unsigned char의 최댓값는 %d, 최솟값은 %d\n", max_min[0], max_min[1]);
			}	//unsigned long long
		}
		else
		{
			printf("잘못된 값 입력. 다시 입력. : ");
		}
		printf("\n\n");
	}
}