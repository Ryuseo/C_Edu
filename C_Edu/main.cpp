// 빌드 제외하기 귀찮아서 만든 예제 프로그램 실행 프로그램
// include가 늘어가는게 거슬렸다. 다른 헤더파일 만들어서 합침
// 하지만 어차피 switch에 함수 넣으러 매번 들려야.... 귀찮은데 좋은방법 없을까?
#include "library.h"

int main(void)
{
	int num;
	int play = 1;
	while (play)
	{
		// 예제 프로그램 설명 출력
		// 일부 예제 프로그램 소스코드는 '쉽게 풀어쓴 C언어 Express, 천인국 지음, 2013년 2판2쇄'에서 나온것 입니다.
		printf("00. 종료\n");
		printf("01. printf() 관련 예제 프로그램.\n");
		printf("02. 연습으로 만든 계산기.\n");			// 작업 시기적으로는 01보다 빠르지만 01번 작업후에 넣기로 결정했음
		printf("03. scanf_s() 관련 예제 프로그램.\n");
		printf("04. 변수 관련 예제 프로그램\n");
		printf("05. 연산자 관련 예제 프로그램\n");
		printf("06. 조건문 관련 예제 프로그램\n");
		printf("07. 반복문 관련 예제 프로그램\n");
		printf("08. 함수 관련 예제 프로그램\n");
		printf("09. static 예제 프로그램\n");
		printf("10. extern 예제 프로그램\n");
		printf("11. 재귀함수 예제 프로그램\n");
		printf("12. 배열 예제 프로그램\n");
		printf("13. 포인터 예제 프로그램\n");
		printf("\n");
		printf("실행할 프로그램 번호 입력 : ");

		// 실행할 예제 프로그램 입력 받음
		scanf_s("%d", &num);
		// 화면 지우는 함수이다. 'window.h' 필요
		system("cls");

		// 받은 입력 처리.
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
		case 11:
			play_11();
			break;
		case 12:
			play_12();
			break;
		case 13:
			play_13();
			break;
		case 14:
			play_14();
			break;
		default:	// 예외처리부분 정해진 숫자 이외의 입력은 여기로 처리된다. 이상한값 넣으면 무한루프 돌지만 c는 예외처리하기 힘들어서;;; scanf는 너무 문제가 많이 발생함
			printf("없는 번호. 다시 입력.\n");
			break;
		}
	}
}