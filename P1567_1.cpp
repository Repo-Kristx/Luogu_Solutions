#include<stdio.h>
int main()
{
	int n, temper_, temper_aft=0;
	int counter = 1, max_oday = 1;
	int i;
	scanf_s("%d", &n);
	scanf_s("%d", &temper_);
	for (i = 2; i <= n; i++) {
		scanf_s("%d", &temper_aft);
		if (temper_aft > temper_)counter++;
		else
			if (max_oday <= counter) {
				max_oday = counter;
				counter = 1;
			}
			else max_oday = max_oday;
		temper_ = temper_aft;
		temper_aft = 0;
	}

	printf("%d", max_oday);
	return 0;
}
