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

		//�ٵ� �ȴٴµ� �� �� scnaf_s(%c, &asdf)�� �ȵɱ� ��
		scanf_s("%f %c %f", &input_num1, &input_char, 1, &input_num2);
		printf("%f %c %f\n\n", input_num1, input_char, input_num2);

		calculate(input_num1, input_num2, input_char);

		printf_s("�������� 0, ����Ϸ��� �ƹ����� �Է�\n");
		scanf_s("%d", &input_continue);
		system("cls");
	}
}

void print_start()
{
	printf_s("���� ���α׷�\n");
	printf_s("������ �Է��ϼ���.\n");
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
		printf_s("�߸��� ������ �Է�\n");
		break;
	}
	printf_s("����� %f.\n\n", a);
}