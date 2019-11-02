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



//scanf的返回值有三种
//1,0，EOF(end of file)
//其中，正常输入得到1，非正常得到0；
//读出-1或者文件结束得到EOF
//所以上文中的!=EOF就是说停止读取的意思
//在WINDOWS下，标准格式输入停止EOF的方法是
//在输入的最后回车，然后ctrl+z
//再回车即相当于执行EOF命令 
