#include "14_string.h"

#define ARRAY_SIZE 5
#define STRING_SIZE 200

void play_14()
{
	int num;
	int play = 1;

	printf("���ڿ� ���� ����\n\n");

	while (play)
	{
		printf("1. �迭�� �ʱ�ȭ ������ ����� ����ϴ� ����\n");
		printf("2. �����ͷ� ���ڿ� ó���ϴ� ����\n");
		printf("3. ���� ����� ���̺귯�� ����\n");
		printf("4. ���ڿ� ����� ���̺귯�� ����\n");
		printf("5. ���ڿ� ó�� ���̺귯�� ����\n");
		printf("6. ���ڿ��� ���ڷ� ���� ��ȯ�ϴ� ����\n");
		printf("\n");
		printf("������ ���� ��ȣ �Է�.(�ٸ� ���α׷� ������ 0��) : ");
		scanf_s("%d", &num);

		system("cls");

		switch (num)
		{
		case 0:
			play = 0;
			printf("����.");
			break;
		case 1:
			init_string();
			break;
		case 2:
			pointerNstring();
			break;
		case 3:
			text_inoutput_func();
			break;
		case 4:
			string_inoutput_func();
			break;
		case 5:
			process_string();
			break;
		case 6:
			string_to_number();
			break;
		default:
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}

// ���ڿ��� �ʱ�ȭ�ϴ� 3���� ���
void init_string()
{
	// �����ϸ鼭 �ʱ�ȭ�� ������ ������ �ݵ�� ũ�⸦ ����ؾ� �Ѵ�.
	char string_01[ARRAY_SIZE];
	
	// ���ڿ� �ʱ�ȭ ����̶�� ���ٴ� �迭 �ʱ�ȭ ����� ������.
	// �ʱ�ȭ �ϸ鼭 �����Ҷ� �ԷµǴ� �����Ϳ� ���� ũ�Ⱑ ��������.
	// �ʱ�ȭ�ϴ� �����ͺ��� ū �����͸� ������ �� �ְ� �Ϸ��� ũ�⸦ ����ϰų� NULL���ڸ� �־��ָ� �ȴ�.
	char string_02[] = { 'A', 'B', 'C', 'D', '\0' };
	
	// �Ƹ� ���� ���� ���Ե� ���ڿ� �ʱ�ȭ ���.
	char string_03[] = "abcd";

	// ���� �������� �ʱ�ȭ ���.
	string_01[0] = '1';
	string_01[1] = '2';
	string_01[2] = '3';
	string_01[3] = '4';
	string_01[4] = '\0';

	// ũ�⸦ �˼� ���� �迭�� ��¹��.
	int i = 0;
	while (string_01[i] != '\0')
	{
		// ++i�� �ƴ� i++�� �� ������ 5-2�� ������ �ִ�.
		printf("%c", string_01[i++]);
	}
	printf("\n");


	// ������ ���ڿ��� �׳� ����ϸ� �ȴ�.
	printf("%s\n", string_02);
	printf("%s\n", string_03);
}

// �����ͷ� ���ڿ� ó���ϴ� ����
void pointerNstring()
{
	char string[] = "HelloWorld";

	// ���� �������� const�� �Ⱥپ��־����� ǥ���� �ٲ���� const�� ������ ������ ��������� ����.
	const char* pointer = "HelloWorld";

	printf("string's add =\t%p\n", string);
	printf("pointer's val =\t%s\n", pointer);
	printf("pointer's add =\t%p\n", pointer);

	// �׷��� �ű��ϰԵ� const�ε� ����Ű�� �ּҰ��� �ٲ��.
	// const char*�� ��� ���ڿ��� ����Ű�� �����Ͷ�� �ǹ̷� const�� ����Ű�� ���ڿ����� ����ȴ�. ���� �ٲܼ� ���� �������̴�.
	// const int*�� ��� �����ؾ߰ڴ�. goto 13_pointer.cpp;
	// �Ƹ� ��Ȯ�� �ǹ� ������ ���� const�� ���̵��� �ٲ۵� �ϴ�.
	// �������� char*�� ���ڿ��� ������ �ּ��� ���� �ٲ��� �������� ����Ű�� �ּҴ� �ٲ� �� �־��ٰ� �Ѵ�.
	pointer = "GoodBye";

	printf("pointer's val =\t%s\n", pointer);
	printf("pointer's add =\t%p\n", pointer);
}

// ���� ����� ���̺귯�� ����
void text_inoutput_func()
{
	// getchar�� ��ȯ���� int�̴�. ���� char�� �ص� �Է��� ������ �ִ�.
	// ���ڿ��� ������� �̻��ϰ� ��� �ɰŶ�� ���������� �ǿܷ� ���������� ��µȴ�.
	// �ѹ��� ��� ������ ���ڿ��� ���̵� �����ϴ�.
	// int�� �ؾ��ϴ� ������ https://kldp.org/node/62273 ���� Ȯ���� �� �ִ�.
	// ���� getchar�� 257���� ����� ����ϹǷ� char�� ���尡���� ������ �ʰ��ؼ� ���������� ����� ���� �� �ֱ� ����.
	int getchar_var;
	printf("getchar�� ���� �ް� putchar�� ����Ѵ�.(ctrl + z�� �Է��ϸ� EOF�� �ԷµǼ� ������ �Ѿ��.)\n");

	while ((getchar_var = getchar()) != EOF)
	{
		putchar(getchar_var);
	}

	int getch_var;

	printf("\n_getch�� ���� �ް� _putch�� ����Ѵ�.(q�� �Է��ϸ� EOF�� �ԷµǼ� ������ �Ѿ��. ctrl + j�ϸ� �� ������)\n");

	while ((getch_var = _getch()) != 'q')
	{
		_putch(getch_var);
	}

	int getche_var;

	printf("\n_getche�� ���� �ް� _putch�� ����Ѵ�.(q�� �Է��ϸ� EOF�� �ԷµǼ� ������ �Ѿ��.ctrl + j�ϸ� �� ������. ���ڷ� 2�� ��������.)\n");

	while ((getche_var = _getche()) != 'q')
	{
		_putch(getche_var);
	}
}

// ���ڿ� ����� ���̺귯�� ����
void string_inoutput_func()
{
	char input_scanf[10] = " ";
	char input_gets[10] = " ";

	printf("scanf_s�� ���� �ް� printf�� ����Ѵ�. 10���� ����.(ù���ڷ� q�� �Է��ϸ� ������ �Ѿ��.)\n");

	while (input_scanf[0] != 'q')
	{
		printf("%s\n", input_scanf);

		// scanf_s�� �ٲ�鼭 ���ڿ��� ũ�⵵ �޵��� �ٲ��.
		scanf_s("%s",input_scanf, 10);
	}


	printf("get_s�� ���� �ް� put�� ����Ѵ�. 10���� ����.(ù���ڷ� q�� �Է��ϸ� ������ �Ѿ��.)\n");

	while (input_gets[0] != 'q')
	{
		puts(input_gets);

		//gets_s�� ���ڿ��� ũ�⸦ �޾ƾ� �Ѵ�.
		gets_s(input_gets, 10);
	}
}

// ���ڿ� ó�� ���̺귯�� ����
void process_string()
{
	//���ڿ� ũ�� ������ /2�� �ϴµ� char�� �迭�� �״�� ���� ������ ���߿� 2���� ���ľ��ϱ� ����
	const int string_size_01 = (rand()% (STRING_SIZE / 2 - 1) + 2);
	const int string_size_02 = (rand() % (STRING_SIZE / 2 - 1) + 2);
	char string_01[STRING_SIZE];
	char string_02[STRING_SIZE];

	// ������ ���ڿ� ������
	for (int i = 0; i < STRING_SIZE; ++i)
	{
		// �Ʒ� �ּ��� //*���� �������� �Ʒ��ڵ� �ּ�ó��
		// /*���� �������� ���ڵ� �ּ�ó��
		/* 
		// ������ ���� ����
		if (i < string_size_01)
		{
			// �빮�ڴ� �ʳִ´�. �ƽ�Ű �ڵ� ����
			string_01[i] = 'a' + rand() % 26;
			string_02[i] = 'a' + rand() % 26;
		}
		else
		{
			// Ȥ�� ���� �������� NULL�� ä����.
			string_01[i] = '\0';
			string_02[i] = '\0';
		}
		/*/
		// ������ ���� ����
		if(i >= string_size_01 && i >= string_size_02)
		{
			string_01[i] = '\0';
			string_02[i] = '\0';
		}
		else if(i >= string_size_01 || i >= string_size_02)
		{
			if(i >= string_size_01)
			{
				string_01[i] = '\0';
				string_02[i] = 'a' + rand() % 26;
			}
			if(i >= string_size_02)
			{
				string_02[i] = '\0';
				string_01[i] = 'a' + rand() % 26;
			}
		}
		else
		{
			string_01[i] = 'a' + rand() % 26;
			string_02[i] = 'a' + rand() % 26;
		}
		//*/
	}

	printf("1�� ���ڿ��� : %s\n", string_01);
	printf("2�� ���ڿ��� : %s\n", string_02);

	printf("1�� ���ڿ��� ���̴� : %d\n", (int)strlen(string_01));
	printf("2�� ���ڿ��� ���̴� : %d\n", (int)strlen(string_02));

	printf("2���� ���ڿ��� ���������� ���� ��� : ");
	if(strcmp(string_01, string_02) > 0)
	{
		printf("%s�� �� �տ� �ִ�.\n", string_02);
	}
	else if (strcmp(string_01, string_02) < 0)
	{
		printf("%s�� �� �տ� �ִ�.\n", string_01);
	}
	else
	{
		printf("�����ϴ�.\n");
	}

	printf("2�� ���ڿ��� 1�� ���ڿ��� ����.\n");

	strcpy_s(string_01, string_02);
	printf("string_01 : %s\n", string_01);
	printf("string_02 : %s\n", string_02);

	printf("1�� ���ڿ����� 'a'�� ã�� ��� : ");

	char* temp = strchr(string_01, 'a');
	if (temp == NULL)
	{
		printf("����.\n");
	}
	else
	{
		// ���ڿ� 0���ڸ��� 1�� ���� ����.
		printf("%d��°�� �ִ�.\n", (int)(temp - string_01 + 1));
	}
}

// ���ڿ� <-> ���� ����
void string_to_number()
{
	char s1[] = "100 200 300";
	char s2[30];
	int value;

	//���ڿ� s1�� �ִ� ���ڿ��� valuse�� �Է��Ѵ�.
	sscanf_s(s1,"%d",&value);
	printf("%d\n", value);

	//value�� 0�� ��ġ�� �ִ� 100�� s2�� �Է��Ѵ�.
	sprintf_s(s2, "%d", value);
	printf("%s\n",s2);
}

//���ڿ� ������ �����Ҵ��� ���� ���� å�� 494��