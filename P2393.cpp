#include<stdio.h>
int main()
{
	long double number,sum=0.0;
	while(scanf("%Lf",&number)!=EOF){
		sum+=number*1000000;
	}
	printf("%.5Lf",sum/1000000);
	return 0;
}



//scanf�ķ���ֵ������
//1,0��EOF(end of file)
//���У���������õ�1���������õ�0��
//����-1�����ļ������õ�EOF
//���������е�!=EOF����˵ֹͣ��ȡ����˼
//��WINDOWS�£���׼��ʽ����ֹͣEOF�ķ�����
//����������س���Ȼ��ctrl+z
//�ٻس����൱��ִ��EOF���� 
