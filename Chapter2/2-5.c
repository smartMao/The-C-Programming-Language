/*************************************************************************
	> File Name: 2-5.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Sun 23 Oct 2016 02:47:33 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int any(char s1[], char s2[]);

main()
{
	char str1[] = "BTW";
	char str2[] = "CTS";

	printf("第一次出现的位置是： %d \n", any(str1, str2));
}


int any(char str1[], char str2[])
{
	int i = 0;
	int j = 0;
	int count = 0;
	int k = 0;
	
	while(str1[i] != '\0'){
		while(str2[j] != '\0'){
			if(str1[i] == str2[j]){
				return i+1; // position
			}
			j++;
		}
		j = 0;
		i++;
	}
	return -1;
}
