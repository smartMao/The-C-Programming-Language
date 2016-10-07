#include<stdio.h>
#define MAXCOUNT 20

main()
{
	int count, i, n, q = 0;
	char c;
	char line[2000];


	for(n=0; (c = getchar()) != EOF; ++n){
		line[n] = c;
		count++;
		if(count >= MAXCOUNT){

			for(i=count; i > 0; --i){
				if(line[i] == ' ' || line[i] == '\t'){

				}else{
					line[i] = '\n';
					count = 0;
					q++;
					break;
				}
			}
		}
	}
	printf("%s\n", line);
	printf("%d\n", q);
}

//while((c = getchar())){

	/*
	count++ // 当前行的字符数


	if(count > MAXCOUNT){
		// 当行的字符数量 大于 限定的行字符数量

		for(i=count; i>0; --i){
			// 从每行最末尾开始检查字符
			if(line[i] == ' ' || line[i] == '\t'){
				// 如果发现字符是 空格 或 制表符， 将空格或制表符删除, 然后 count--
				// break出循环
			}else{
				// 第20个字符是正常字符`
				line[i++] = '\n';
				count = 0; // 清零
			}
		}
		line[count] = '\n'; // 让换行
	}

	*/
//}
