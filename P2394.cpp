#include<stdio.h>
int main()
{
	long double x,hydr;
	scanf("%15Lf",&x);
    hydr=x/23.0； 
	printf("%.8Lf",hydr);
	return 0;
} 

//scanf强制提高精度：
//	使用long double和%Lf强制增加精度
//	因为double与lf的精度不够
//	此外无他/*入门*/ 
