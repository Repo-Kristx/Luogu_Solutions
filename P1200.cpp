#include<stdio.h>
int main()
{
	int i,chc=1,cht=1;//chc��comet�ļ���룬cht��team�ļ���� 
	char comet[7],team[7];
	
	/*****��������*****/ 
	for(i=0;i<6;i++){
		scanf("%c",&comet[i]);
	}
	for(i=0;i<6;i++){
		scanf("%c",&team[i]);
	}
	
	/*****����*****/
	//��Ϊ��������Ҫmod47����ֱ��ȡmod֮ǰ����
	//���������������У��������ǰ���Ǻ��ߵ��������򲻿���
	//����Ȼ��Ҫ��ȷmod���� 
	for(i=0;i<6;i++){
		chc*=(comet[i]-'A'+1);
		cht*=(team[i]-'A'+1);
	}
	chc%=47;
	cht%=47;
	
	/*****�������*****/
	if(chc==cht)printf("GO");
	else printf("STAY");
	
	return 0;
}
