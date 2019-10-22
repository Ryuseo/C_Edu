#include "14_string.h"

#define ARRAY_SIZE 5
#define STRING_SIZE 200

void play_14()
{
	int num;
	int play = 1;

	printf("문자열 관련 예제\n\n");

	while (play)
	{
		printf("1. 배열의 초기화 세가지 방법과 출력하는 예제\n");
		printf("2. 포인터로 문자열 처리하는 예제\n");
		printf("3. 문자 입출력 라이브러리 예제\n");
		printf("4. 문자열 입출력 라이브러리 예제\n");
		printf("5. 문자열 처리 라이브러리 예제\n");
		printf("6. 문자열과 숫자로 서로 변환하는 예제\n");
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
			init_string();
			break;
		case 2:
			pointerNstring();
			break;
		case 3:
			text_inoutput_func();
			break;
		case 4:
			string_inoutput_func();
			break;
		case 5:
			process_string();
			break;
		case 6:
			string_to_number();
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}

// 문자열을 초기화하는 3가지 방법
void init_string()
{
	// 선언하면서 초기화를 해주지 않으면 반드시 크기를 명시해야 한다.
	char string_01[ARRAY_SIZE];
	
	// 문자열 초기화 방법이라기 보다는 배열 초기화 방법에 가깝다.
	// 초기화 하면서 선언할때 입력되는 데이터에 따라서 크기가 정해진다.
	// 초기화하는 데이터보다 큰 데이터를 저장할 수 있게 하려면 크기를 명시하거나 NULL문자를 넣어주면 된다.
	char string_02[] = { 'A', 'B', 'C', 'D', '\0' };
	
	// 아마 제일 많이 쓰게될 문자열 초기화 방법.
	char string_03[] = "abcd";

	// 제일 기초적인 초기화 방법.
	string_01[0] = '1';
	string_01[1] = '2';
	string_01[2] = '3';
	string_01[3] = '4';
	string_01[4] = '\0';

	// 크기를 알수 없는 배열의 출력방식.
	int i = 0;
	while (string_01[i] != '\0')
	{
		// ++i가 아닌 i++를 쓴 이유는 5-2번 예제에 있다.
		printf("%c", string_01[i++]);
	}
	printf("\n");


	// 하지만 문자열은 그냥 출력하면 된다.
	printf("%s\n", string_02);
	printf("%s\n", string_03);
}

// 포인터로 문자열 처리하는 예제
void pointerNstring()
{
	char string[] = "HelloWorld";

	// 원래 예제에는 const가 안붙어있었지만 표준이 바뀌였는지 const를 붙이지 않으면 빌드오류가 난다.
	const char* pointer = "HelloWorld";

	printf("string's add =\t%p\n", string);
	printf("pointer's val =\t%s\n", pointer);
	printf("pointer's add =\t%p\n", pointer);

	// 그런데 신기하게도 const인데 가리키는 주소값이 바뀐다.
	// const char*는 상수 문자열을 가리키는 포인터라는 의미로 const는 가리키는 문자열에만 적용된다. 값을 바꿀수 없는 포인터이다.
	// const int*는 어떨지 실험해야겠다. goto 13_pointer.cpp;
	// 아마 명확한 의미 전달을 위해 const를 붙이도록 바꾼듯 하다.
	// 예전에도 char*에 문자열을 넣으면 주소의 값은 바꾸지 못하지만 가리키는 주소는 바꿀 수 있었다고 한다.
	pointer = "GoodBye";

	printf("pointer's val =\t%s\n", pointer);
	printf("pointer's add =\t%p\n", pointer);
}

// 문자 입출력 라이브러리 예제
void text_inoutput_func()
{
	// getchar의 반환형이 int이다. 물론 char로 해도 입력은 받을수 있다.
	// 문자열이 길어지면 이상하게 출력 될거라고 생각했지만 의외로 정상적으로 출력된다.
	// 한번에 출력 가능한 문자열의 길이도 동일하다.
	// int로 해야하는 이유는 https://kldp.org/node/62273 에서 확인할 수 있다.
	// 대충 getchar는 257가지 결과를 출력하므로 char이 저장가능한 갯수를 초과해서 비정상적인 결과가 나올 수 있기 때문.
	int getchar_var;
	printf("getchar로 값을 받고 putchar로 출력한다.(ctrl + z를 입력하면 EOF가 입력되서 다음로 넘어간다.)\n");

	while ((getchar_var = getchar()) != EOF)
	{
		putchar(getchar_var);
	}

	int getch_var;

	printf("\n_getch로 값을 받고 _putch로 출력한다.(q를 입력하면 EOF가 입력되서 다음로 넘어간다. ctrl + j하면 줄 내리기)\n");

	while ((getch_var = _getch()) != 'q')
	{
		_putch(getch_var);
	}

	int getche_var;

	printf("\n_getche로 값을 받고 _putch로 출력한다.(q를 입력하면 EOF가 입력되서 다음로 넘어간다.ctrl + j하면 줄 내리기. 에코로 2줄 내려간다.)\n");

	while ((getche_var = _getche()) != 'q')
	{
		_putch(getche_var);
	}
}

// 문자열 입출력 라이브러리 예제
void string_inoutput_func()
{
	char input_scanf[10] = " ";
	char input_gets[10] = " ";

	printf("scanf_s로 값을 받고 printf로 출력한다. 10글자 제한.(첫문자로 q를 입력하면 다음로 넘어간다.)\n");

	while (input_scanf[0] != 'q')
	{
		printf("%s\n", input_scanf);

		// scanf_s로 바뀌면서 문자열은 크기도 받도록 바뀌였다.
		scanf_s("%s",input_scanf, 10);
	}


	printf("get_s로 값을 받고 put로 출력한다. 10글자 제한.(첫문자로 q를 입력하면 다음로 넘어간다.)\n");

	while (input_gets[0] != 'q')
	{
		puts(input_gets);

		//gets_s도 문자열의 크기를 받아야 한다.
		gets_s(input_gets, 10);
	}
}

// 문자열 처리 라이브러리 예제
void process_string()
{
	//문자열 크기 변수는 /2를 하는데 char형 배열은 그대로 쓰는 이유는 나중에 2개를 합쳐야하기 때문
	const int string_size_01 = (rand()% (STRING_SIZE / 2 - 1) + 2);
	const int string_size_02 = (rand() % (STRING_SIZE / 2 - 1) + 2);
	char string_01[STRING_SIZE];
	char string_02[STRING_SIZE];

	// 랜덤한 문자열 생성기
	for (int i = 0; i < STRING_SIZE; ++i)
	{
		// 아래 주석이 //*으로 되있으면 아랫코드 주석처리
		// /*으로 되있으면 윗코드 주석처리
		/* 
		// 사이즈 공유 버전
		if (i < string_size_01)
		{
			// 대문자는 않넣는다. 아스키 코드 참고
			string_01[i] = 'a' + rand() % 26;
			string_02[i] = 'a' + rand() % 26;
		}
		else
		{
			// 혹시 몰라 나머지는 NULL로 채웠다.
			string_01[i] = '\0';
			string_02[i] = '\0';
		}
		/*/
		// 사이즈 따로 버전
		if(i >= string_size_01 && i >= string_size_02)
		{
			string_01[i] = '\0';
			string_02[i] = '\0';
		}
		else if(i >= string_size_01 || i >= string_size_02)
		{
			if(i >= string_size_01)
			{
				string_01[i] = '\0';
				string_02[i] = 'a' + rand() % 26;
			}
			if(i >= string_size_02)
			{
				string_02[i] = '\0';
				string_01[i] = 'a' + rand() % 26;
			}
		}
		else
		{
			string_01[i] = 'a' + rand() % 26;
			string_02[i] = 'a' + rand() % 26;
		}
		//*/
	}

	printf("1번 문자열은 : %s\n", string_01);
	printf("2번 문자열은 : %s\n", string_02);

	printf("1번 문자열의 길이는 : %d\n", (int)strlen(string_01));
	printf("2번 문자열의 길이는 : %d\n", (int)strlen(string_02));

	printf("2개의 문자열을 사전적으로 비교한 결과 : ");
	if(strcmp(string_01, string_02) > 0)
	{
		printf("%s가 더 앞에 있다.\n", string_02);
	}
	else if (strcmp(string_01, string_02) < 0)
	{
		printf("%s가 더 앞에 있다.\n", string_01);
	}
	else
	{
		printf("동일하다.\n");
	}

	printf("2번 문자열을 1번 문자열에 복사.\n");

	strcpy_s(string_01, string_02);
	printf("string_01 : %s\n", string_01);
	printf("string_02 : %s\n", string_02);

	printf("1번 문자열에서 'a'를 찾은 결과 : ");

	char* temp = strchr(string_01, 'a');
	if (temp == NULL)
	{
		printf("없다.\n");
	}
	else
	{
		// 문자열 0번자리를 1로 보고 샌다.
		printf("%d번째에 있다.\n", (int)(temp - string_01 + 1));
	}
}

// 문자열 <-> 숫자 예제
void string_to_number()
{
	char s1[] = "100 200 300";
	char s2[30];
	int value;

	//문자열 s1에 있는 숫자열을 valuse에 입력한다.
	sscanf_s(s1,"%d",&value);
	printf("%d\n", value);

	//value의 0번 위치에 있는 100을 s2에 입력한다.
	sprintf_s(s2, "%d", value);
	printf("%s\n",s2);
}

//문자열 분할은 동적할당을 배우고 나서 책은 494쪽