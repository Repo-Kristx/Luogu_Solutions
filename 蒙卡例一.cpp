#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MM 10000 
int main()
{
	int i;
	int in = 0;            //����
	double x, y;           //���� 
	double result;             //������ֵ 
	for (i = 0; i < MM; i++) 
	{
		x = (rand()/(RAND_MAX/4-1.0));
		y = (rand()/(RAND_MAX/3-1.0));
		
		if (y <= cos(x)+2.0)
		{
			in=in+1;
		}
	}
	result = 12*(in/(double)MM);
	printf("���Ϊ%lf\n",result);
	return 0;
}

