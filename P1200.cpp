#include<stdio.h>
int main()
{
	int i,chc=1,cht=1;//chc是comet的检查码，cht是team的检查码 
	char comet[7],team[7];
	
	/*****数据输入*****/ 
	for(i=0;i<6;i++){
		scanf("%c",&comet[i]);
	}
	for(i=0;i<6;i++){
		scanf("%c",&team[i]);
	}
	
	/*****运算*****/
	//因为两个数都要mod47所以直接取mod之前的数
	//这样做看起来可行，但是如果前数是后者的整数倍则不可行
	//故仍然需要精确mod运算 
	for(i=0;i<6;i++){
		chc*=(comet[i]-'A'+1);
		cht*=(team[i]-'A'+1);
	}
	chc%=47;
	cht%=47;
	
	/*****数据输出*****/
	if(chc==cht)printf("GO");
	else printf("STAY");
	
	return 0;
}
