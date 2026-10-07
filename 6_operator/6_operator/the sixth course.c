#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {//加法
//	int a = 13;
//	int b = 12;
//	int c = 0;
//
//	c = a + b;
//	printf("a+b=%d\n", c);
//}
//int main() {//减法
//	int a = 13;
//	int b = 12;
//	int c = 0;
//
//	c = a - b;
//	printf("a-b=%d\n", c);
//}
//int main() {//乘法
//	int a = 1;
//	float b = 12.2;
//	float c = 0;
//
//	c = a*b;
//	printf("a*b=%f\n", c);
////}
//int main() {//神奇的除法
//	int a = 5;
//	int b = 2;
//	float c = 0.0f;
//
//	c = a / b;
//	printf("a*b=%f\n", c);
//}
//int main() {//浮点数除法1
//	float a = 5.0f;
//	int b = 2;
//	float c = 0.0f;
//
//	c = a / b;
//	printf("a*b=%f\n", c);
//}
//int main() {//浮点数除法2
//	float c = 5.0 / 2;
//	printf("a*b=%f\n", c);
//}
//int main() {//整体看一下
//	int soccer = 5;
//
//	soccer = (soccer / 20.0) * 100;//先计算5/2.0得出的结果就是0.25，先不着急截断，因为还有0.25乘100，等于25.00，中间还有隐藏了类型转换
//	printf("soccer=%d\n",soccer);
//}
//int main() {//取模
//	int a = 5;
//	int b = 2;
//	int c = 0;
//
//	c = a % b;//5/2=2....1,余1
//	printf("c=%d\n", c);
//}
//int main() {//浮点数取余
//	float a = 5.8;
//	float b = 2.2;
//	int c = 0;
//
//	c = a % b;//5/2=2....1,余1
//	printf("c=%d\n", c);
//}
//int main() {//计算任意两个整数的平均数，要求是小数
//	int a = 0, b = 0;
//	float c = 0.0f;
//
//	scanf("%d%d", &a, &b);
//	c = (a + b) / 2.0;
//	printf("%.2f\n", c);
//}
//int main() {//=
//	int a = 0;
//	int b = 0;
//	int c = 9;
//
//	a = 8;
//	b = c;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	printf("c=%d\n", c);
//}
//int main() {//赋值与初始化
//	int a = 5;//初始化
//	int b = 0;//初始化
//
//	a = b;//赋值
//	b = 3;//赋值
//	
//}
//int main() {//+=
//	int a = 2;
//	int b = 9;
//
//	a += 1;//a=a+1
//	b += 6;//b=b+6
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//}	
//int main() {//-=
//    int a = 2;
//	int b = 9;
//
//	a -= 1;//a=a-1
//	b -= 6;//b=b-6
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//}
//int main() {//*=
//	int a = 2;
//	int b = 9;
//
//	a *= 2;//a=a*2
//	b *= 6;//b=b*6
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//}
//int main() {// /=
//	int a = 2;
//	int b = 9;
//
//	a /= 2;//a=a/2,结果是1，整数除法
//	b /= 6;//b=b/6，结果是1，整数除法
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//}
//int main(){//自增运算符
//	int a = 2;
//
//	a++;
//	printf("a=%d\n",a);
//}
//int main() {//表达式中的自增运算符
//	int a = 2;
//	int b = 0;
//	int c = 2;
//	int d = 0;
//
//	b = ++a;
//	d = c++;
//	printf("b=%d\n", b);//b=3
//	printf("a=%d\n", a);//a=3
//	printf("d=%d\n", d);//d=2
//	printf("c=%d\n", c);//c=3
//}
//int main() {//表达式中的自减运算符
//	int a = 2;
//	int b = 0;
//	int c = 2;
//	int d = 0;
//
//	b = --a;
//	d = c--;
//	printf("b=%d\n", b);//b=1
//	printf("a=%d\n", a);//a=1
//	printf("d=%d\n", d);//d=2
//	printf("c=%d\n", c);//c=1
//}
//int main() {//正负
//	int a = 2;
//	int b = -2;
//
//	printf("a=%d\n", a);//a=2
//	printf("b=%d\n", b);//b=-2
//	a = -a;//a=-2
//	b = +b;//b=-2
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//}
//int main() {//整型提升
//	int a = 0;
//	char b = 20;
//	short c = 10;
//
//	a = b + c;//b,c提升成int类型
//	printf("a=%d\n", a);
//}
//int main() {//优先级
//	int a = 2;
//	int b = 5;
//	int c = 3;
//	int d = 0;
//
//	d = a + b * c; //乘法的优先级高于加减法，所以先算乘法，再算加法,等于17
//	printf("d=%d\n", d);
//}
//int main() {//结合性
//	int a = 2;
//	int b = 5;
//	int c = 3;
//	int d = 2;
//	int e = 0;
//
//	e = a - b + c * d;//这个我们就先计算乘法，计算完成乘法后就是相当于只剩下了加法和减法，我们根据结合性，从左到右进行计算,3
//	
//		printf("e=%d\n", e);
//	}
//int main() {//常规算术类型转换
//	float a = 1.2f;
//	int b = 3;
//	float c = 0;
//
//	c = a + b;//b会先转换成float类型，再与a进行计算,c=4.200000
//	printf("c=%f\n", c);
//}
int main(){//强制类型转换
    int a = 5;
    int b = 2;
    float c = 0;

    c = (float)a / b;//将a变量强制转换成float类型，就可以进行浮点数除法
    printf("c=%f\n", c);//c=2.500000

}