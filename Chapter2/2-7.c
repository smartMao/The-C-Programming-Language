#include<stdio.h>
#include<ctype.h>

unsigned invert(unsigned x, int p, int n);

main()
{
	unsigned int x = 245;

	printf("%d\n", invert(x, 7, 4));
}


unsigned invert(unsigned x, int p, int n)
{
	return x ^ (~(~0 << n) << (p +1 -n));
}
