#include "10_extern_1.h"

unsigned random_i();
double random_f();
extern unsigned call_count;	// extern으로 외부파일에서 접근이 가능해졌다.

// static 예제와 동일하게 extern을 다루기 위해 구성이 바뀐 예제이다.
void play_10()
{
	printf("extern 관련 예제\n\n");

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

	printf("\n함수가 호출된 횟수 = %d \n", call_count);
}