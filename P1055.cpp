#include<stdio.h>
int main()
{
	//输入部分 
	int i;
	char a[15], change;

	int sum = 0, discr = 0, count = 0;
	for (i = 1; i < 14; i++)
		scanf("%c", &a[i]);

	//程序主体
	for (i = 1; i < 12; i++) { //目的：求识别码
		if (48 > a[i] || a[i] > 56)
			count++;
		else
			sum += (a[i] - '0') * (i - count);
	}
	discr = sum % 11; //求余->识别码

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
	else if ((char)(discr) == a[13] - '0')//如果discr与输入值相等，则直接right
		printf("Right\n");//输出I
	else {
		a[13] = discr + '0';
		for (i = 0; i < 13; i++)
			a[i] = a[i + 1];
		a[13] = '\0';
		printf("%s\n", a);
	}

	return 0;
}


