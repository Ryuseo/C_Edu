#include <stdio.h>

void print_start();

void main(void)
{
	float input_num1 = 0;
	float input_num2 = 2;
	char input_char = '+';
	while (1)
	{
		print_start();

		//개같은 scanf_s();
		scanf_s("%f %c %f", &input_num1, &input_char, &input_num2);
		printf("%f %c %f\n\n", input_num1, input_char, input_num2);

		switch (input_char)
		{
		case '+':
			input_num1 += input_num2;
			break;
		case '-':
			input_num1 -= input_num2;
			break;
		case '*':
			input_num1 *= input_num2;
			break;
		case '/':
			input_num1 /= input_num2;
			break;
		default:
			printf_s("잘못된 연산자 입력\n");
			break;
		}

		printf_s("결과는 %f.\n\n", input_num1);
	}
}

void print_start()
{
	printf_s("계산기 프로그램\n");
	printf_s("수식을 입력하세요.\n");
}