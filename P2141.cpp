#include<stdio.h>
int main()
{
	//��������
	int counter = 0, i;
	int n, a[101] = {0}, b[101] = { 0 };
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf_s("%d", &a[i]);
		b[i] = a[i];
	}

	//���㲿��
	int j, k;
	for (k = 1; k <= n; k++) {//�ж�ѭ��
		for (i = 1; i <= n; i++) {//����ѭ��
			for (j = i; j <= n; j++) {//������ѭ��
				if (i == k || j == k || i == j)continue;
				if (a[i] + a[j] == b[k]) { 
					counter++; b[k] = 0;
				}
			}
		}
	}


	//������
	printf("%d", counter);
	return 0;
}
