#include "04_variable.h"
#define TAX_RATE 0.2

void play_04()
{
	int num;
	int play = 1;

	printf("���� ���� ����\n\n");

	while (play)
	{
		printf("1. sizeof()�� �� �ڷ����� ������ ũ�� ���.\n");
		printf("2. �� �ڷ����� ���� �ִ�, �ּڰ� ���.\n");
		printf("3. ��� ����\n");
		printf("4. �ƽ�Ű�ڵ� ����\n");
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
		case 3:
			constant();
			break;
		case 4:
			Ascii_n_number();
			break;
		default:
			printf("���� ����. �ٽ� �Է�");
			break;
		}
		printf("\n\n");
	}
}

// �� �ڷ����� ����,����� ũ�� ��
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

// �� �ڷ����� �ִ� �ּڰ� ���
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
		printf("7. unsigned char�� �ּڰ�, �ִ�\n");
		printf("8. unsigned short�� �ּڰ�, �ִ�\n");
		printf("9. unsigned int�� �ּڰ�, �ִ�\n");
		printf("10. unsigned long�� �ּڰ�, �ִ�\n");
		printf("11. unsigned long long�� �ּڰ�, �ִ�\n");
		printf("12. ���� ����\n");
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
			bool max_min[2] = { 1,0 };	// �������� char���� 1����Ʈ ������ ���� �־����ɷ� ��������� ������ �ȵȴ�.
										// ������ bool�� true, false�� ���� �뵵�� �̻��� �� ���� ����.
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
			long long max_min[2] = { LLONG_MAX , LLONG_MIN };
			printf("long long�� �ִ񰪴� %lld, �ּڰ��� %lld\n", max_min[0], max_min[1]);	// long long�� %d�� ����ϸ� ����ε� ���� ������ ���� �� �ִ�.
		}
		else if (input_num == 7)
		{
			unsigned char max_min[2] = { USHRT_MAX, 0 };
			unsigned char n_num = 1, p_num = 1;	// �ִ񰪰� �ּڰ��� ���ϱ� ���� ����
			unsigned char n_plus = 1;
			unsigned char p_plus = 0;
			bool loop = true;					// �ݺ��� ���

			// ����Լ��� �Ϸ��ٰ� �׳� �ݺ������� ��. ���п� �ڵ尡 �������� �����. ������ ���� ����Լ��� �ٲܱ�?
			// long long ����� �̻��ϰ� �ż� �˾ƺ��� %d�� �ƴ� %lld�� ����ؾ��ߴ� ����;;;
			while (loop)
			{

				n_num -= n_plus;
				if (n_num < p_num && n_plus > p_plus)
				{
					p_plus = n_plus;
					n_plus *= 10;
					if (n_plus < 0)
					{
						n_plus = p_plus;
					}
				}
				else if (n_num > p_num)			// ����÷ο찡 ���� n_num�� p_num���� Ŀ��
				{
					if (n_plus == 1)
					{
						loop = false;
						max_min[1] = p_num;
					}
					else
					{
						n_num = p_num;
						p_plus = n_plus;
						n_plus /= 10;
					}
				}
				p_num = n_num;
			}

			printf("unsigned char�� �ִ񰪴� %u, �ּڰ��� %u\n", max_min[0], max_min[1]);	// unsigned�� %u�� ���
		}
		else if (input_num == 8)
		{
			unsigned short max_min[2] = { USHRT_MAX, 0 };
			unsigned short n_num = 1, p_num = 1;	// �ִ񰪰� �ּڰ��� ���ϱ� ���� ����
			unsigned short n_plus = 1;
			unsigned short p_plus = 0;
			bool loop = true;				// �ݺ��� ���

			while (loop)
			{

				n_num -= n_plus;
				if (n_num < p_num && n_plus > p_plus)
				{
					p_plus = n_plus;
					n_plus *= 10;
					if (n_plus < 0)
					{
						n_plus = p_plus;
					}
				}
				else if (n_num > p_num)	// ����÷ο찡 ���� n_num�� p_num���� Ŀ��
				{
					if (n_plus == 1)
					{
						loop = false;
						max_min[1] = p_num;
					}
					else
					{
						n_num = p_num;
						p_plus = n_plus;
						n_plus /= 10;
					}
				}
				p_num = n_num;
			}
			printf("unsigned short�� �ִ񰪴� %u, �ּڰ��� %u\n", max_min[0], max_min[1]);
		}
		else if (input_num == 9)
		{
			unsigned int max_min[2] = { USHRT_MAX, 0 };
			unsigned int n_num = 1, p_num = 1;	// �ִ񰪰� �ּڰ��� ���ϱ� ���� ����
			unsigned int n_plus = 1;
			unsigned int p_plus = 0;
			bool loop = true;				// �ݺ��� ���

			while (loop)
			{

				n_num -= n_plus;
				if (n_num < p_num && n_plus > p_plus)
				{
					p_plus = n_plus;
					n_plus *= 10;
					if (n_plus < 0)
					{
						n_plus = p_plus;
					}
				}
				else if (n_num > p_num)	// ����÷ο찡 ���� n_num�� p_num���� Ŀ��
				{
					if (n_plus == 1)
					{
						loop = false;
						max_min[1] = p_num;
					}
					else
					{
						n_num = p_num;
						p_plus = n_plus;
						n_plus /= 10;
					}
				}
				p_num = n_num;
			}
			printf("unsigned int�� �ִ񰪴� %u, �ּڰ��� %u\n", max_min[0], max_min[1]);
		}
		else if (input_num == 10)
		{
			unsigned long max_min[2] = { USHRT_MAX, 0 };
			unsigned long n_num = 1, p_num = 1;	// �ִ񰪰� �ּڰ��� ���ϱ� ���� ����
			unsigned long n_plus = 1;
			unsigned long p_plus = 0;
			bool loop = true;				// �ݺ��� ���

			while (loop)
			{

				n_num -= n_plus;
				if (n_num < p_num && n_plus > p_plus)
				{
					p_plus = n_plus;
					n_plus *= 10;
					if (n_plus < 0)
					{
						n_plus = p_plus;
					}
				}
				else if (n_num > p_num)	// ����÷ο찡 ���� n_num�� p_num���� Ŀ��
				{
					if (n_plus == 1)
					{
						loop = false;
						max_min[1] = p_num;
					}
					else
					{
						n_num = p_num;
						p_plus = n_plus;
						n_plus /= 10;
					}
				}
				p_num = n_num;
			}
			printf("unsigned long�� �ִ񰪴� %u, �ּڰ��� %u\n", max_min[0], max_min[1]);
		}
		else if (input_num == 11)
		{
			unsigned long long max_min[2] = { USHRT_MAX, 0 };
			unsigned long long n_num = 1, p_num = 1;	// �ִ񰪰� �ּڰ��� ���ϱ� ���� ����
			unsigned long long n_plus = 1;
			unsigned long long p_plus = 0;
			bool loop = true;				// �ݺ��� ���

			while (loop)
			{

				n_num -= n_plus;
				if (n_num < p_num && n_plus > p_plus)
				{
					p_plus = n_plus;
					n_plus *= 10;
					if (n_plus < 0)
					{
						n_plus = p_plus;
					}
				}
				else if (n_num > p_num)	// ����÷ο찡 ���� n_num�� p_num���� Ŀ��
				{
					if (n_plus == 1)
					{
						loop = false;
						max_min[1] = p_num;
					}
					else
					{
						n_num = p_num;
						p_plus = n_plus;
						n_plus /= 10;
					}
				}
				p_num = n_num;
			}
			printf("unsigned long long�� �ִ񰪴� %llu, �ּڰ��� %llu\n", max_min[0], max_min[1]);	// unsigned long long�� ���� ��û Ŀ�� %llu�� ���
		}
		else if (input_num == 12)
		{
			{
				char max_min[2] = { CHAR_MAX, CHAR_MIN };
				printf("char�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}
			{
				bool max_min[2] = { 1,0 };	// �������� char���� 1����Ʈ ������ ���� �־����ɷ� ��������� ������ �ȵȴ�.
											// ������ bool�� true, false�� ���� �뵵�� �̻��� �� ���� ����.
				printf("bool�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}
			{
				short max_min[2] = { SHRT_MAX , SHRT_MIN };
				printf("short�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}
			{
				int max_min[2] = { INT_MAX, INT_MIN };
				printf("int�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}
			{
				long max_min[2] = { LONG_MAX, LONG_MIN };
				printf("long�� �ִ񰪴� %d, �ּڰ��� %d\n", max_min[0], max_min[1]);
			}
			{
				long long max_min[2] = { LLONG_MAX , LLONG_MIN };
				printf("long long�� �ִ񰪴� %lld, �ּڰ��� %lld\n", max_min[0], max_min[1]);
			}
			{
				unsigned char max_min[2] = { USHRT_MAX, 0 };
				unsigned char n_num = 1, p_num = 1;	// �ִ񰪰� �ּڰ��� ���ϱ� ���� ����
				unsigned char n_plus = 1;
				unsigned char p_plus = 0;
				bool loop = true;				// �ݺ��� ���

				while (loop)
				{

					n_num -= n_plus;
					if (n_num < p_num && n_plus > p_plus)
					{
						p_plus = n_plus;
						n_plus *= 10;
						if (n_plus < 0)
						{
							n_plus = p_plus;
						}
					}
					else if (n_num > p_num)	// ����÷ο찡 ���� n_num�� p_num���� Ŀ��
					{
						if (n_plus == 1)
						{
							loop = false;
							max_min[1] = p_num;
						}
						else
						{
							n_num = p_num;
							p_plus = n_plus;
							n_plus /= 10;
						}
					}
					p_num = n_num;
				}

				printf("unsigned char�� �ִ񰪴� %u, �ּڰ��� %u\n", max_min[0], max_min[1]);
			}
			{
				unsigned short max_min[2] = { USHRT_MAX, 0 };
				unsigned short n_num = 1, p_num = 1;	// �ִ񰪰� �ּڰ��� ���ϱ� ���� ����
				unsigned short n_plus = 1;
				unsigned short p_plus = 0;
				bool loop = true;				// �ݺ��� ���

				while (loop)
				{

					n_num -= n_plus;
					if (n_num < p_num && n_plus > p_plus)
					{
						p_plus = n_plus;
						n_plus *= 10;
						if (n_plus < 0)
						{
							n_plus = p_plus;
						}
					}
					else if (n_num > p_num)	// ����÷ο찡 ���� n_num�� p_num���� Ŀ��
					{
						if (n_plus == 1)
						{
							loop = false;
							max_min[1] = p_num;
						}
						else
						{
							n_num = p_num;
							p_plus = n_plus;
							n_plus /= 10;
						}
					}
					p_num = n_num;
				}
				printf("unsigned short�� �ִ񰪴� %u, �ּڰ��� %u\n", max_min[0], max_min[1]);
			}
			{
				unsigned int max_min[2] = { USHRT_MAX, 0 };
				unsigned int n_num = 1, p_num = 1;	// �ִ񰪰� �ּڰ��� ���ϱ� ���� ����
				unsigned int n_plus = 1;
				unsigned int p_plus = 0;
				bool loop = true;				// �ݺ��� ���

				while (loop)
				{

					n_num -= n_plus;
					if (n_num < p_num && n_plus > p_plus)
					{
						p_plus = n_plus;
						n_plus *= 10;
						if (n_plus < 0)
						{
							n_plus = p_plus;
						}
					}
					else if (n_num > p_num)	// ����÷ο찡 ���� n_num�� p_num���� Ŀ��
					{
						if (n_plus == 1)
						{
							loop = false;
							max_min[1] = p_num;
						}
						else
						{
							n_num = p_num;
							p_plus = n_plus;
							n_plus /= 10;
						}
					}
					p_num = n_num;
				}
				printf("unsigned int�� �ִ񰪴� %u, �ּڰ��� %u\n", max_min[0], max_min[1]);
			}
			{
				unsigned long max_min[2] = { USHRT_MAX, 0 };
				unsigned long n_num = 1, p_num = 1;	// �ִ񰪰� �ּڰ��� ���ϱ� ���� ����
				unsigned long n_plus = 1;
				unsigned long p_plus = 0;
				bool loop = true;				// �ݺ��� ���

				while (loop)
				{

					n_num -= n_plus;
					if (n_num < p_num && n_plus > p_plus)
					{
						p_plus = n_plus;
						n_plus *= 10;
						if (n_plus < 0)
						{
							n_plus = p_plus;
						}
					}
					else if (n_num > p_num)	// ����÷ο찡 ���� n_num�� p_num���� Ŀ��
					{
						if (n_plus == 1)
						{
							loop = false;
							max_min[1] = p_num;
						}
						else
						{
							n_num = p_num;
							p_plus = n_plus;
							n_plus /= 10;
						}
					}
					p_num = n_num;
				}
				printf("unsigned long�� �ִ񰪴� %u, �ּڰ��� %u\n", max_min[0], max_min[1]);
			}
			{
				unsigned long long max_min[2] = { ULLONG_MAX, 0 };
				unsigned long long n_num = 1, p_num = 1;	// �ִ񰪰� �ּڰ��� ���ϱ� ���� ����
				unsigned long long n_plus = 1;
				unsigned long long p_plus = 0;
				bool loop = true;				// �ݺ��� ���

				while (loop)
				{

					n_num -= n_plus;
					if (n_num < p_num && n_plus > p_plus)
					{
						p_plus = n_plus;
						n_plus *= 10;
						if (n_plus < 0)
						{
							n_plus = p_plus;
						}
					}
					else if (n_num > p_num)	// ����÷ο찡 ���� n_num�� p_num���� Ŀ��
					{
						if (n_plus == 1)
						{
							loop = false;
							max_min[1] = p_num;
						}
						else
						{
							n_num = p_num;
							p_plus = n_plus;
							n_plus /= 10;
						}
					}
					p_num = n_num;
				}
				printf("unsigned long long�� �ִ񰪴� %llu, �ּڰ��� %llu\n", max_min[0], max_min[1]);
			}
		}
		else
		{
			printf("�߸��� �� �Է�. �ٽ� �Է�. : ");
		}
		printf("\n\n");
	}
}

// ���
void constant()
{
	const int months = 12;								// const ���. ���� �ٲ� �� ����.
	int m_salaray, y_salary;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &m_salaray);

	y_salary = months * m_salaray;
	printf("������ %d�Դϴ�.\n", y_salary);
	printf("������ %f�Դϴ�.\n", y_salary * TAX_RATE);	// ��ó���� ���. �� ���� �ִ�.
}

// �ƽ�Ű�ڵ�� �������
void Ascii_n_number()
{
	printf("���ڿ� �����ϴ� �ƽ�Ű �ڵ� ���\n");
	for (char i = 0; i >= 0; ++i)				// 127��° �ƽ�Ű �ڵ带 ����ϱ� ���� ���. i < 128 �̳� i <= 127�ϸ� �����÷ο� ���鼭 ���� ���� ����.
	{											// i++�̸� ���� ������? ������ �ȉ��.
		printf("%d : '%c'\n", i, i);
	}
}