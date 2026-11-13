#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n == 1 || n == 2)
//		return 1;
//	else
//	{
//		for (int i = 0; i < n - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//int main()//斐波切那数--循环
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int n = 0;
//	scanf("%d", &n);
//
//	for(int i=0;i<n-2;i++)
//	{
//		c = a + b;//2=1+1
//		a = b;
//		b = c;
//	}
//	printf("%d", c);
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fib(n));
//}

//int Fib(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()//递归法
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fib(n));
//}

//int POWER(int n, int k)
//{
//	if (k == 1)
//		return n;
//	if (k == 0)
//		return 1;
//	else
//		return n * POWER(n, k - 1);
//}
//int main()//实现n的k次方
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d", POWER(n, k));
//
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n < 10)
//		return n;
//	else
//		return n % 10 + DigitSum(n / 10);
//	
//}
//int main() //计算一个数的每位之和
//{
//	int n = 0;
//	scanf("%d", &n);
//	//调用函数
//	printf("%d", DigitSum(n));
//	return 0;
//}

//
//int Fun(int n)
//{
//	int fact = 1;
//
//	for (int i = 1; i <= n; i++)
//	{
//		fact *= i;
//	}
//	return fact;
//}
//int main()//求阶乘--循环
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fun(n));
//
//	return 0;
//}

//
//int Fun(int n)
//{
//	if ((n == 0)||(n==1))
//		return 1;
//	else
//		return n * Fun(n - 1);
//}
//int main()//阶乘--递归
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fun(n));
//	return 0;
//}
//
//void Print(int n)
//{
//	if (n < 10)
//		printf("%d ", n);
//	else
//	{
//		Print(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//int main()//打印每一个整数的每一位--顺序
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//
//	return 0;
//}
//
//void Print(int n)
//{
//	if (n < 10)
//		printf("%d", n);
//	else
//	{
//		printf("%d ", n % 10);
//		Print(n / 10);
//	}
//}
//int main()//逆序打印
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}

//
//int Find(int arr[], int left, int right, int n)
//{
//	if (left > right)
//	    return -1;
//
//	int mid = left + (right - left) / 2;
//	if (arr[mid] == n)
//		return mid;
//	else if (arr[mid] < n)
//		return Find(arr, mid + 1, right, n);
//	else 
//		return Find(arr, left, mid - 1, n);
//}
//int main()  //用递归实现二分查找
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	//最左下标
//	int left = 0;
//		//最右下标
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	scanf("%d", &n);
//	int r=Find(arr, left, right, n);
//	if (r >= 0)
//		printf("找到了,下标是%d\n", r);
//	else
//		printf("没找到\n");
//	return 0;
//}

//
//int Move(int n, char form, char aux, char to)
//{
//	int count = 0;
//	if (n == 1)
//	{
//		printf("%c->%c\n", form, to);
//		
//	}
//	else
//	{
//		printf("%c->%c\n", form, aux);
//		Move(n - 1, form, aux, to);
//		printf("%c->%c\n", aux, to); 
//	}
//}
//int main()//汉诺塔问题
//{
//	int n = 0;
//	scanf("%d", &n);
//	char a = 'A';
//	char b = 'B';
//	char c = 'C';
//	int r = Move(n, a, b, c);
//	printf("移动了%d次", r);
//}

//
//int Move(int n, char form, char aux, char to)
//{
//	if (n == 1)
//	{
//		printf("%c->%c\n", form, to);
//		return 1;
//	}
//	int count = 0;
//	if(n>1)
//	{
//		//把n-1个盘子移到aux
//		count += Move(n - 1, form, to, aux);
//		//剩下1个移到to
//		printf("%c->%c\n", form, to);
//		count++;
//		//把剩下的aux移到to
//		count += Move(n - 1, aux, form, to);
//		return count;
//	}
//}
//int main()//汉诺塔问题
//{
//	int n = 0;
//	char a = 'A';
//	char b = 'B';
//	char c = 'C';
//	scanf("%d", &n);
//	//调用函数，函数的返回值是移动n个盘子的步数
//	int r = Move(n, a, b, c);
//	printf("%d", r);
//	return 0;
//}

//
//
//int Move(int n, int form, int aux, int to)
//{
//	if (n == 1)
//	{
//		printf("%c->%c\n", form, to);
//		return 1;
//	}
//	else
//	{
//
//		int count = 0;
//		//先把n-1个盘子移到B柱上
//		count += Move(n - 1, form, to, aux);
//		printf("%c->%c\n", form, to);
//		//把1个盘子移到C柱上
//		count++;
//		printf("%c->%c\n", form, to);
//
//	}
//}
//int main()//汉诺塔问题
//{
//	int n = 0;
//	scanf("%d", &n);
//	char a = 'A';
//	char b = 'B';
//	char c = 'C';
//	//调用函数，函数的返回值是移动的步数
//	int r = Move(n, a, b, c);
//
//}
//
//int Move(int n, char a, char b, char c)
//{
//	if (n == 0)
//		return 0;
//	else
//	{
//		int count = 0;
//		count+=Move(n - 1, a, c, b);
//		printf("%c->%c\n", a, c);
//		count++;
//		count+=Move(n - 1, b, a, c);
//		return count;
//	}
//}
//int main()//汉诺塔问题
//{
//	int n = 0;
//	char a = 'A';
//	char b = 'B';
//	char c = 'C';
//	scanf("%d", &n);
//	//调用函数，实现对盘子的移动
//	int r=Move(n, a, b, c);
//	printf("%d\n", r);
//	return 0;
//}
//
//int Add(int arr[10], int n)
//{
//	if (n == 0)
//		return 0;
//	else
//	{
//		int sum = 0;
//		return sum = arr[n - 1] + Add(arr, n-1);
//	}
//}
//int main()//数列求和
//{
//	int arr[100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	//输入
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int r = Add(arr, n);
//	printf("%d\n", r);
//	return 0;
//}

//
//int Big(int arr[10], int n)
//{
//
//	if (n == 0)
//		return 0;
//	int max = Big(arr, n - 1);
//	return (arr[n - 1] > max) ? arr[n - 1] :max;
//}
//int main()//求数组中的最大值
//{
//	int n = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int r = Big(arr, n);
//	printf("%d\n", r);
//	return 0;
//}
//
//int Jump(int n)
//{
//	if (n == 0)
//		return 0;
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	return Jump(n - 1) + Jump(n - 2);
//}
//int main()//青蛙跳台阶
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Jump(n);
//	printf("%d", r);
//	return 0;
//}
//
//int Fun(int a, int b)
//{
//	int c = a % b;
//	if (c == 0)
//		return b;
//	else
//		return Fun(b, c);
//}
//int main()//辗转相除法求最大公因数
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int r = Fun(a, b);
//	printf("%d\n", r);
//	retrun 0;
//}
//
//void Num(int n)
//{
//	if (n == 1 || n == 0)
//	{
//		printf("%d ", n);
//		return;
//	}
//	if(n>1)
//	{
//		Num(n / 2);
//		printf("%d ", n % 2);
//		return;
//	}
//}
//int main()//1个十进制整数转化为二进制1
//{
//	int n = 0;
//	scanf("%d", &n);
//	Num(n);
//	return 0;
//}

int Num(int n, int m)
{
	if (m == 0)
		return 1;
	if (n < m)
		return 0;
	if (n == m)
		return 1;
		return  Num(n - 1,m)+Num(n-1,m-1);
}
int main()//组合数
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);
	int r =  Num(n, m);
	printf("%d", r);
}