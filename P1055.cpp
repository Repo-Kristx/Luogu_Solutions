#include<stdio.h>
int main()
{
	//���벿�� 
	int i;
	char a[15], change;

	int sum = 0, discr = 0, count = 0;
	for (i = 1; i < 14; i++)
		scanf("%c", &a[i]);

	//��������
	for (i = 1; i < 12; i++) { //Ŀ�ģ���ʶ����
		if (48 > a[i] || a[i] > 56)
			count++;
		else
			sum += (a[i] - '0') * (i - count);
	}
	discr = sum % 11; //����->ʶ����

	if (discr == 10) {
		if (a[13] == 'X') printf("Right");
		else {
			a[13] = 'X';
			for (i = 0; i < 13; i++)
				a[i] = a[i + 1];
			a[13] = '\0';
			printf("%s\n", a);
		}
	}
	else if ((char)(discr) == a[13] - '0')//���discr������ֵ��ȣ���ֱ��right
		printf("Right\n");//���I
	else {
		a[13] = discr + '0';
		for (i = 0; i < 13; i++)
			a[i] = a[i + 1];
		a[13] = '\0';
		printf("%s\n", a);
	}

	return 0;
}


