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

//���� �����ϱ� �����Ƽ� ���� ���� ���α׷� ���� ���α׷�
//���� include�� �þ�°� �Ž�����. �ٸ� ������� ���� ���Ĺ��� ����

int main(void)
{
	int num;
	int play = 1;
	while (play)
	{
		//���� ���α׷� ���� ���
		printf("00. ����\n");
		printf("01. printf() ���� ���� ���α׷�.\n");
		printf("02. �������� ���� ����.\n");			//�۾� �ñ������δ� 01���� �������� 01�� �۾��Ŀ� �ֱ�� ��������
		printf("03. scanf_s() ���� ���� ���α׷�.\n");
		printf("04. ���� ���� ���� ���α׷�\n");
		printf("05. ������ ���� ���� ���α׷�\n");
		printf("06. ���ǹ� ���� ���� ���α׷�\n");
		printf("07. �ݺ��� ���� ���� ���α׷�\n");
		printf("08. �Լ� ���� ���� ���α׷�\n");
		printf("09. static ��ȭ ���� ���α׷�\n");
		printf("10. extern ��ȭ ���� ���α׷�\n");
		printf("\n");
		printf("������ ���α׷� ��ȣ �Է� : ");

		//������ ���� ���α׷� �Է� ����
		scanf_s("%d", &num);
		//ȭ�� ����� �Լ��̴�. 'window.h' �ʿ�
		system("cls");

		//���� �Է� ó��.
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
		default:	//����ó���κ� ������ ���� �̿��� �Է��� ����� ó���ȴ�. Ư�� ������ ������ ���ѷ��� ������ c�� ����ó���ϱ� ����;;; scanf�� �ʹ� ������ ���� �߻���
			printf("���� ��ȣ. �ٽ� �Է�.\n");
			break;
		}
	}
}