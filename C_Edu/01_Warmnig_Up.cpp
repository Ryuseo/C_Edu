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

		//������ scanf_s();
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
			printf_s("�߸��� ������ �Է�\n");
			break;
		}

		printf_s("����� %f.\n\n", input_num1);
	}
}

void print_start()
{
	printf_s("���� ���α׷�\n");
	printf_s("������ �Է��ϼ���.\n");
}