#pragma once
#include <stdio.h>
#include <Windows.h>
#include <math.h>

// 구조체 선언 파트
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

void play_15();
void calculate_distance();
void input_employee_info();
void pointer_N_struct();
void func_N_struct();
void sub_capyfunc_of_func_N_struct(year_month_day a);
void sub_movefunc_of_func_N_struct(year_month_day* a);