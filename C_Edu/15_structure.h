#pragma once
#include <stdio.h>
#include <Windows.h>
#include <math.h>

// 구조체, 유니온 선언 파트
struct three_D_point_pos
{
	double x;
	double y;
	double z;
};

struct year_month_day
{
	int year;
	int month;
	int day;
};

struct employee_info
{
	char name[5];
	int age;
	float salary;
	char position[20];

	year_month_day join_day;
	year_month_day date_of_birth;
};

struct linked_list
{
	int data;
	linked_list* next;
};

// 메모리를 멤버변수끼리 공유한다.
// 제일 큰 변수만큼 할당된다.
// 아래 uni의 경우 int의 8바이트 만큼 할당 될것이다.
union uni
{
	int i;
	char c;
};

union strucunion
{
	year_month_day A;
	three_D_point_pos B;
};

struct unistruct
{
	uni A;
	strucunion C;
};

void play_15();
void calculate_distance();
void input_employee_info();
void pointer_N_struct();
void func_N_struct();
void sub_capyfunc_of_func_N_struct(year_month_day a);
void sub_movefunc_of_func_N_struct(year_month_day* a);
void use_union();
void choose_between_two_things();;