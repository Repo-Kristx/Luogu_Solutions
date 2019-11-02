#include<stdio.h>
void Pytha(int l, int m, int n)
{
	int *min,*max;
	if(l<m){
		*min=l;
		*max=m;
		if(n<*min){
			*min=n;
		}
		if(n>*max){
			*max=n;
		}
	}
	if(l>m){
		*min=m;
		*max=l;
		if(n<*min){
			*min=n;
		}
		if(n>*max){
			*max=n;
		}
	}
}

int main()
{
	int a,b,c;
	int min,max;
	scanf("%d%d%d",&a,&b,&c);
	Pytha(a,b,c);
	printf("%d/%d",&min,&max);
	return 0;
}
