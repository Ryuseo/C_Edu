#include "01_printf().h"

// 예제프로그램 실행 프로그램의 예제들을 크게 분류해서 실행하는 함수. 알아 듣기 힘들지만 적절한 코멘트가 생각나지 않는다.
void play_01()
{
	int num;
	int play = 1;
	
	// 실행한 예제프로그램 이름
	printf("printf() 관련 예제\n\n");

	while (play)
	{
		// 예제프로그램에 있는 예제 설명
		printf("1. Hello World 출력\n");
		printf("2. 여러줄 출력\n");
		printf("\n");
		printf("실행할 예제 번호 입력.(다른 프로그램 실행은 0번) : ");

		// 입력처리
		scanf_s("%d", &num);

		system("cls");

		switch (num)	// 예제프로그램 실행 프로그램의 스위치문과 동일
		{
		case 0:
			play = 0;
			printf("종료.");
			break;
		case 1:
			print_Hello_World();
			break;
		case 2:
			multi_sentence();
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}

void print_Hello_World()
{
	printf("Hello World");						// 모든 프로그래밍 공부의 시작.
}

void multi_sentence()
{
	printf("***************\n");				
	printf("Hello world\nHello C\n");			// printf하나로 2줄 출력
	printf("나는 게임을 좋아한다.");				// 한줄 출력
	printf("\n나는 집밖을 나가는걸 싫어한다.\n");	// 앞에 한줄 내리고 출력하고 내림
	printf("LOL");								// 출력
}