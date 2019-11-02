#include<stdio.h>
#include<string.h>
int main()
{
	int i, length, pos_num = 0, judge = 1, counter = 0;
	char ch[20];
	char pos='a';
	gets_s(ch);
	length = strlen(ch);
	
	//主程序
	//位置判断pos/pos_num
	for (i = 0; i < length; i++) {
		if (ch[i] == '.' || ch[i] == '/' || ch[i] == '%') {
			pos = ch[i];
			pos_num = i;
		}
	}

	//整数输出
	if (pos == 'a') {
		for (i = (length-1); i >= 0; i--) {
			if (ch[i] == '0' && judge)continue;
			printf("%c", ch[i]);
			judge = 0;
		}
	}

	//小数输出
	if (pos == '.') {
		for (i = (pos_num - 1); i >= 0; i--) {
			if (ch[i] == '0' && judge)continue;
			printf("%c", ch[i]);
			judge = 0;
		}
		printf(".");
		for (i = (pos_num + 1); i < length; i++) {
			if (ch[i] == '0')counter++;
		}
		for (i = (length-1); i > (pos_num+counter); i--) {
			if (ch[i] == '0' && judge)continue;
			printf("%c", ch[i]);
			judge = 0;
		}
	}

	//分数输出
	if (pos == '/') {
		for (i = (pos_num - 1); i >= 0; i--) {
			if (ch[i] == '0' && judge)continue;
			printf("%c", ch[i]);
			judge = 0;
		}
		printf("/");
		for (i = (length - 1); i > pos_num; i--) {
			if (ch[i] == '0' && judge)continue;
			printf("%c", ch[i]);
			judge = 0;
		}
	}

	//百分比输出
	if (pos == '%') {
		for (i = (length - 2); i >=0; i--) {
			if (ch[i] == '0' && judge)continue;
			printf("%c", ch[i]);
			judge = 0;
		}
		printf("%%");
	}


	return 0;
}
