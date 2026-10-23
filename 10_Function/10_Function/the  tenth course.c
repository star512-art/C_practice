#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
////定义函数
//void Make_table(int num)
//{
//	int i = 0;
//	for (i = 1; i <= num; i++)
//	{
//		int u = 0;
//		for (u = 1; u <= i; u++)
//		{
//			printf("%d*%d=%-2d ", u, i, u * i);
//		}
//		printf("\n");
//	}
//}
//
//int main()//乘法口诀表
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//调用函数
//	Make_table(num);
//	return 0;
//}
//
//int leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()//判断闰年
//{
//	int year = 0;
//	//输入
//	scanf("%d", &year);
//	//传入函数
//	if (leap_year(year))
//		printf("%d是闰年\n", year);
//	else
//		printf("%d不是闰年\n", year);
//	return 0;
//}
//
//int is_prime(int num)
//{
//	int i = 0;
//	for (i = 2; i*i <=num; i++)
//	{
//		if (num % i == 0)
//			return 0;
//	}
//
//	return 1;
//}
//
//int main()//判断是不是素数
//{
//	int num = 0;
//	//创造100到200之间的数字
//	for (num = 101; num <= 200; num+=2)
//	{
//		if (is_prime(num))
//			printf("%d是素数\n", num);
//	}
//	return 0;
//}
////// 
//void intit(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
////}
//void print(int arr1[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//}
//void reverse(int arr1[], int sz)
//{
//	int right = sz - 1;
//	int mid = right / 2;
//	int u = right;
//	for (int i = 0; i <=mid; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr1[u];
//		arr1[u] = tmp;
//		u--;
//	}
//}
//
//int main()//实现数组操作
//{
//	
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10,11};
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	reverse(arr1, sz);
//	print(arr1, sz);
//}

 

//int bin_search(int arr[], int left, int right, int key)
//{
//	int mid = 0;
//	
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		//判断
//		if (key > arr[mid])
//		{
//			left = mid + 1;
//
//		}
//		else if (key < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//
//	return -1;
//}
//
//int main()//函数实现二分查找
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 0;
//	//输入要查找的数
//	scanf("%d", &key);
//	//调用函数，函数会返回会元素的下标
//	int r = bin_search(arr, left, right, key);
//	if (r != -1)
//		printf("元素的下表是%d\n", r);
//	else
//		printf("找不到\n");
//	return 0;
//}
int aver(int a, int b)
{
	return a + (b - a) / 2;
}
int main()//计算两个数的平均数
{
	int a = 0;
	int b = 0;
	//输入
	scanf("%d%d", &a, &b);
	//调用函数，计算平均值
	int r=aver( a, b);
	printf("平均值是%d", r);

	return 0;
}