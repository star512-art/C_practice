#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//int main()//创建指针变量
//{
////	int a = 4;
////	int* p = &a;//*就是代表这是一个指针变量
//	int* p=NULL;
//	int a = 0;
//	printf("%d\n", *p);
//
//
//}

//
//int main()//解引用操作符
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%d\n", *pa);
//	printf("%d\n", a);
//}
//
//int main()//指针变量的大小
//{
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(long*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//	return 0;
//}

//int main()//指针的类型
//{
//	int n = 0x11223344;//十六进制
//	char* pi = (char*) & n;
//	*pi = 0;
//	return 0;
//}

//
//int main()//指针+-整数
//{
//	int n = 0x11223344;//十六进制
//	char* pc = (char*)&n;
//	int* pi = &n;
//
//	
//	printf("&n    =%p\n", &n);
//	printf("pc    =%p\n", pc);
//	printf("pc+1  =%p\n", pc+1);
//	printf("pi    =%p\n", pi);
//	printf("pi+1  =%p\n", pi+1);
//
//	return 0;
//}
//
//int main()//利用指针，打印一维数组
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//size_t my_Strlen(char* pa)
//{
//	int n = 0;
//	int count = 0;
//	while (*(pa + n))
//	{
//		n++;
//		count++;
//	}
//	return count;
//}
//int main()//实现strlen函数
//{
//	char arr[] = "abcdefg";
//	char* pa = arr;
//	//调用一个函数，计算有效字符的个数
//	size_t r = my_Strlen(pa);
//	printf("%zu\n", r);
//	return 0;
//}
//
//size_t my_Strlen(char* pa)
//{
//	char* str = pa;
//	char* end = pa;
//	while (*end)
//	{
//		end++;
//	}
//	return end - str;
//}
//int main()//实现strlen函数
//{
//	char arr[] = "abcdefg";
//	char* pa = arr;
//	//调用一个函数，计算有效字符的个数
//	size_t r = my_Strlen(pa);
//	printf("%zu\n", r);
//	return 0;
//}


int main()//打印
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	while (p < &arr[sz])
	{
		printf("%d ", *p);
		p++;
	}

}