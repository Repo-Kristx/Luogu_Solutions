////#include"stdio.h"
////int main()
////{
////	int elec;
////	double cost=0;
////	scanf("%d", &elec);
////	if (elec > 10000) puts("Are you serious?");
////	else {
////		if (elec <= 150) cost = elec * 0.4463;
////		if (150 < elec&&elec <= 400) cost = 150 * 0.4463 + (elec - 150)*0.4663;
////		if (elec > 400) cost = 150 * 0.4463 + 250 * 0.4663 + (elec - 400)*0.5663;
////		printf("%.1lf", cost);
////	}
////
////	return 0;
////}


#include"stdio.h"
int main()
{
    //inputing methods
	float a=0.0,d=0.0; 
    scanf("%f",&a);
    
    //calculate
	if(a>=0.0&&a<=150.0)
    	d=a*0.4463;
    if(a>150&&a<=400.0)
    	d=150*0.4463+(a-150.0)*0.4663;
	if(a>400.0)
        d=150*0.4463+250*0.4663+(a-400.0)*0.5663;
	
	//output
	printf("%.1lf",d);
    return 0;
    
}


#include"stdio.h"
int main()
{
    float a=0.0,d=0.0;
    scanf("%f",&a);
    if(a>=0&&a<=150.0)
        d=a*0.4463;
    if(a>150&&a<=400.0)
        d=150*0.4463+(a-150.0)*0.4663;
    if(a>400)
        d=150*0.4463+250*0.4663+(a-400.0)*0.5663;
    printf("%.1lf",d);
    return 0;
    
}
