#include "10_extern_1.h"

unsigned random_i();
double random_f();
extern unsigned call_count;	// extern���� �ܺ����Ͽ��� ������ ����������.

// static ������ �����ϰ� extern�� �ٷ�� ���� ������ �ٲ� �����̴�.
void play_10()
{
	printf("extern ���� ����\n\n");

	register int i;

	for (i = 0; i < 10; ++i)
	{
		printf("%d ", random_i());
	}

	printf("\n");

	for (i = 0; i < 10; ++i)
	{
		printf("%f ", random_f());
	}

	printf("\n�Լ��� ȣ��� Ƚ�� = %d \n", call_count);
}