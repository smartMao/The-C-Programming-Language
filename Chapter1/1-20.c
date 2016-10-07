#include<stdio.h>
#include<string.h>
#define MAXLINE 1000

/*
 * name : detab
 */

int get_line(char s[]);

main()
{
    int length;
    char line[MAXLINE];
    
    while( (length = get_line(line)) > 0){
        printf("%s\n", line);
    }
}


int get_line(char s[])
{
    int i, n;
    char c;

    for(i = 0, n = 0; (c = getchar()) != EOF && c != '\n'; ++i){
        if(c == '\t'){
            s[n++] = ' '; // 因为字符数组的每个变量是只能一个字节(8bit), 所以只能把空格分开存放
            s[n++] = ' ';
            s[n++] = ' ';
            s[n++] = ' ';
            s[n++] = ' ';
            s[n++] = ' ';
        }else{
            s[n++] = c;
        }
    }
    s[n++] = '\0'; // 将 s 变量设为空
    return n;
}
