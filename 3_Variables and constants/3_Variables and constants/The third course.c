////不使用头文件的情况
//int main() {
//	int a = 0;
//	int b = 9;
//	return 0;
//}
//
//#include<stdio.h>//当变量开头是数字的情况
//int main() {
//	int 4a = 1;
//	printf("%d\n", 4a);
//	return 0;
//}

//#include<stdio.h> //全局变量不初始化和初始化
//int a = 1;
//int b;
//int main() {
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//
//#include<stdio.h>//全局变量可以被函数使用，修改
//int globalVar = 100;
//
//void show() {
//	printf("全局变量值：%d\n", globalVar);
//}
//int main() {
//	show();
//	globalVar = 200;
//
//	printf("修改后：%d\n", globalVar);
//	return 0;
//}

//#include<stdio.h>//局部变量的生命周期
//    void show() {
//		int a = 5;
//		printf("%d\n", a);
//	}
//	int main() {
//		show();
//		return 0;
//	}
//
//#include<stdio.h>//局部变量不进行初始化
//int main() {
//	int a;
//	printf("%d\n", a);
//}
//
//# include<stdio.h>//局部变量与全局变量同名
//int a = 1;
//int main() {
//	int a = 10;
//	printf("%d\n", a);
//}
//
//#include<stdio.h>//字面常量
//int main() {
//	printf("%d %d %c", 2, 3, 'A');
//}

//#include<stdio.h>//字符变量
//#define M 100
//#define PI 3.1415921
//int main() {
//	int Max = M;
//	printf("Max=%d\n", Max);
//	printf("M=%d\n", M);
//	printf("PI=%d\n", PI);
//}

//#include<stdio.h>//const常量
//int main() {
//	const int a = 10;
//	printf("a=%d", a);
//
//	a = 100;//改变变量a的值
//	printf("a=%d\n", a);
//}

//#include<stdio.h>//去掉const常量
//int main() {
//	 int a = 10;
//	printf("a=%d\n", a);
//
//	a = 100;//改变变量a的值
//	printf("a=%d\n", a);
//}


	//#include<stdio.h>//字面常量小数会被自动认为是double类型
	//int main() {
	//	float a = 1.234;
	//	printf("%zu\n", sizeof(a));
	//	printf("%zu\n",sizeof(1.234));
	//}
#include<stdio.h>//字面常量小数会被自动认为是double类型
	int main() {
	float a = 1.234;
	printf("%zu\n", sizeof(a));//float类型的变量
	printf("%zu\n", sizeof(1.234));//字面常量
	printf("%zu", sizeof(1.234f));//字面常量加上f后缀之后
}

