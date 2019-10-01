#include "01_printf().h"
#include "02_Warmnig_Up.h"
#include "03_scanf_s().h"
#include "04_variable.h"
#include "05_math.h"
#include "06_if_n_switch.h"
#include "07_loop.h"
#include "08_function.h"
#include "09_static.h"
#include "10_extern_1.h"

//빌드 제외하기 귀찮아서 만든 예제 프로그램 실행 프로그램
//위에 include가 늘어가는게 거슬린다. 다른 헤더파일 만들어서 합쳐버릴 예정

int main(void)
{
	int num;
	int play = 1;
	while (play)
	{
		//예제 프로그램 설명 출력
		printf("00. 종료\n");
		printf("01. printf() 관련 예제 프로그램.\n");
		printf("02. 연습으로 만든 계산기.\n");			//작업 시기적으로는 01보다 빠르지만 01번 작업후에 넣기로 결정했음
		printf("03. scanf_s() 관련 예제 프로그램.\n");
		printf("04. 변수 관련 예제 프로그램\n");
		printf("05. 연산자 관련 예제 프로그램\n");
		printf("06. 조건문 관련 예제 프로그램\n");
		printf("07. 반복문 관련 예제 프로그램\n");
		printf("08. 함수 관련 예제 프로그램\n");
		printf("09. static 심화 예제 프로그램\n");
		printf("10. extern 심화 예제 프로그램\n");
		printf("\n");
		printf("실행할 프로그램 번호 입력 : ");

		//실행할 예제 프로그램 입력 받음
		scanf_s("%d", &num);
		//화면 지우는 함수이다. 'window.h' 필요
		system("cls");

		//받은 입력 처리.
		switch (num)
		{
		case 0:
			printf("종료.");
			play = 0;
			break;
		case 1:
			play_01();
			break;
		case 2:
			calculater();
			break;
		case 3:
			play_03();
			break;
		case 4:
			play_04();
			break;
		case 5:
			play_05();
			break;
		case 6:
			play_06();
			break;
		case 7:
			play_07();
			break;
		case 8:
			play_08();
			break;
		case 9:
			play_09();
			break;
		case 10:
			play_10();
			break;
		default:	//예외처리부분 정해진 숫자 이외의 입력은 여기로 처리된다. 특문 같은거 넣으면 무한루프 돌지만 c는 예외처리하기 힘들어서;;; scanf는 너무 문제가 많이 발생함
			printf("없는 번호. 다시 입력.\n");
			break;
		}
	}
}