main()
{
	char x[20] = "azzzz\0";
	char y[6] = "bzzzz\0";
	istrcat(x, y);
	printf("x = %s \n ", x);
}

void istrcat(char *x, char *y)
{
	while (*x) 
		x++;
	while (*x++ = *y++) 
		;
}
