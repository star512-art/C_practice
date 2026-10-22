#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//
//int main() //输入一个数字，在一个指定的升序整型数组中去找，如果找到了，就输出这个数的下标，如果没有找到，就输出没有找到
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int n = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;//最后一个元素的下标
//	int flag = 0;
//	//输入你要找的数字
//	scanf("%d", &i);
//	//创建出这个数组中的所有元素，然后进行一个一个比较
//	for (n = 0; n <= sz; n++)
//	{
//
//		if (arr[n] == i)
//		{
//			flag = 1;
//			break;
//		}
//		
//	}
//
//	if (flag == 1)
//		printf("找到了，数字的下标是%d\n", n);
//	else
//		printf("没找到\n");
//
//	return 0;
//}

//int main()//数组的初始化+调试
//{
//	int arr[5] = { 1,2,3,4,5 };//完全初始化
//	int arr1[5] = { 1,2,3 };//不完全初始化
//	int arr2[5] = { 0 };
//	int arr3[] = { 0 };
//	int arr4[] = { 1,2,3 };
//	
//	return 0;
//}

//int main()//字符串与字符数组
//{
//	char arr1[] = { "abcde" };//字符串
//	char arr2[] = { 'a','b','c','d','e'};//单个字符
//
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//
//	/*printf("%zu\n", strlen(arr1));
//	printf("%zu\n", strlen(arr2));*/
//
//	printf("%zu\n", sizeof(arr1));//sizeof打印的就是所占内存空间的字节数，
//                                	//有6个元素，每一个元素是1字节，sizeof返回的就是6
//	printf("%zu\n", sizeof(arr2));//有5个元素，每个元素占1字节，返回为5
//
//	return 0;
//}

//int main()//strlen()
//{
//	int arr[5] = { 0 };
//
//	printf("%zu\n", strlen(arr));
//	return 0;
//}
//
//int main()//sizeof
//{
//	//char arr[10] = { "abc" };
//
//	//printf("%zu\n", strlen(arr));
//	//printf("%zu\n", sizeof(arr));
//	//return 0;
//
//	int arr[5] = { 1,2,3 };
//	
//	printf("%zu\n", sizeof(arr));//arr这个数组，所占的内存空间是5*4=20个字节
//}
//
//int main()//数组类型
//{
//	/*int a = 0;
//    
//	printf("%zu\n", sizeof(a));
//	printf("%zu\n", sizeof(int));*/
//
//	int arr[10] = { 0 };
//
//	printf("%zu\n", sizeof(int[10]));
//	printf("%zu\n", sizeof(arr));
//	return 0;
//}
//
//int main()//一维数组的使用
//{
//	int arr[5] = { 1,2,3,4,5 };
//
//	/*printf("%d\n", arr[4]);*/
//	/*for (int i = 0; i < 5; i++)
	/*{*/
		/*printf("%d ", arr[i]);*/
	//}*/
	//for (int i = 4; i >= 0; i--)//逆序打印
	//{
	//	printf("%d ", arr[i]);
	//}
	/*for (int i = 0; i < 5; i += 2)
	{
		printf("%d ", arr[i]);
	}*/
	/*for (int i = 0; i <= 100; i++)
	{
		printf("%d ", arr[i]);
	}*/
//
//	for (int i = 0; i < 5; i++)//输入
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int u = 0; u < 5; u++)
//	{
//		printf("%d ", arr[u]);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//}
//	

//   
//int main()//显示字符串
//{
//	//创建两个字符串
//	char arr1[] = { "#################" };
//	char arr2[] = { "welcome to bit!!!" };
//	int right =strlen(arr1)-1;//元素的总个数，这两个字符串的总个数是一样
//	int left = 0;
//
//	while (left <= right)
//	{
//		//第一个元素和倒数第一个元素，分别进行赋值
//		arr1[left] = arr2[left];//第一个元素
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);//进行打印
//		//第二个元素和倒数第二元素，第一个下角标加1，最后一个下角标减1
//		left++;
//		right--;
//		//当left大于right，就可以不循环
//	}
//	return 0;
//}

//int main()//找数
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//这个数组有几个元素
//	//输入
//	scanf("%d", &num);
//	//查找
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == num)
//		{
//			printf("元素的下标是%d\n", i);
//			break;
//		}
//	}
//	//最后出来也是右两种情况
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}
//int main()
//{
//	int a = 8;
//	int b = 4;
//	int c = 0;
//
//	c = b + (a - b) / 2;
//	printf("%d\n", c);
//}
//
//int main()//二分查找
//{
//	int num = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//    //输入
//	scanf("%d", &num);
//	while (left <= right)
//	{
//		//中间下角标
//		mid= left + (right - left) / 2;
//		//中间值 arr[i]
//		//判断
//		if (num > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (num < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else  //如果num和中间值相等
//		{
//			printf("找到了，元素的下标是%d\n", i);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//
//}

#include <stdio.h>
//
//int main() {
//    int n = 0;
//    int m = 0;
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    int arr3[3000] = { 0 };
//    int i = 0;
//    int u = 0;
//    //输入n,m
//    scanf("%d%d", &n, &m);
//    int j = m + n - 1;
//    //输入arr1
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    //输入arr2
//    for (u = 0; u < m; u++)
//    {
//        scanf("%d", &arr2[u]);
//    }
//
//    while (j >= 0)
//    {
//        //找出比一个数组中的最大值
//        for (i = 0; i < n; i++)
//        {
//            if (arr1[i] > arr3[j])
//                arr3[j] = arr1[i];
//        }
//        //找出两个数组中的最大值
//        for (u = 0; u < m; u++)
//        {
//            if (arr2[u] > arr3[j])
//                arr3[j] = arr2[u];
//        }
//        if (arr3[j] == arr1[i-1])
//            arr1[i-1] = 0;
//        if (arr3[j] == arr2[u-1])
//            arr2[u-1] = 0;
//        j--;
//
//    }
//
//    for (int y = 0; y < m + n; y++)
//    {
//        printf("%d ", arr3[y]);
//    }
//    return 0;
//}
//
//int main()//输入10个整数，求平均值
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int sum = 0;
//	float aver = 0;
//	//输入
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		sum += arr[i];
//	}
//	aver = sum / 10.0;
//	printf("平均值是%.2f\n", aver);
//	return 0;
//}
//
//int main()//交换数组
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	//进行输入
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//进行互换
//	for (int n = 0; n < sz; n++)
//	{
//		int u = 0;
//		u = arr1[n];//将arr1[n]的值赋给u
//		arr1[n] = arr2[n];
//		arr2[n] = u;
//	}
//	//输出
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    //输入
//    scanf("%d%d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //找数
//    int i = 0;
//    int j = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else if (arr2[j] < arr1[i])
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//        else
//        {
//            printf("%d ", arr1[i]);
//            i++;
//            j++;
//        }
//
//    }
//
//    if (i > j)//此时arr2还没有输出完，包括arr2[j]
//    {
//        for (int u = j; u < m; u++)
//        {
//            printf("%d ", arr2[u]);
//        }
//    }
//    else
//    {
//        for (int u = i; u < n; u++)
//        {
//            printf("%d ", arr2[u]);
//        }
//    }
//
//    return 0;
//}
//
//int main()//合并有序序列
//{
//	int n = 0;
//	int m = 0;
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//循环
//	int i = 0;
//	int j = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		else if (arr1[i] > arr2[j])
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", arr1[i]);
//			printf("%d ", arr2[j]);
//			i++;
//			j++;
//		}
//	}
//
//	if (i == n)
//	{
//		for (int u = j; u < m; u++)
//		{
//			printf("%d ", arr2[u]);
//		}
//	}
//	else
//	{
//		for (int u = i; u < n; u++)
//		{
//			printf("%d ", arr1[u]);
//		}
//	}
//
//	return 0;
//}
//
//int main()//二维数组的输入和输出
//{
//	int arr[3][5] = { 0 };
//    //输入
//	for (int i = 0; i < 3; i++)
//	{
//		int u = 0;
//		for (u = 0; u < 5; u++)
//		{
//			scanf("%d", &arr[i][u]);
//		}
//	}
//	//输出
//	for (int i = 0; i < 3; i++)
//	{
//		for (int u = 0; u < 5; u++)
//		{
//			printf("%d", arr[i][u]);
//		}
//		printf("\n");
//	}
//	return 0;
//--}
//#include<stdlib.h>
//#include<time.h>;
//int main()//随机点名
//{
//	char name[20][30] = { ""
//	//随机输出
//	srand(time(NULL));//每次调用我都随机生成一列数字
//	//生成两个
//	for (int u = 1; u < 3; u++)
//	{
//		int i = rand() % 20;//得到0到19，正好和每一行的下标一样
//		for (int n = 0; n < 30; n++)
//		{
//			printf("%c", name[i][n]);
//		}
//	}
//
//
//	return 0;
//}
//
//int main()//字符串输出
//{/*
//	char arr[] = { "abcdefg" };
//
//	printf("%s", arr);*/
//
//	int arr[] = { 1,2,3,4,5 };
//	printf("%d", arr);
//	return  0;
//}
//
//int main()//二维数组的初始化
//{
//	//int arr[2][3] = { {1,2,3},{4,5,6} };
//	/*int arr[3][5] = { {1,2} };
//	int arr1[3][5] = { 0 };
//	int arr2[3][5] = { 1,2 };*/
//
//	/*int arr[][5] = { 1,2,3 };*/
//	/*int arr1[][5] = { {1,2},{3} };*/
//
//	//int arr[][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr1[][5] = { {1,2,3,4,5},{6,7,8,9,10} };
//	return 0;
//}
//
//int main()//二维数组的使用
//{
//	/*int arr[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	printf("%d", arr[1][3]);*/
//	int arr[2][4] = { 0 };
//	//输入
//	for (int i = 0; i < 2; i++)
//	{
//		for (int u = 0; u < 4; u++)
//		{
//			scanf("%d", &arr[i][u]);
//		}
//	}
//    //输出
//	for (int i = 0; i < 2; i++)
//	{
//		for (int u = 0; u < 4; u++)
//		{
//			printf("%d ", arr[i][u]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int main()//二维数组在内存中的存储方式
//{
//	int arr[2][4] = {1,2,3,4,5,6,7,8};
//	
//	//输出
//	for (int i = 0; i < 2; i++)
//	{
//		for (int u = 0; u < 4; u++)
//		{
//			printf("arr[%d][%d]的地址是%p\n",i,u ,&arr[i][u]);
//		}
//		
//	}
//}
//
//#include<stdlib.h>
//#include<time.h>
//int main()//随机点名
//{
//	char name[20][30] = { "果果","康康","小丰","小恒","小云",
//					      "小霞","小李","小元","小红","小明",
//					      "小强","小伟","小波","小涛","小馨",
//					      "小启","小佳","小轩","小卓","小阳" };
//	int num1 = 0;
//	int num2 = 0;
//
//	设置种子数
//	srand((unsigned int)time(NULL));
//	输出两个名字，就是生成两个随机数，rand()调用两次
//	do
//	{
//		num1 = rand()%20;
//	    num2 = rand()%20;
//	} while (num1 == num2);//num1等于num2继续生成，直到不同，就跳出
//	输出
//	printf("%s\n", name[num1]);
//	printf("%s\n", name[num2]);
//	return 0;
//}
//
//int main()//埃及金字塔
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < 2 * n - 1; j++)
//		{
//			if (i + j == n - 1 || j - i == n - 1)
//				printf("*");
//			else
//				printf("%c", ' ');
//		}
//		printf("\n");
//	}
//
//}
//
//int main()//菱形
//{
//	int i = 0;
//	int u = 0;
//	int n = 0;
//
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (u = 0; u < n; u++)
//		{
//			if ((i + u == n / 2) || (u - i == n / 2) || ((u + i) == 3 * (n / 2))||(i-u==n/2))
//				printf("*");
//			else
//				printf("%c", ' ');
//		}
//		printf("\n");
//	}
//	return 0;
//}