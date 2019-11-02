#include<stdio.h>
int main()
{
	int i, n=0;
	long long temper_rec, temper_las;      //rec->recent/current,las->lasting
	int maxt=1, countt=1;                //maxt->max_rising_days,countt->counting_rising_days

	scanf_s("%d%d", &n, &temper_rec);
	for (i = 2; i <= n; i++) {
		temper_las = temper_rec;
		scanf_s("%d", &temper_rec);
		if (temper_rec > temper_las)countt++;
		else {
			if (maxt < countt) { maxt = countt; countt = 1; }
		}
		if (maxt < countt)maxt = countt;
	}
	
	printf("%d\n", maxt);
	return 0;
}
