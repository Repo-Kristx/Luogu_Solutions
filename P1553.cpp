#include<stdio.h>
#include<string.h>
int main()
{
	int i, length, pos_num = 0, judge = 1, counter = 0;
	char ch[20];
	char pos='a';
	gets_s(ch);
	length = strlen(ch);
	
	//������
	//λ���ж�pos/pos_num
	for (i = 0; i < length; i++) {
		if (ch[i] == '.' || ch[i] == '/' || ch[i] == '%') {
			pos = ch[i];
			pos_num = i;
		}
	}

	//�������
	if (pos == 'a') {
		for (i = (length-1); i >= 0; i--) {
			if (ch[i] == '0' && judge)continue;
			printf("%c", ch[i]);
			judge = 0;
		}
	}

	//С�����
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

	//�������
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

	//�ٷֱ����
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
