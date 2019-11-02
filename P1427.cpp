#include<stdio.h>
#define MAX 1024
int main()
{
	int a[MAX], i = 0, x;
	do {
		scanf_s("%d", &x);
		a[++i] = x;
	} while (x);
	for (i = i - 1; i > 0; i--)
		printf("%d ", a[i]);
	return 0;
}
