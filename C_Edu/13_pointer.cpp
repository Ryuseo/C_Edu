#include "13_pointer.h"

// 드디어 C의 꽃이자 모든걸 망치는 만악의 근원인 포인터다. 그리고 제일 어렵다.
void play_13()
{
	int num;
	int play = 1;

	printf("포인터 관련 예제\n\n");

	while (play)
	{
		printf("1. 변수 주소 출력\n");
		printf("2. 포인터 변수로 값 출력\n");
		printf("3. 포인터가 가리키는 주소 변경\n");
		printf("4. 포인터로 값 변경\n");
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
			print_address();
			break;
		case 2:
			print_value();
			break;
		case 3:
			pointer_01();
			break;
		case 4:
			pointer_02();
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}

// 변수의 주소값을 출력하는 함수
void print_address()
{
	int i = 10;
	char c = 'c';
	double d = 12.3;

	int* ip = NULL;
	char* cp = NULL;
	double* dp = NULL;

	ip = &i;
	cp = &c;
	dp = &d;

	// 예제 원문에는 %u로 되있지만 인텔센스가 포인터 출력은 %p를 써야한다고 한다. 출력 결과도 크게 달라진다.
	// %u는 unsigned 변수 출력, %p는 주소를 16진수로 출력
	printf("일반 변수로 주소출력\n");
	printf("i의 주소 : %p\n", &i);
	printf("c의 주소 : %p\n", &c);
	printf("d의 주소 : %p\n", &d);
	
	printf("\n");

	printf("포인터 변수로 주소출력\n");
	printf("i의 주소 : %p\n", ip);
	printf("c의 주소 : %p\n", cp);
	printf("d의 주소 : %p\n", dp);
}

void print_value()
{
	int i = 10;
	char c = 'c';
	double d = 12.3;

	int* ip = NULL;
	char* cp = NULL;
	double* dp = NULL;

	ip = &i;
	cp = &c;
	dp = &d;

	printf("일반 변수로 값출력\n");
	printf("i의 주소 : %d\n", i);
	printf("c의 주소 : %c\n", c);
	printf("d의 주소 : %f\n", d);

	printf("\n");

	// 간접 참조(*)로 값을 출력하고 있다.
	// int -> int*(변수에서 주소 참조) : &
	// int* -> int(포인터에서 값 참조) : *
	// 미적분이 생각난다. 머리가 아파온다.
	printf("포인터 변수로 값출력\n");
	printf("i의 주소 : %d\n", *ip);
	printf("c의 주소 : %c\n", *cp);
	printf("d의 주소 : %f\n", *dp);
}

// 1,2번 합친 예제
void pointer_01()
{
	int v_01 = 10, v_02 = 20;
	int* p = NULL;

	p = &v_01;
	
	printf("주소 변경 전\n");

	// 일반변수로 값 출력과 일반변수를 &로 주소를 출력
	printf("v_01 = %d\n", v_01);
	printf("&v_01 = %p\n", &v_01);

	// 포인터 변수로 주소 출력과 *로 간접 참조해서 값 출력
	printf("*p = %d\n", *p);
	printf("p = %p\n", p);

	// 주소 재 대입
	p = &v_02;

	printf("\n주소 변경 후\n");

	printf("v_02 = %d\n", v_02);
	printf("&v_02 = %p\n", &v_02);

	printf("*p = %d\n", *p);
	printf("p = %p\n", p);
}

// 포인터로 해당 주소의 값 변경
// 포인터를 생성할때 반드시 사용할 변수의 주소 또는, NULL로 초기화 해야하는 이유이다. 나는 일관성 있게 NULL로 초기화 하는걸 선호한다.
// 만약 NULL로 초기화 하지않고 변수의 주소로 초기화 한다면 주석을 잘 달아주자.
// 솔직히 길어지니까 생성할때 사용할 변수의 주소로 변경하는걸 싫어하지 않는다.
// 그렇다면 사용이 끝났을때 사용하지 않을때 NULL로 초기화 하는게 좋을까?
// 문제가 생길 여지를 줄여주긴 하겠지만 대입연산자를 자주 사용하는건 성능에 악영향을 소소하게 줄수 있다.
// 하지만 동적할당과 달리 안한다고 반드시 문제가 생기는건 아니라서 미묘하다.
// 뭐 몸냥 하자. 혼자하면 문제될거 없겠지만 팀으로 하게되면 회의로 정할 문제라고 생각한다.
// 머피의 법칙을 기억하자. 컴파일러가 좋아져서 문제가 안될수도 있지만, 잘못될 가능성이 있다면 결국 잘못되기 마련이다.
void pointer_02()
{
	int v = 10;
	int* p = NULL;

	p = &v;

	printf("값 변경 전\n");

	printf("v = %d\n", v);
	printf("&v = %p\n", &v);

	printf("*p = %d\n", *p);
	printf("p = %p\n", p);

	// 포인터가 가리키고 있는 주소에 있는 값을 바꿈
	*p = 20;

	printf("\n값 변경 후\n");

	printf("v = %d\n", v);
	printf("&v = %p\n", &v);

	printf("*p = %d\n", *p);
	printf("p = %p\n", p);
}