#include <stdio.h>
#include <ctype.h>

int getfloat(float *pn);

main()
{
	int number1 = 0;
	float number2 = 0.0;
	getfloat(&number2);
	printf("number2 = %.2f \n", number2);

}

int getfloat(float *pn)
{
	int c, sign;
	float power;

	while (isspace(c = getch())) {
		// 过滤空格
	}

	if (!isdigit(c) && c != '-'  && c != '+' && c != EOF) {
		// 输入不在合法范围内
		ungetch(c); // 退回缓冲区
		return 0;
	}

	sign = (c == '-') ? -1 : 1;

	if (c == '+' || c == '-') {
		c = getch();
	}

	float number = 0;
	for (*pn = 0.0; isdigit(c); c = getch()) {
		// 整数 
		number = c - '0'; // 例如： 2 - 0 等于 ASCII的 50 - 48 
		*pn = *pn + number;
	}

	if (c == '.') {
		c = getch();
	}
	float n = 1.0;
	float result = 0.0;
	for (n = 1.0; isdigit(c); c = getch()) {
		n *= 10;
		number = c - '0';
		result = number / n;
		*pn = *pn + result;
	}

	return c;
}
