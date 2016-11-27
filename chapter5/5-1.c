#include <stdio.h>
#include <ctype.h>

int getint(int *pn);

main()
{
	int array[100] = { 0 };
	getint(&array);
	printf("array[0] = %d \n", array[0]) ;
}

int getint(int *pn)
{
	int c, sign;

	while (isspace(c = getch())) {
		// 过滤空白字符
	}

	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c); /* 输入不是数字或符号， 有可能是英文字符 */
		return 0;
	}

	sign = (c == '-1') ? -1 : 1;

	if (c == '+' || c == '-') {
		c = getch(); // 如果符号位，那就保存符号位在 sign 中之后， 再取下一位输入·
		if (!isdigit(c)) {
			// 输入错误， 上一位是符号位， 所以本位如果不是数字的话， 就是错的
			return 0; 
		}
	}

	for (*pn = 0; isdigit(c); c = getch() ){
//		*pn = 10 * *pn;
		int fuck = c - '0'; // ASCII '0' == 48
		*pn = *pn + fuck; // TODO 不懂
		if (fuck == 0) *pn *= 10;
	}
	*pn *= sign; // 变为 正数 或 负数

	if (c != EOF) {
		ungetch(c);
	}
	return c;

}
