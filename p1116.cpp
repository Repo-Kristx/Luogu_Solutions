#include<stdio.h>
#define MAX 10000
int main()
{
	int n,i,j;
	int a[MAX];
	int swap,counter=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<(n-1);i++){
		for(j=0;j<n;j++){
			if( a[j] >= a[j+1] ){
				swap=a[j+1];
				a[j+1]=a[j];
				a[j]=swap;
				counter++;
			}
		}
	}
	printf("%d",counter); 
	return 0;
}
