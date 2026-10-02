#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {//scanf的基本用法
//	int i = 0;
//	scanf_s("%d", &i);
//	printf("%d", i);
//}
//int main() {//scanf输入多个值
//	int i = 0;
//	int j = 0;
//	float x = 0.0;
//	float y = 0.0;
//
//	scanf("%d%d%f%f", &i, &j, &x, &y);
//
//	printf("%d\n", i);
//	printf("%d\n", j);
//	printf("%f\n", x);
//	printf("%f\n", y);
//}
//int main() {//scanf总结例子
//	int x;
//	float y;
//
//	scanf("%d", &x);
//	printf("%d\n", x);
//	scanf("%f", &y);
//	printf("%f\n", y);
//}

//int main() {//scanf的返回值
//	int a = 0;
//	int b = 0;
//	float f = 0.0f;
//	int r = scanf("%d %d %f", &a, &b, &f);
//	printf("%d %d %f\n", a, b, f);
//	printf("%d", r);
//
//}
//
//int main(){//%c不会忽略起首的空白字符
//	//重点关注\n
//	char ch = 0;
//	int a = 0;
//	scanf("%d%c",&a,&ch);
//	printf("==%c==\n", ch);
//	printf("%d\n", a);
//
//
//}
//
//int main() {
//	char ch;
//	scanf(" %c", &ch);
//	printf("==%c==\n",ch);
//}

//int main() {//%s
//	char arr[20];
//	scanf("%s", arr);
//	printf("%s", arr);
//}

//int main() {//读取有空白字符的字符串
//	char arr[100];
//	scanf("%[^\n]s", arr);
//	printf("%s\n", arr);
//}
//int main() {//限制字符串读入的最长长度
//	char ch[5];
//	//[][][][][\0]
//	scanf("%.4s", ch);
//	printf("%s", ch);
//}
//int main() {//占位符类型不匹配
//	int a = 0;
//	float f = 0.0;
//
//	scanf("%d %lf",&a,&f);
//	printf("%d %f\n", a, f);
//}
//int main() {//赋值忽略符
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	char c1 = 0;
//	char c2 = 0;
////
//	scanf("%d%c%d%c%d", &year,&c1, &month,&c2,&day);
//	printf("%d %d %d\n", year, month, day);
// }
//int main() {//赋值忽略符+返回值
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	int r = 0;
//	
//
//	r=scanf("%d%*c%d%*c%d", &year, &month,&day);
//	printf("%d %d %d\n", year, month, day);
//	printf("%d\n",r);
//}

//int main() {//赋值忽略符
//	int a = 0;
//	int b = 0;
//	b = scanf("%*d %d %*f", &a);
//	printf("%d\n", a);
//	printf("%d\n", b);
//}

int main() {//输入是不管是输入数字还是字符，其实在电脑内部都是字符
	float a = 0.0f;
	char ch = 0;//输入一个数字7

	scanf("%f %c", &a,&ch);
	printf("%c\n", ch);//输出还是7
	printf("%f\n", a);
}