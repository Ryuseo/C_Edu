#include "02_Warmnig_Up.h"

void calculater()	//���� ��ü��.
{
	float input_num1 = 0;
	float input_num2 = 2;
	char input_char = '+';
	int input_continue = 1;

	//������� ���� �ݺ����� ������. for�� �ƴ� ������ ��� ���� �𸣱� ����.
	while (input_continue)
	{
		//���� �Լ��� ���� �ʿ�� �������� �ߴ�. �ۼ��ϰ� ���� ������ �ּ� �۾��ϴµ� ���� ��ﳪ�� �ʴ´�.
		print_start();

		//������ �Է��ϴ� �κ��̴�. ���� ������ ��� ���� �κ�. scanf�� ���� ���̴�. �߸� �Է��ϸ� ������ ������.
		scanf_s("%f %c %f", &input_num1, &input_char, 1, &input_num2);
		//�Է� ���� ���� ���
		printf("%f %c %f\n\n", input_num1, input_char, input_num2);
		//������ ����ϴ� �Լ��� �Ѿ��.
		calculate(input_num1, input_num2, input_char);

		//����� ����̴�.
		printf_s("�������� 0, ����Ϸ��� �ƹ����� �Է�\n");
		scanf_s("%d", &input_continue);
		system("cls");
	}
}

//��¸� �Ѵ�. ���� ���� ������ �𸣰ڴ�. �����ս������ε� ����. �޸𸮿����� ����. �۾��ð����ε� ����. �뷮���ε� ����. �������ʹ� ���� �����ؼ� ������
void print_start()
{
	printf_s("���� ���α׷�\n");
	printf_s("������ �Է��ϼ���.\n");
}

//����ϴ� �Լ�. op�Է��� �� �������.
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
	//����� ���. ��ȯ�ؼ� calculater���� ����ұ� ������ calculater �ټ� ���ϰ� ��ȯ���� �ʾҴ�.
	printf_s("����� %f.\n\n", a);
}