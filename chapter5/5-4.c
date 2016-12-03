#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void istrcat(char *x, char *y);
void istrncpy(char *x, char *y, int n);

main()
{
	char x[10] = {'1', 'z', 'a', 'b', '\0'};
	char y[5] = "buio";
	int result = 0;;
	istrncpy(x, y, 2);
	printf("x = %s \n", x); // 1zabbu
}

void istrncpy(char *x, char *y, int n)
{
	//char *tmp = (int*) malloc(n * sizeof(int));
	int count = sizeof(char) * 1;
	char *tmp = (void*) calloc(n, sizeof(char));

	int i = 0;
	while (i < n) {
		tmp[i] = *y++;
		i++;
	}
	tmp[i] = '\0';

	istrcat(x, tmp);
}

void istrcat(char *x, char *y)
{
	while (*x) 
		x++;
	while (*x++ = *y++) 
		;
}

