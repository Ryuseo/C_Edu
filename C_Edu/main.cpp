// ���� �����ϱ� �����Ƽ� ���� ���� ���α׷� ���� ���α׷�
// include�� �þ�°� �Ž��ȴ�. �ٸ� ������� ���� ��ħ
// ������ ������ switch�� �Լ� ������ �Ź� �����.... �������� ������� ������?
#include "library.h"

int main(void)
{
	int num;
	int play = 1;
	while (play)
	{
		// ���� ���α׷� ���� ���
		// �Ϻ� ���� ���α׷� �ҽ��ڵ�� '���� Ǯ� C��� Express, õ�α� ����, 2013�� 2��2��'���� ���°� �Դϴ�.
		printf("00. ����\n");
		printf("01. printf() ���� ���� ���α׷�.\n");
		printf("02. �������� ���� ����.\n");			// �۾� �ñ������δ� 01���� �������� 01�� �۾��Ŀ� �ֱ�� ��������
		printf("03. scanf_s() ���� ���� ���α׷�.\n");
		printf("04. ���� ���� ���� ���α׷�\n");
		printf("05. ������ ���� ���� ���α׷�\n");
		printf("06. ���ǹ� ���� ���� ���α׷�\n");
		printf("07. �ݺ��� ���� ���� ���α׷�\n");
		printf("08. �Լ� ���� ���� ���α׷�\n");
		printf("09. static ���� ���α׷�\n");
		printf("10. extern ���� ���α׷�\n");
		printf("11. ����Լ� ���� ���α׷�\n");
		printf("12. �迭 ���� ���α׷�\n");
		printf("13. ������ ���� ���α׷�\n");
		printf("\n");
		printf("������ ���α׷� ��ȣ �Է� : ");

		// ������ ���� ���α׷� �Է� ����
		scanf_s("%d", &num);
		// ȭ�� ����� �Լ��̴�. 'window.h' �ʿ�
		system("cls");

		// ���� �Է� ó��.
		switch (num)
		{
		case 0:
			printf("����.");
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
		default:	// ����ó���κ� ������ ���� �̿��� �Է��� ����� ó���ȴ�. �̻��Ѱ� ������ ���ѷ��� ������ c�� ����ó���ϱ� ����;;; scanf�� �ʹ� ������ ���� �߻���
			printf("���� ��ȣ. �ٽ� �Է�.\n");
			break;
		}
	}
}