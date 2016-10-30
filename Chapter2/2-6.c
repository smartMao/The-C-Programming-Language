/*************************************************************************
	> File Name: 2-6.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Sun 30 Oct 2016 09:51:38 AM CST
 ************************************************************************/
#include<stdio.h>
#include<ctype.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

main()
{
	unsigned int x = 245;
	unsigned int y = 31;

	printf("%d\n", setbits(x, 7, 4, y));
}


unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	return x & ~(~(~0 << n) << (p + 1 -n)) | 
		 ( y & ~(~0 << n)) << (p + 1 -n);
}

