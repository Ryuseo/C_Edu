#define SEED	17
#define MULT	25173
#define INC		13849
#define MOD		65536

unsigned int call_count = 0;	// extern_1의 extern unsigned call_count;에서 extern이 없었다면 중복 선언. 이 변수와 extern 둘다 없다면 선언되지 않은 식별자 오류 난다.
static unsigned seed = SEED;	// static이 안붙어 있으면 자동으로 extern이라는 말이 있던데 아닌거 같다.

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