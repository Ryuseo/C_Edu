#include "15_structure.h"

void play_15()
{
	int num;
	int play = 1;

	printf("구조체 관련 예제\n\n");

	while (play)
	{
		printf("1. 구조체 기본 예제\n");
		printf("2. 구조체를 가지는 구조체 예제\n");
		printf("3. 구조체 포인터와 구조체 예제\n");
		printf("4. 구조체와 함수 예제\n");
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
			calculate_distance();
			break;
		case 2:
			input_employee_info();
			break;
		case 3:
			pointer_N_struct();
			break;
		case 4:
			func_N_struct();
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}

void calculate_distance()
{
	three_D_point_pos a_point, b_point;

	//-10.00 ~ 10.00로 초기화
	a_point.x = (rand() % 2001 - 1000) / 100.f;
	a_point.y = (rand() % 2001 - 1000) / 100.f;
	a_point.z = (rand() % 2001 - 1000) / 100.f;

	b_point.y = (rand() % 2001 - 1000) / 100.f;
	b_point.z = (rand() % 2001 - 1000) / 100.f;
	b_point.x = (rand() % 2001 - 1000) / 100.f;

	printf("a_point.x = %f,\ta_point.y = %f,\ta_point.z = %f\n", a_point.x, a_point.y, a_point.z);
	printf("b_point.x = %f,\tb_point.y = %f,\tb_point.z = %f\n", b_point.x, b_point.y, b_point.z);

	//3차원에서 2점 사이의 거리 구하는 공식
	printf("%f", sqrt(pow((a_point.x - b_point.x), 2) + pow(a_point.y - b_point.y, 2) + pow(a_point.z - b_point.z, 2)));
}

// 구조체에 구조체를 포함한 여러가지 데이터를 넣었다.
void input_employee_info()
{
	employee_info employee[20] = { NULL };

	int i = 0;
	while (true)
	{
		printf("이름을 입력하시오. : ");
		scanf_s("%s",employee[i].name, 20);
		printf("나이를 입력하시오. : ");
		scanf_s("%d", &employee[i].age);
		printf("월급을 입력하시오. : ");
		scanf_s("%f", &employee[i].salary);
		printf("직책을 입력하시오. : ");
		scanf_s("%s", employee[i].position, 20);
		printf("입사일을 입력하시오. 공백으로 구분 : ");
		scanf_s("%d %d %d", &employee[i].join_day.year, &employee[i].join_day.month, &employee[i].join_day.day);
		printf("생일을 입력하시오. 공백으로 구분 : ");
		scanf_s("%d %d %d", &employee[i].date_of_birth.year, &employee[i].date_of_birth.month, &employee[i].date_of_birth.day);

		++i;

		if (i >= 20)
		{
			printf("입력수 제한에 도달했습니다. 종료합니다.\n");
		}

		printf("끝내려면 0 아니면 1 : ");
		scanf_s("%d", &i);

		if (i == 0)
		{
			break;
		}
	}

	for (i = 0; i < 20 && employee[i].age != 0; ++i)
	{
		printf("이름\t: %s ",employee[i].name);
		printf("나이\t: %d세 ", employee[i].age);
		printf("월급\t: %f ", employee[i].salary);
		printf("직책\t: %s ", employee[i].position);
		printf("입사일\t: %d년 %d월 %d일", employee[i].date_of_birth.year, employee[i].date_of_birth.month, employee[i].date_of_birth.day);
		printf("생일\t: %d년 %d월 %d일", employee[i].date_of_birth.year, employee[i].date_of_birth.month, employee[i].date_of_birth.day);
		printf("\n\n");
	}
}

// 링크드 리스트
// 동적할당 안들어 간 관계로 간단하게만 구현
void pointer_N_struct()
{
	linked_list a, b, *p;

	a.data = 1;
	a.next = &b;
	b.data = 2;
	b.next = NULL;	//오류방지겸 끝을 알리기 위함

	p = &a;			//탐색의 시작설정

	while (p != NULL)
	{
		printf("data : %d\n",p->data);
		p = p->next;
	}
}

void func_N_struct()
{
	year_month_day a = {1,1,1};

	printf("a.year = %d\n", a.year);

	sub_capyfunc_of_func_N_struct(a);

	printf("a.year = %d\n",a.year);

	sub_movefunc_of_func_N_struct(&a);

	printf("a.year = %d\n", a.year);
}

void sub_capyfunc_of_func_N_struct(year_month_day a)
{
	a.year = 10;
}

void sub_movefunc_of_func_N_struct(year_month_day* a)
{
	a->year = 20;
}