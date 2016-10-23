/*************************************************************************
	> File Name: 2.4.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Sun 23 Oct 2016 02:47:33 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void squeeze(char s1[], char s2[]);

main()
{
	char str1[] = "STW";
	char str1_copy[] = "STW";
	char str2[] = "CTS";
	char new[] = "           ";

	squeeze(str1, str2);
	printf("%s squeeze %s = %s \n ", str1_copy, str2, str1);
}


void squeeze(char str1[], char str2[])
{
	int i = 0;
	int j = 0;
	
	while(str1[i] != '\0'){
		while(str2[j] != '\0'){
			if(str1[i] == str2[j]){
				str1[i] = ' ';
			}
			j++;
		}
		j = 0;
		i++;
	}
	//return str1;
}
