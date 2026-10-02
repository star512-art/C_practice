#include<stdio.h>

//int main() //printf函数打印
//{
//	printf("Hello C\n");
//    return 0;
//}

//int main() {
//	//printf("Hello C\n");//第一种添加换行符的方式
//	//printf("Hello C");
//
////	printf("Hello C");
////	printf("\nHello C\n");//第二种添加换行符的方式
//
//	printf("Hello C");
//	printf("\n");
//	printf("Hello C\n");//第三种添加换行符的方式
//}
//
//int main() {     //限定输出的宽度
//	printf("%5d\n", 3);
//	printf("%4c", 'A');
//	return 0;
//}
//
//int main() {//错误使用左对齐的符号
//	printf("%5-d\n", 3);
//	printf("%4-c", 'A');
//}
//
//int main() {//要输出的数字超过限定的宽度
//	printf("%4d", 2333333);
//}

//int main() { //输出时，只显示负号，不显示正号
//	printf("%d\n", -12);
//	printf("%d\n", +12);
//	printf("%f\n", -1.3);
//	printf("%f", +1.3);
//}

//int main() {//输出正负号
//	printf("%+5d\n", -12);
//	printf("%+5d\n", +12);
//	printf("%+f\n", -1.3);
//	printf("%+f", +1.3);
//}

//int main() {//printf默认输出小数点后六位1
//	printf("%f", 1.2);
//}

//int main() {//限制输出小数点后的位数，并且有一套自己的输出规则，类似于四舍五入
//	printf("%.4f\n", 3.499999);
//	printf("%.3f\n", 3.444555);
//	printf("%.2f\n", 4.5555555);
//	printf("%.2f\n", 3.2242222);
//}

//int main() {//把所有的都综合起来
//	printf("====%+-9.3f===\n", +2.3333333);
//	printf("====%-+9.3f===", +2.3333333);
//}

//int main() {//*d代替限定值
//	printf("%*.*f\n", 9, 3, 1.2);
//	printf("%9.3f", 1.2);
//}
//
//int main() {//不同的顺序，会输出不同的结果
//	printf("%d %d\n ", 3, 4);
//	printf("%d %d\n ", 4, 3);
//}

int main() {//输出部分字符串 
	printf("%s\n", "Hello,C");
	printf("%.2s\n", "Hello,C");
	printf("%.4s", "Hello,C");
}