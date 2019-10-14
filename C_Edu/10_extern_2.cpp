#define SEED	17
#define MULT	25173
#define INC		13849
#define MOD		65536

unsigned int call_count = 0;	// extern_1�� extern unsigned call_count;���� extern�� �����ٸ� �ߺ� ����. �� ������ extern �Ѵ� ���ٸ� ������� ���� �ĺ��� ���� ����.
static unsigned seed = SEED;	// static�� �Ⱥپ� ������ �ڵ����� extern�̶�� ���� �ִ��� �ƴѰ� ����.

unsigned random_i()
{
	seed = (MULT * seed + INC) % MOD;
	call_count++;

	return seed;
}

double random_f()
{
	seed = (MULT * seed + INC) % MOD;
	call_count++;

	return seed / (double)MOD;
}