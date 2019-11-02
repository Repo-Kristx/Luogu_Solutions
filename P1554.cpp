#include<stdio.h> 
#include<stdlib.h>
int main()
{ 
	int m,n,j;
	int zero=0,i=0,ii=0,iii=0,iv=0,v=0,vi=0,vii=0,viii=0,ix=0;
	char check[10];
	scanf("%d%d",&m,&n);
	for(j=m;j<=n;j++){
		sprintf(check,"%d",j);//将读入的值一个个赋给check 
//		因为check是一个char型，switch不能识别char型，所以直接将check转换成int型
		int check2[10];
		for(j=0;j<10;j++){
			check2[j]=check[j]-'0';
		} 
//		下面是check循环 
		for(j=0;j<10;j++){
			switch(check2){
				case 0:zero++;break;
				case 1:i++;break;
				case 2:ii++;break;
				case 3:iii++;break;
				case 4:iv++;break;
				case 5:v++;break;
				case 6:vi++;break;
				case 7:vii++;break;
				case 8:viii++;break;
				default :ix++;break;
			}
		}
	}
	printf("%d %d %d %d %d %d %d %d %d",zero,i,ii,iii,iv,v,vii,viii,ix);
	return 0;
} 
