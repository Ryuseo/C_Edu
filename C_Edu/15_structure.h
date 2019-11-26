#pragma once
#include <stdio.h>
#include <Windows.h>
#include <math.h>

enum days { SUN, MON, TUE, WED, THU, FRI, SAT };

// ����ü, ���Ͽ�(����ü) ���� ��Ʈ
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

// ���Ͽ�(����ü)
// �޸𸮸� ����������� �����Ѵ�.
// ���� ū ������ŭ �Ҵ�ȴ�.
// �Ʒ� uni�� ��� int�� 8����Ʈ ��ŭ �Ҵ� �ɰ��̴�.
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
static void calculate_distance();
static void input_employee_info();
static void pointer_N_struct();
static void func_N_struct();
static void sub_capyfunc_of_func_N_struct(year_month_day a);
static void sub_movefunc_of_func_N_struct(year_month_day* a);
static void use_union();
static void choose_between_two_things();
static void enumeration();
static void typedefine();