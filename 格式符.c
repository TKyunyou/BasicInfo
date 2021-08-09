#include <stdio.h>
int main()
{
	int a = 15, c;
	float b = 12345.12;
	printf("a=%d,%5d,%o,%x\n", a, a, a, a);//d:十进制;o:八进制;x:十六进制
	printf("b=%f,%20f,%10.4f,%e\n", b, b, b, b);//f:按浮点数显示;20:总长20位(若此数小于原数长度则按原数显示);10.4:总长10位,小数点后4位;e:按科学记数法显示
	printf("请输入一个整数：");
	scanf_s("%d", &c);//扫描输入的整型,写入变量c中(注意此处为地址)
	printf("%d\n", c);//以十进制打印变量c
	printf("%c\n", c);//以字符形式打印变量c(打印ASCII码为变量c的值的字符)
	return 0;
}