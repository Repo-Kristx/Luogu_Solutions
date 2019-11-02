#include<stdio.h>
int main()
{
	char coin[10001];
	scanf("%s",&coin);
	int i,j,count=0;
	for(i=0;i<10001;i++){
		if(coin[i]=='\0')
		if(coin[i]=='1')continue;
		if(coin[i]=='0'){
			for(j=0;j<i;j++){
				coin[j]=!coin[i];
				count++;
			}
		}
	}
	printf("%d",count);
	return 0;
}
