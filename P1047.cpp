#include<stdio.h>
int main()
{
	//变量定义与输入
	int len, num, tr_last=0;
	int str[10001] = { 0 }, end[10001] = { 0 }, check[10001] = { 0 };
	int i, j;
	scanf_s("%d%d", &len, &num);
	for (i = 1; i <= num; i++) {
		scanf_s("%d%d", &str[i], &end[i]);
	}

	//主程序
	for (i = 1; i <= num; i++)
		for (j = str[i]; j <= end[i]; j++)
			check[j] = 1;

	for (i = 0; i <= len; i++)
		if (!check[i])tr_last++;
	//输出
	printf("%d", tr_last);
	return 0;
}
