#include<stdio.h>
int main()
{
	//数据输入
	int counter = 0, i;
	int n, a[101] = {0}, b[101] = { 0 };
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf_s("%d", &a[i]);
		b[i] = a[i];
	}

	//运算部分
	int j, k;
	for (k = 1; k <= n; k++) {//判断循环
		for (i = 1; i <= n; i++) {//加数循环
			for (j = i; j <= n; j++) {//被加数循环
				if (i == k || j == k || i == j)continue;
				if (a[i] + a[j] == b[k]) { 
					counter++; b[k] = 0;
				}
			}
		}
	}


	//结果输出
	printf("%d", counter);
	return 0;
}
