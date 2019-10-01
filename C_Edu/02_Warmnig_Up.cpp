#include "02_Warmnig_Up.h"

void calculater()	//계산기 본체다.
{
	float input_num1 = 0;
	float input_num2 = 2;
	char input_char = '+';
	int input_continue = 1;

	//재시작을 위해 반복문을 돌린다. for가 아닌 이유는 몇번 돌지 모르기 때문.
	while (input_continue)
	{
		//딱히 함수로 만들 필요는 없었지만 했다. 작성하고 몇주 지나서 주석 작업하는데 전혀 기억나지 않는다.
		print_start();

		//수식을 입력하는 부분이다. 정말 문제가 계속 터진 부분. scanf는 정말 악이다. 잘못 입력하면 여전히 터진다.
		scanf_s("%f %c %f", &input_num1, &input_char, 1, &input_num2);
		//입력 받은 수식 출력
		printf("%f %c %f\n\n", input_num1, input_char, input_num2);
		//실제로 계산하는 함수로 넘어간다.
		calculate(input_num1, input_num2, input_char);

		//재시작 기능이다.
		printf_s("끝내려면 0, 계속하려면 아무숫자 입력\n");
		scanf_s("%d", &input_continue);
		system("cls");
	}
}

//출력만 한다. 굳이 만든 이유는 모르겠다. 퍼포먼스적으로도 손해. 메모리에서도 손해. 작업시간으로도 손해. 용량으로도 손해. 다음부터는 좀더 생각해서 만들자
void print_start()
{
	printf_s("계산기 프로그램\n");
	printf_s("수식을 입력하세요.\n");
}

//계산하는 함수. op입력이 참 힘들었다.
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
	//결과값 출력. 반환해서 calculater에서 출력할까 했지만 calculater 줄수 줄일겸 반환하지 않았다.
	printf_s("결과는 %f.\n\n", a);
}