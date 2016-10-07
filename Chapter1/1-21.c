#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[]);


main()
{
	char line[MAXLINE];

	while(get_line(line) > 0){
		printf("%s\n", line);
	}
}


int get_line(char line[])
{
	int i, n;
	char c;

	for(i=0, n=0; (c = getchar()) != EOF && c != '\n'; ++i){
		line[n++] = c;
	}
	line[n] = '\0';
}
