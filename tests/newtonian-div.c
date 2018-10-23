#include <arbitraire/arbitraire.h>

int main(int argc, char *argv[])
{
	if (argc < 5)
	{
		printf("needs 4 args: bignum bignum base scale\n");
		return 0;
	}

	int base = atoll(argv[3]);
	int scale =  atoll(argv[4]);
	fxdpnt *a = NULL;
	fxdpnt *b = NULL;
	fxdpnt *c = NULL;
	arb_expand(c, 1);
	a = arb_str2fxdpnt(argv[1]);
	b = arb_str2fxdpnt(argv[2]);
	c = arb_newtonian_div(a, b, c, base, scale);
	arb_print(c);
	return 0;
}
 
