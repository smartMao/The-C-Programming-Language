#include<stdio.h>

main()
{
	unsigned x = 7;
	int count = 0;

	for(count = 0; x != 0; x &= x-1)
	{
		++count;
	}
	printf("%d \n", count);
}
