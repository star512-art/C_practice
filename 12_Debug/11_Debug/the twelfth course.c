#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
////	int arr[] = { 1,2,3,4,5 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////
////		arr[i] = 0;
////	}
////
////	printf("%d", i);
////	/*for (int i = 0; i < sz; i++)
////	{
////		printf("%d ", arr[i]);
////	}*/
////	return 0;
////}
////
//
////void test()
////{
////	printf("hehe\n");
////}
////
////int main()
////{
////	test();
//// 
//	/*int arr[3][5] = { 0 };*/
//
//
//
//	
//	return 0;
//}
//int Add(int a, int b)
//{
//	a += 1;//x=4
//	b += 1;//y=2
//	return a + b;//6
//}
//
//
//int main()
//{
//	int a = 3;
//	int b = 1;
//	int r = Add(a, b);
//	printf("%d", r);
//}

//void Inital(char arr1[3], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr1[i] = '*';
//	}
//}
//int main()
//{
//	char arr[3] = { '1','2','3' };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Inital(arr,sz);
//}

//void Inital(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	for (i = 0;i < x; i++)
//	{
//		int u = 0;
//		for (u = 0; u < y; u++)
//		{
//			arr[i][u] = 5;
//		}
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3 };
//	Inital(arr, 3, 5);
//}

//
//int main()//��1��3�Ľ׳�֮��
//{
//
//	int sum = 0;
//
//	//�����1��10����
//	for (int num = 1; num <= 3; num++)
//	{
//		//��׳�
//		int factor = 1;
//		for (int i = 1; i <= num; i++)
//		{
//			factor *= i;
//		}
//		sum += factor;
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//
//	return 0;
//}

//
//int main()//喝汽水
//{
//	int money = 0;
//	int bottle = 0;
//
//	for (money = 1; money <= 20; money++)
//	{
//		if (money == 1)
//			bottle++;
//		else 
//			bottle += 2;
//		
//	}
//	printf("%d", bottle);
////}
//int Buy(int money)
//{
//	int total = money;
//	int empty = total;
//
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	return total;
//}
//
//int main()//喝汽水2
//{
//	int money = 20;
//	int sum = Buy(money);
//	printf("%d", sum);
//	return 0;
//}

//int main() //打印菱形
//{
//	int i = 0;
//	for (i = 0; i <= 6; i++)
//	{
//		int u = 0;
//		for (u = 0; u <= 12; u++)
//		{
//			if (u >= 6 - i && u <= 6 + i)
//				printf("%c", '*');
//			else
//				printf("%c", ' ');
//		}
//		printf("\n");
//	}
//	for (int n = 0; n <= 5; n++)
//	{
//		for (int m = 0; m <= 12; m++)
//		{
//			if (m > n && m < 12 - n)
//				printf("*");
//			else
//				printf("%c", ' ');
//	    }
//		printf("\n");
//	}
//}
//
//#include<math.h>
//int JudgeNum(int num)
//{
//	//调用函数，计算数字的位数
//	int digit = COUNT(num);
//	int sum = 0;
//	int n = num;
//    //数字的每一位
//	 while (n)
//		{
//			int m = 0;
//			m = n % 10;
//			n/= 10;//num一直被除10，发生变化
//			sum += (int)pow(m, digit);
//		}
//		if (sum == num)
//			return 1;
//		else
//			return 0;
//	}
//
//int COUNT(int a)
//{
//	int count = 0;
//
//		while (a)
//		{
//			a /= 10;
//			count++;
//		}
//		return count;
//	
//}
//
//int main() //打印水仙花数
//{
//	int i = 0;
//    //创造0到100000
//	for (i = 1; i <= 100000; i++)
//	{
//		if (JudgeNum(i))
//			printf("%d是水仙花数\n", i);
//		
//	}
//	return 0;
//}

int main()//计算求和
{
	int S = 0;
	int a = 0;
	int n = 0;
	int m = 0;
	scanf("%d%d", &n,&m);
	for (int i = 0; i < m; i++)
	{
		a *= 10;
		a += n;
		printf("%d ", a);
		S += a;
	}

	printf("\n%d", S);
}