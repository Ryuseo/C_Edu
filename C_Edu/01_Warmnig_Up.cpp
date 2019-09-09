#include <stdio.h>
#include <Windows.h>

void print_start();
void calculate(float a, float b, char op);

int main(void)
{
	float input_num1 = 0;
	float input_num2 = 2;
	char input_char = '+';
	int input_continue = 1;
	while (input_continue)
	{
		print_start();

		//다들 된다는데 왜 난 scnaf_s(%c, &asdf)가 안될까 ㅠ
		scanf_s("%f %c %f", &input_num1, &input_char, 1, &input_num2);
		printf("%f %c %f\n\n", input_num1, input_char, input_num2);

		calculate(input_num1, input_num2, input_char);

		printf_s("끝내려면 0, 계속하려면 아무숫자 입력\n");
		scanf_s("%d", &input_continue);
		system("cls");
	}
}

void print_start()
{
	printf_s("계산기 프로그램\n");
	printf_s("수식을 입력하세요.\n");
}

void calculate(float a, float b, char op)
{
	switch (op)
	{
	case '+':
		a += b;
		break;
	case '-':
		a -= b;
		break;
	case '*':
		a *= b;
		break;
	case '/':
		a /= b;
		break;
	default:
		printf_s("잘못된 연산자 입력\n");
		break;
	}
	printf_s("결과는 %f.\n\n", a);
}