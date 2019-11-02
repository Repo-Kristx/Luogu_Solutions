#include<stdio.h>
int main()
{
	int a1,a2,n;
	scanf("%d%d%d",&a1,&a2,&n);
	int differ,sum=a1+a2;
	differ=a2-a1;
	
	
	int i,temp=a2;
	for(i=0;i<n-2;i++){
		temp=temp+differ;
		sum=sum+temp;
	}
	printf("%d",sum);
	return 0;
} 
