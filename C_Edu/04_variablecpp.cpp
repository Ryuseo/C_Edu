#include "04_variable.h"

void play_04()
{
	int num;
	int play = 1;

	printf("printf() ���� ����\n\n");

	while (play)
	{
		printf("1. sizeof()�� �� �ڷ����� ������ ũ�� ���.\n");
		printf("2. �� �ڷ����� ���� �ִ�, �ּڰ� ���.\n");
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
			use_sizeof();
			break;
		case 2:
			output_data_type_max_n_min();
			break;
		default:
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}

//�� �ڷ����� ����,����� ũ�� ��
void use_sizeof()
{
	bool play = true;			// ������ �ݺ����� ���� ���ϴ� ����
	int input_num;				// ��� �� ������� �Է¹޴� ����

	while (play)
	{
		printf("0. ����\n");
		printf("1. char�� ũ��\n");
		printf("2. bool�� ũ��\n");
		printf("3. short�� ũ��\n");
		printf("4. int�� ũ��\n");
		printf("5. long�� ũ��\n");
		printf("6. long long�� ũ��\n");
		printf("7. float�� ũ��\n");
		printf("8. double�� ũ��\n");
		printf("9. long double�� ũ��\n");
		printf("10. unsigned int�� ũ��\n");
		printf("11. ���� �Է¹޴¶� ���� �ִ� input_num������ ũ��\n");
		printf("12. 10�� ũ��\n");
		printf("13. Hello World�� ũ��\n");
		printf("14. ���� ����");

		// ���̳� �ڷ����� ���� �Է� �ް� �;����� �Է� �޴� �κи� ��������� ũ�� ������ �ٲ��� �ʾƼ� �׳� int�� ����
		scanf_s("%d", &input_num);

		system("cls");

		switch (input_num)
		{
		case 0:
			printf("����.\n");
			play = false;
			break;
		case 1:
			printf("char�� ũ��� %d", sizeof(char));
			break;
		case 2:
			printf("bool�� ũ��� %d", sizeof(bool));
			break;
		case 3:
			printf("short�� ũ��� %d", sizeof(short));
			break;
		case 4:
			printf("int�� ũ��� %d", sizeof(int));
			break;
		case 5:
			printf("long�� ũ��� %d", sizeof(long));
			break;
		case 6:
			printf("long long�� ũ��� %d", sizeof(long long));
			break;
		case 7:
			printf("float�� ũ��� %d", sizeof(float));
			break;
		case 8:
			printf("double�� ũ��� %d", sizeof(double));
			break;
		case 9:
			printf("long double�� ũ��� %d", sizeof(long double));
			break;
		case 10:
			printf("unsigned int�� ũ��� %d", sizeof(unsigned int));
			break;
		case 11:
			printf("input_num�� ũ��� %d", sizeof(input_num));
			break;
		case 12:
			printf("10�� ũ��� %d", sizeof(10));
			break;
		case 13:
			printf("Hello World�� ũ��� %d", sizeof("Hello World"));
			break;
		case 14:
			printf("���� ���");
			printf("char�� ũ��� %d", sizeof(char));
			printf("bool�� ũ��� %d", sizeof(bool));
			printf("short�� ũ��� %d", sizeof(short));
			printf("int�� ũ��� %d", sizeof(int));
			printf("long�� ũ��� %d", sizeof(long));
			printf("long long�� ũ��� %d", sizeof(long long));
			printf("float�� ũ��� %d", sizeof(float));
			printf("double�� ũ��� %d", sizeof(double));
			printf("long double�� ũ��� %d", sizeof(long double));
			printf("unsigned int�� ũ��� %d", sizeof(unsigned int));
			printf("input_num�� ũ��� %d", sizeof(input_num));
			printf("10�� ũ��� %d", sizeof(10));
			printf("Hello World�� ũ��� %d", sizeof("Hello World"));
			break;
		default:
			printf("�߸��� �� �Է�. �ٽ� �Է�. : ");
			break;
		}
		printf("\n\n");
	}
}

//�� �ڷ����� �ִ� �ּڰ� ���
void output_data_type_max_n_min()
{
	bool play = true;			// ������ �ݺ����� ���� ���ϴ� ����
	int input_num;				// ��� �� ������� �Է¹޴� ����

	while (play)
	{
		printf("0. ����\n");
		printf("1. char�� �ּڰ�, �ִ�\n");
		printf("2. bool�� �ּڰ�, �ִ�\n");
		printf("3. short�� �ּڰ�, �ִ�\n");
		printf("4. int�� �ּڰ�, �ִ�\n");
		printf("5. long�� �ּڰ�, �ִ�\n");
		printf("6. long long�� �ּڰ�, �ִ�\n");
		printf("7. float�� �ּڰ�, �ִ�\n");
		printf("8. double�� �ּڰ�, �ִ�\n");
		printf("9. long double�� �ּڰ�, �ִ�\n");
		printf("10. unsigned char�� �ּڰ�, �ִ�\n");
		printf("11. unsigned short�� �ּڰ�, �ִ�\n");
		printf("12. unsigned int�� �ּڰ�, �ִ�\n");
		printf("13. unsigned long�� �ּڰ�, �ִ�\n");
		printf("14. unsigned long long�� �ּڰ�, �ִ�\n");
		printf("15. ���� ����\n");
		printf("���ϴ� ������ ��ȣ�� �Է��ϼ���. : ");

		scanf_s("%d", &input_num);

		system("cls");

		if (input_num == 0)
		{
			printf("����.\n");
			play = false;
		}
		else if (input_num == 1)
		{
			char max_min[2] = { CHAR_MAX, CHAR_MIN };
			printf("char�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 2)
		{
			bool max_min[2] = { 1,0 };	//�������� char���� 1����Ʈ ������ ���� �־����ɷ� ��������� ������ �ȵȴ�.
										//������ bool�� true, false�� ���� �뵵�� �̻��� �� ���� ����.
			printf("bool�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 3)
		{
			short max_min[2] = { SHRT_MAX , SHRT_MIN };
			printf("short�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 4)
		{
			int max_min[2] = { INT_MAX, INT_MIN };
			printf("int�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 5)
		{
			long max_min[2] = { LONG_MAX, LONG_MIN };
			printf("long�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 6)
		{
			//���� �̻��ϰ� ����
			//long long max_min[2] = { LLONG_MAX , LLONG_MIN };
			
			long long max_min[2];			//ã�� �� ����. ���� �ִ� �ڰ� �ּ�
			long long n_num = -1, p_num = -1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
			bool loop = true;			//�ݺ��� ���


			while (loop)
			{
				++n_num;
				if (n_num < p_num)	// �����÷ο찡 ���� n_num�� p_num���� �۾���
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			loop = true;	//������ ���� �ʱ�ȭ
			n_num = 1;
			p_num = 1;

			while (loop)
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[1] = p_num;
				}
				p_num = n_num;
			}
			printf("long long�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 7)
		{
			float max_min[2];			//ã�� �� ����. ���� �ִ� �ڰ� �ּ�
			float n_num = -1, p_num = -1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
			bool loop = true;			//�ݺ��� ���


			while (loop)
			{
				++n_num;
				if (n_num < p_num)	// �����÷ο찡 ���� n_num�� p_num���� �۾���
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			loop = true;	//������ ���� �ʱ�ȭ
			n_num = 1;
			p_num = 1;

			while (loop)
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[1] = p_num;
				}
				p_num = n_num;
			}

			printf("float�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 8)
		{
			double max_min[2];			//ã�� �� ����. ���� �ִ� �ڰ� �ּ�
			double n_num = -1, p_num = -1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
			bool loop = true;			//�ݺ��� ���


			while (loop)
			{
				++n_num;
				if (n_num < p_num)	// �����÷ο찡 ���� n_num�� p_num���� �۾���
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			loop = true;	//������ ���� �ʱ�ȭ
			n_num = 1;
			p_num = 1;

			while (loop)
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[1] = p_num;
				}
				p_num = n_num;
			}

			printf("double�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 9)
		{
			long double max_min[2];			//ã�� �� ����. ���� �ִ� �ڰ� �ּ�
			long double n_num = -1, p_num = -1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
			bool loop = true;			//�ݺ��� ���


			while (loop)
			{
				++n_num;
				if (n_num < p_num)	// �����÷ο찡 ���� n_num�� p_num���� �۾���
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			loop = true;	//������ ���� �ʱ�ȭ
			n_num = 1;
			p_num = 1;

			while (loop)			//����÷ο� ���� n_num�� p_num���� Ŀ��
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[1] = p_num;
				}
				p_num = n_num;
			}

			printf("long double�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 10)
		{
			unsigned char max_min[2] = { UCHAR_MAX, 0 };

			unsigned char n_num = 1, p_num = 1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
			bool loop = true;					//�ݺ��� ���


			while (loop)
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			printf("unsigned char�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 11)
		{
			unsigned short max_min[2] = { USHRT_MAX, 0 };

			unsigned short n_num = 1, p_num = 1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
			bool loop = true;					//�ݺ��� ���


			while (loop)
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			printf("unsigned char�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 12)
		{
			unsigned int max_min[2] = { USHRT_MAX, 0 };

			unsigned int n_num = 1, p_num = 1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
			bool loop = true;					//�ݺ��� ���


			while (loop)
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			printf("unsigned char�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 13)
		{
			unsigned long max_min[2] = { USHRT_MAX, 0 };

			unsigned long n_num = 1, p_num = 1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
			bool loop = true;					//�ݺ��� ���


			while (loop)
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			printf("unsigned char�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 14)
		{
			unsigned long long max_min[2] = { USHRT_MAX, 0 };

			unsigned long long n_num = 1, p_num = 1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
			bool loop = true;					//�ݺ��� ���


			while (loop)
			{
				--n_num;
				if (n_num > p_num)
				{
					loop = false;
					max_min[0] = p_num;
				}
				p_num = n_num;
			}

			printf("unsigned char�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
		}
		else if (input_num == 15)
		{
			printf("���� ���\n");

			{
				char max_min[2] = { CHAR_MAX, CHAR_MIN };
				printf("char�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}	// char
			{
				bool max_min[2] = { 1,0 };	//�������� char���� 1����Ʈ ������ ���� �־����ɷ� ��������� ������ �ȵȴ�.
											//������ bool�� true, false�� ���� �뵵�� �̻��� �� ���� ����.
				printf("bool�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}	//bool
			{
				short max_min[2] = { SHRT_MAX , SHRT_MIN };
				printf("short�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}	//short
			{
				int max_min[2] = { INT_MAX, INT_MIN };
				printf("int�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}	//int
			{
				long max_min[2] = { LONG_MAX, LONG_MIN };
				printf("long�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}	//long
			{
				//���� �̻��ϰ� ����
				//long long max_min[2] = { LLONG_MAX , LLONG_MIN };

				long long max_min[2];			//ã�� �� ����. ���� �ִ� �ڰ� �ּ�
				long long n_num = -1, p_num = -1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
				bool loop = true;			//�ݺ��� ���


				while (loop)
				{
					++n_num;
					if (n_num < p_num)	// �����÷ο찡 ���� n_num�� p_num���� �۾���
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				loop = true;	//������ ���� �ʱ�ȭ
				n_num = 1;
				p_num = 1;

				while (loop)
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[1] = p_num;
					}
					p_num = n_num;
				}
				printf("long long�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}	//long long
			{
				float max_min[2];			//ã�� �� ����. ���� �ִ� �ڰ� �ּ�
				float n_num = -1, p_num = -1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
				bool loop = true;			//�ݺ��� ���


				while (loop)
				{
					++n_num;
					if (n_num < p_num)	// �����÷ο찡 ���� n_num�� p_num���� �۾���
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				loop = true;	//������ ���� �ʱ�ȭ
				n_num = 1;
				p_num = 1;

				while (loop)
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[1] = p_num;
					}
					p_num = n_num;
				}

				printf("float�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}	//float
			{
				double max_min[2];			//ã�� �� ����. ���� �ִ� �ڰ� �ּ�
				double n_num = -1, p_num = -1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
				bool loop = true;			//�ݺ��� ���


				while (loop)
				{
					++n_num;
					if (n_num < p_num)	// �����÷ο찡 ���� n_num�� p_num���� �۾���
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				loop = true;	//������ ���� �ʱ�ȭ
				n_num = 1;
				p_num = 1;

				while (loop)
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[1] = p_num;
					}
					p_num = n_num;
				}

				printf("double�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}	//double
			{
				long double max_min[2];			//ã�� �� ����. ���� �ִ� �ڰ� �ּ�
				long double n_num = -1, p_num = -1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
				bool loop = true;			//�ݺ��� ���


				while (loop)
				{
					++n_num;
					if (n_num < p_num)	// �����÷ο찡 ���� n_num�� p_num���� �۾���
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				loop = true;	//������ ���� �ʱ�ȭ
				n_num = 1;
				p_num = 1;

				while (loop)			//����÷ο� ���� n_num�� p_num���� Ŀ��
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[1] = p_num;
					}
					p_num = n_num;
				}

				printf("long double�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}	//long double
			{
				unsigned char max_min[2] = { UCHAR_MAX, 0 };

				unsigned char n_num = 1, p_num = 1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
				bool loop = true;					//�ݺ��� ���


				while (loop)
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				printf("unsigned char�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}	//unsigned char
			{
				unsigned short max_min[2] = { USHRT_MAX, 0 };

				unsigned short n_num = 1, p_num = 1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
				bool loop = true;					//�ݺ��� ���


				while (loop)
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				printf("unsigned char�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}	//unsigned short
			{
				unsigned int max_min[2] = { USHRT_MAX, 0 };

				unsigned int n_num = 1, p_num = 1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
				bool loop = true;					//�ݺ��� ���


				while (loop)
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				printf("unsigned char�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}	//unsigned int
			{
				unsigned long max_min[2] = { USHRT_MAX, 0 };

				unsigned long n_num = 1, p_num = 1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
				bool loop = true;					//�ݺ��� ���


				while (loop)
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				printf("unsigned char�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}	//unsigned long
			{
				unsigned long long max_min[2] = { USHRT_MAX, 0 };

				unsigned long long n_num = 1, p_num = 1;	//�ִ񰪰� �ּڰ��� ���ϱ� ���� ����
				bool loop = true;					//�ݺ��� ���


				while (loop)
				{
					--n_num;
					if (n_num > p_num)
					{
						loop = false;
						max_min[0] = p_num;
					}
					p_num = n_num;
				}

				printf("unsigned char�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}	//unsigned long long
		}
		else
		{
			printf("�߸��� �� �Է�. �ٽ� �Է�. : ");
		}
		printf("\n\n");
	}
}