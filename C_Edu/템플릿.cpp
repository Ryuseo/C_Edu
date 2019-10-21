// 매번 새로 입력하기 귀찮아서 만들어 둔 파일 1번
// 빌드 제외를 해주자

#include ".h"

void play_01()
{
	int num;
	int play = 1;

	printf(" 관련 예제\n\n");

	while (play)
	{
		printf("1. \n");
		printf("\n");
		printf("실행할 예제 번호 입력.(다른 프로그램 실행은 0번) : ");
		scanf_s("%d", &num);

		system("cls");

		switch (num)
		{
		case 0:
			play = 0;
			printf("종료.");
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		default:
			printf("없는 예문. 다시 입력");
			break;
		}
		printf("\n\n");
	}
}