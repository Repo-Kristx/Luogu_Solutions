#include<stdio.h>
#define MAX 1024
int main()
{
	//This is the fish beauty code blocks.
	//first input part
	int n = 0, kawai[100] = { 0 };//�����������Ŀɰ��̶�����
	scanf_s("%d", &n);
	int i;//��������i
	for (i = 0; i < n; i++)
		scanf_s("%d", &kawai[i]);

	//the functions
	int res[MAX] = { 0 };//����������
	int j, count = 0;
	for (i = 1; i < n; i++) {
		for (j = 0; j < i; j++) {
			if (kawai[j] < kawai[i]) {
				count++;
				res[i] = count;
			}
		}
		count = 0;
	}
	//the result
	for (i = 0; i < n; i++)
		printf("%d ", res[i]);
	return 0;
}
