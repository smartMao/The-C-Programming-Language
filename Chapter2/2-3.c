/*************************************************************************
	
  > File Name: 2-3.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Fri 21 Oct 2016 11:20:24 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int htoi(char s[]);
int map(char apl);

main()
{
	char s[] = "9A48C"; // 16
	int result;

	result = htoi(s);
	printf("%s to ten = %d \n", s, result);
}


int htoi(char s[])
{
	int i;
	int count;
	int j;
	int added;
	int total;
	long int ten;
	 
	i = 0;
	ten = 0;
	total = 0;
	added = 16;
	count = strlen(s);

	while(s[i] != '\0'){
		//printf("%d \n", map(s[i]));
		//printf("count: %d \n", count);

		for(j=count; j>2; j--){
			added =  added * 16;
		}
		
		if(count == 1){
			added = 1;
		}

		//printf("added: %d \n", added);

		total = map(s[i]) * added;

		//printf("total = %d * %d = %d \n", map(s[i]), added, total);
		
		ten = ten + total;

		total = 0;
		added = 16;
		--count;
		++i;
	}
	return ten;
}


int map(char apl)
{
	switch(apl)
	{
		case 'A':
			return 10;
			break;
		case 'B':
			return 11;
			break;
		case 'C':
			return 12;
			break;
		case 'D':
			return 13;
			break;
		case 'E':
			return 14;
			break;
		case 'F':
			return 15;
			break;
		default:
			if(apl >= 48 && apl <= 57){
				switch(apl)
				{
					case 48:
						return 0;
						break;
					case 49:
						return 1;
						break;
					case 50:
						return 2;
						break;
					case 51:
						return 3;
						break;
					case 52:
						return 4;
						break;
					case 53:
						return 5;
						break;
					case 54:
						return 6;
						break;
					case 55:
						return 7;
						break;
					case 56:
						return 8;
						break;
					case 57:
						return 9;
						break;
				}
			}else{
				printf("参数错误\n");
			}
	}
}

