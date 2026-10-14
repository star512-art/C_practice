#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() //在屏幕上打印1到10 正序打印
//{
//	int n = 1;
//
//	while (n <= 10) //n=1，先要经过判断看看能否进入循环
//	{
//		printf("%d ", n);
//		n++; //n进行自增，然后再次进行判断，是否小于等于10
//	}
//
//	return 0;
//}
//
//int main() //在屏幕上打印1到10 逆序打印
//{
//	int n = 10; //让n进行自减
//
//	while (n > 0)
//	{
//		printf("%d ", n);
//		n--;//但这样出来的结果就是逆序的
//	}
//	return 0;
//}
//
//int main() //在屏幕上打印1到10 正序打印
//{
//	int n = 10; //让n进行自减
//
//	while (n > 0)
//	{
//		printf("%d ", 11-n);//让11-n，当n=10,打印出来的就是1，当n=9，打印出来的就是2，以此类推，当n=1时，打印出来10
//		n--;//但这样出来的结果就是逆序的
//	}
//	return 0;
//}
//
//int main()//输入一个正整数，逆序打印每一位数字
//{
//	int n = 0;
//
//	scanf("%d", &n);
//
//	while (n != 0) //n值等于0，就跳出
//	{
//		printf("%d ", n % 10); //此时n值为原来的值
//		n /= 10;//将n值改变，整数除法
//	}
//
//	return 0;
//}

//int main()//输入一个正整数，逆序打印每一位数字
//{
//	int n = 0;
//
//	scanf("%d", &n);
//
//	while (n) //()中是一个表达式，一个变量本身也可以是一个表达式，返回值是自己自身的数值，n=2，条件为真，n=0,条件为假，正好n的最终值就是0，直接条件为假，跳出循环
//	{
//		printf("%d ", n % 10); //此时n值为原来的值
//		n /= 10;//将n值改变，整数除法
//	}
//
//	return 0;
//}

//int main()//输入一个正整数，逆序打印每一位数字
//{
//	int n = 0;
//	int i = 0;//我们可以声明两个变量，一个用来存放取余的值
//
//	scanf("%d", &n);
//
//	while (n) 
//	{
//		i = n % 10;
//		printf("%d ", i);
//		n /= 10;//将n值改变，整数除法
//	}
//
//	return 0;
//}
//
//int main()//输入一个正整数，逆序打印每一位数字
//{
//	unsigned int n = 0; //因为是正整数，可以创建unsigned类型的数据变量
//	int i = 0;//我们可以声明两个变量，一个用来存放取余的值
//
//	scanf("%u", &n);//用%u
//
//	while (n)
//	{
//		i = n % 10;
//		printf("%d ", i);
//		n /= 10;//将n值改变，整数除法
//	}
//
//	return 0;
//}
//


//int main()//输入一个正整数，逆序打印每一位数字
//{
//	size_t n = 0; //因为是正整数，也可以创建size_t类型的数据变量
//	int i = 0;//我们可以声明两个变量，一个用来存放取余的值
//
//	scanf("%zu", &n);//用%zu
//
//	while (n)
//	{
//		i = n % 10;
//		printf("%d ", i);
//		n /= 10;//将n值改变，整数除法
//	}
//
//	return 0;
//}
//
//
//int main() //输入一个正整数，打印出所有小于等于这个数的，正偶数  三目运算符
//{
//	unsigned int n = 0;
//
//	scanf("%u", &n);
//
//	while (n)
//	{
//		printf("%c", n % 2 == 0 ? n :' '); 
//		n -= 1;
//
//	}
//	return 0;
//}

//int main() // 与运算符 逆序
//{
//	unsigned int n = 0;
//
//	scanf("%u", &n);
//  
//	while (n)
//	{
//		(n % 2 == 0) && printf("%d ", n); //当n是偶数的
//		n -= 1;
//	}
//	return 0;
//}
//
//int main() //  if 逆序
//{
//	unsigned int n = 0;
//
//	scanf("%u", &n);
//
//	while (n)
//	{
//		if (n % 2 == 0)//当n是偶数的
//		{
//			printf("%d ", n);
//		}
//
//		n -= 1;
//	}
//
//	return 0;
//}
//
//int main() //创建第二个变量 正序
//{
//	unsigned n = 0;
//	int i = 2;
//
//	scanf("%u", &n);
//
//	while (i <= n)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	
//	return 0;
//}

//int main()//for循环打印1到10的值
//{
//	int i = 1;
//	for (i = 1; i <= 10;i++)
//	{
//		printf("%d ", i);
//	}
//}

//int main() //1-100中3的倍数的数字之和
//{
//	int n = 0;
//	int sum = 0;
//
//	for (n = 1; n <= 100; n++) //创造出1到100之间的数字
//	{
//		if (n % 3 == 0)//筛选出那些数字
//		{
//			sum += n;//让它们相加
//		}
//	}
//
//	printf("sum=%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int n = 3; //直接创造出3的倍数的那些数字
//	int sum = 0;
//
//	while (n < 100) //限制在100以内
//	{
//		sum += n;
//		n += 3;  
//	}
//	printf("sum=%d\n", sum);;
//	return 0;
//}

//int main() //比较三个数字之间的大小   我把所有的顺序和可能都写出来
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a > b && a > c) //判断a是否最大
//	{
//		if (b > c)//判断b是否为第二大
//		{
//			printf("%d %d %d\n", a, b, c);
//		}
//		else //c为第二大
//		{
//			printf("%d %d %d\n", a, c, b);
//		}
//	}
//	else if (b > a && b > c) //判断b是否为最大
//	{
//		if (a > c)//判断a是不是第二大
//		{
//			printf("%d %d %d\n", b, a, c);
//		}
//		else //c是第二大
//		{
//			printf("%d %d %d\n", b, c, a);
//		}
//	}
//	else  //c是第一大
//	{
//		if (a > b)//判断a是否为第二大
//		{
//			printf("%d %d %d\n", c, a, b);
//		}
//		else //b是第二大
//		{
//			printf("%d %d %d\n", c, b, a);
//		}
//	}
//	return 0;
//}

//int main() //将三个数按照从大到小的顺序输出 以a,b,c的顺序固定输出，交换变量中的数值
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0; //中间变量
//	//输入
//	scanf("%d%d%d", &a, &b, &c);
//	//判断
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;  //将变量中的数据进行交换，确保a中的数据一直是最大的
//	}  //如果条件为假，a变量中本身就是最大值
//
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	} //至此，a中的数据就是3个数中最大的了
//
//	if (b < c)//保证b中的数据是第二大的
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main() //将四个数按照从大到小的顺序输出 ，交换变量中的数值
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int tmp = 0; //中间变量
//	//输入
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	//判断
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;  //将变量中的数据进行交换，确保a中的数据一直是最大的
//	}  //如果条件为假，a变量中本身就是最大值
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	} 
//	if (a < d)
//	{
//		tmp = a;
//		a = d;
//		d = tmp;
//	} //a内的数据就是最大的
//    
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if (b < d)
//	{
//		tmp = b;
//		b = d;
//		d = tmp;
//	} //b是b,c,d中第二大的
//	
//	if (c < d)
//	{
//		tmp = c;
//		c = d;
//		d = tmp;
//	} //c是第三大的，d自然是最小的
//	
//	printf("%d %d %d %d", a, b, c, d);
//    return 0;
//}
//
//int main()//打印1000到2000年中的闰年
//{
//	int year = 0;
//	int count = 0;
//	//创造出1000到两千年之间的数字
//	for (year = 1000; year <= 2000; year += 2)//奇数年一定不是闰年
//	{
//		if ((year % 4 == 0 && year % 100 != 0) ||( year % 400 == 0)) //两个条件之间要加括号
//		{
//			printf("%d是闰年\n", year);
//			count++;
//		}
//	}
//	printf("一共有%d个闰年\n", count);
//	return 0;
//}
//
//int main()//数数从1到100的所有整数中，出现了多少个数字9
//{
//	int i = 9;
//	int count = 12;
//	 //判断
//	while (i < 89)//注意如果i<90，当i=89时会再进去一次
//	{
//		i += 10;//19,29,39,49,59.69.79.89
//		count++;
//	}
//	printf("100以内含有%d个数字9\n",count);
//
//	return 0;
//}

//int main()//求10个整数中最大值
//{
//	int max = 0;
//	int num = 0;
//	//输入一个最大值，暂时的最大值
//	scanf("%d", &max);
//	//还有9个数，没有被输入
//	for (int i = 1; i < 10; i++)//循环9次，每次输入一个数和max进行比较
//	{
//		scanf("%d", &num);
//		if (max < num)
//		{
//			max = num;
//		}
//	}
//	printf("最大值是%d\n", max);
//	return 0;
//}

//int main() //九九乘法表
//{
//	int n = 0;
//	int i = 0;
//
//	for (n = 1; n <= 9; n++)//行数1*....,2*.....
//	{
//		for (i = 1; i <= n; i++)//具体乘的数，这个数是1到n
//		{
//			printf("%d*%d=%-2d ", n, i, n * i);
//		}
//		printf("\n"); //一行写完了要进行换行
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	while (scanf("%d%d", &a, &b) != -1)
//	{
//		if (a > b)
//			printf("%d>%d\n", a, b);
//		else if (a < b)
//			printf("%d<%d\n", a, b);
//		else
//			printf("%d=%d\n", a, b);
//	}
//}
//
//int main() //分数求和 
//{
//	int n = 0;
//	float sum = 0; //分数求和，sum的类型应该是浮点数，不应该是整数
//
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 2 == 0)
//			sum += (-1.0 / n);//如果是-1/n，那么发生的就是整数除法，算不出什么，只能写-1.0
//		else
//			sum += 1.0 / n;
//	}
//	printf("sum=%f\n", sum);
//	return 0;
//}
//
//int main()//打印素数100到200之间
//{
//	int n = 0;
//	int i = 0;
//	
//	for (n = 100; n <= 200; n++)//把100与200之间的数创造出来
//	{
//		int flag = 1; //这个flag应该被写入在for循环里面，每次都初始化为1
//		for (i = 2; i < n; i++)
//		{
//			if (n % i == 0)
//			{   
//				flag = 0;
//				break;//跳出所在内层循环
//			}
//		   
//		}
//		if (flag)
//			printf("%d是素数\n",n);
//	}
//	
//	return 0;
//}

//
//int main()//打印素数100到200之间 进阶
//{
//	int n = 0;
//	int i = 0;
//
//	for (n = 101; n <= 200; n +=2)//跳过所有的偶数
//	{
//		int flag = 1; //这个flag应该被写入在for循环里面，每次都初始化为1
//		for (i = 2; i*1 < n; i++)
//		{
//			if (n % i == 0)
//			{
//				flag = 0;
//				break;//跳出所在内层循环
//			}
//
//		}
//		if (flag)
//			printf("%d是素数\n", n);
//	}
//
//	return 0;
////}
//
//int main() //最大公约数
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d%d", &a, &b);
//	for (int i = 1; i <= a; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			if (i > max)
//				max = i;
//		}
//	}
//	printf("%d\n", max);
//
//
//}
//
//int main() //打印1到10的数字
//{
////	int n = 0;
////
////	while (n <= 10) //当n>10的时候，就跳出循环
////	{
////		n++;
////		printf("%d ", n);
////	}
////
////int n = 1;
////
////while (n <= 10)
////{
////	printf("%d ", n);
////	n++;
//////}
////	int n = 0;
////
////	for (n = 1; n < 11; n++) //循环10次
////	{
////		printf("%d ", n);
//////	}
////	int n = 0;
////
////	for (n = 0; n < 10; n++)
////	{
////		
////		printf("%d ", n+1);
////	}
//	/*int n = 1;
//	do
//	{
//		printf("%d ", n);
//		n++;
//	} while (n <= 10);*/
//	int n = 0;
//	do
//	{
//		n++;
//		printf("%d ", n);
//	} while (n < 10);
//}
//
//int main()//打印一个正整数的每一位，逆序
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//
//	while (n)
//	{
//		i = n % 10;
//		printf("%d ", i);
//		n /= 10;
//	}
//}
//
//
////int main()
////{/*
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//
//	while (i < n)
//	{
//		i++;
//		if (i % 2 == 0)
//			printf("%d ", i);
//		
	///*}*/
	//int n = 0;
	//int i = 0;
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	if (i % 2 == 0)
	//		printf("%d ", i);
	//}*/

	//int n = 0;
	//int i = 2;//最小的偶数是2
	//scanf("%d", &n);
	//while (i <= n)
	//{
	//	printf("%d ", i);
	//	i += 2;
	//}

	/*int n = 0;
	int i = 2;

	scanf("%d", &n);
	for (i = 2; i <= n; i+=2)
	{
		printf("%d ", i);
	}
//}*/

	//int main()//多变量控制循环
	//{ 
	//	int a = 0;
	//	int b = 0;
	//	for (b = 0, a = 10; b < a; b++, a--)
	//	{
	//		printf("b=%d a=%d\n", b, a); //b=0 a=10
	//		                             //b=1 a=9
	//									 // b=2 a=8
	//									 // b=3 a=7
	//									 // b=4,a=6
 //       }
	//}
//
//int main()//for的特殊写法
//{
//	///*for (;;)
//	//{
//	//	printf("haha\n");
//	//}*/
//
//	int n = 1;
//	for (; n < 3; n++)
//	{
//		printf("%d ", n);
//	}
//	printf("%d\n", n);
//}
//
////int main()//逗号表达式
////{
////	int a = 1;
////	int b = 2;
////	int c = (b = 4, a = b + 10, b = a + 1); //c=15
////	printf("%d\n", c);
////}
//
////int main()
////{/*
////	int n = 0;
//	int sum = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 3 == 0)
//			sum += n;
//	}
//	printf("%d\n", sum)*/;
//
//	int n = 1;
//	int sum = 0;
//	while (n <= 100)
//	{
//		if (n % 3 == 0)
//			sum += n;
//		n++;
//	}
//	printf("%d\n", sum);
//
//	int n = 3;
//	int sum = 0;
//	for (n = 3; n <= 100; n += 3)
//	{
//		sum += n;
//	}
//	printf("%d\n", sum);
//}

	/*int main()//输出一个正整数有几位
	{
		int n = 0;
		int count = 0;
		scanf("%d", &n);
		do
		{
			n /= 10;
				count++;
		} while (n);
			printf("%d", count);
	}*/
//
//int main()//输出一个整数有几位
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (1)
//	{
//		n /= 10;
//		count++;
//		if (n == 0)
//			break;
//	}
//	printf("%d\n", count);
//}

//
//int main()//输出一个整数有几位
//{
//	int n = 0;
//	int count = 0;
//	do
//	{
//		scanf("%d", &n);
//		if (n <= 0)
//			printf("输入错误，请重新输入:");
//	} while (n <= 0);
//	while (1)
//	{
//		n /= 10;
//		count++;
//		if (n == 0)
//			break;
//	}
//	printf("%d\n", count);
//}
//
//int main()
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		if (i == 5)
//			break;
//		i++;
//	}
//}

//
//int main()
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//
//}
//
//int main()//for循环中的continue
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//}
//
//int main()//do while中的continue
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//}
//
//int main()//素数
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//
//	for (n = 100; n <= 200; n++) //创造出100到200之间的数
//	{
//		int flag = 1;//设置一个状态量,每次循环都刷新成1
//		//进行筛选
//		for (i = 2; i < n; i++)//找到2到n之间的数
//		{
//			if (n % i == 0) //如果被整除，跳出循环
//			{
//				flag = 0;
//				break;
//			}
//		}
//		//跳出循环的，有两种情况，一种是素数，一种是被整除了，跳出
//		if (flag)
//		{
//			printf("%d是素数\n", n);
//			count++;
//		}
//		
//	}
//	printf("%d\n", count);
//}

//int main()//素数
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//
//	for (n = 100; n <= 200; n++) //创造出100到200之间的数
//	{
//		//进行筛选
//		for (i = 2; i < n; i++)//找到2到n之间的数，最终跳出i=n
//		{
//			if (n % i == 0) //如果被整除，跳出循环
//			break;
//		}
//		//跳出循环的，有两种情况，一种是素数，一种是被整除了，跳出
//		if (i == n)
//		{
//			printf("%d是素数\n", n);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}

//int main()//素数
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//
//	for (n = 101; n <= 200; n+=2) //创造出100到200之间的数
//	{
//		//进行筛选
//		for (i = 2; i< n; i++)//找到2到n之间的数，最终跳出i=n
//		{
//			if (n % i == 0) //如果被整除，跳出循环
//				break;
//		}
//		//跳出循环的，有两种情况，一种是素数，一种是被整除了，跳出
//		if (i == n)
//		{
//			printf("%d是素数\n", n);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}
//
//int main()//goto
//{
//	goto next;
//	printf("haha\n");
//	printf("hehe\n");
//	next:
//	printf("跳过了两条指令\n");
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d%d%d", &a, &b, &c);
//	//判断
//	if (a > b && a > c) //a为最大
//	{
//		if (b > c)//b为第二大
//			printf("%d %d %d\n", a, b, c);
//		else//c为第二大
//			printf("%d %d %d\n", a, c, b);
//	}
//	else if (b > a && b > c)//b为最大的情况
//	{
//		if (a > c)//a为第二大
//			printf("%d %d %d\n", b, a, c);
//		else//c为第二大
//			printf("%d %d %d\n", b, c, a);
//	}
//	else//c为最大
//	{
//		if (a > b)//a为第二大
//			printf("%d %d %d\n", c, a, b);
//		else//b为第二大
//			printf("%d %d %d\n", c, b, a);
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	//输入
//	scanf("%d%d%d", &a, &b, &c);
//	//判断
//	if (a < b)
//	{
//		tmp = a;//将a的值赋给中间变量，防止a中的数据被b中的数据覆盖而消失
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入a
//	scanf("%d", &a);
//	//输入9次别的数字，进行比较，判断
//	for (int i = 1; i < 10; i++)
//	{
//		scanf("%d", &b);
//		if (a < b)
//		{
//			int tmp = 0;
//			tmp = a;
//			a = b;
//			b = tmp;
//		}
//	}
//	printf("%d\n", a);
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int right = sizeof(arr) / sizeof(0);
//	//向数组中输入数据
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int n = 1; n < right; n++)
//	{
//		int tmp = 0;
//
//		if (arr[0] < arr[n])
//		{
//			arr[0] = arr[n];
//		}
//	}
//	printf("最大值是%d\n", arr[0]);
//}
//
//int main()
//{
//	int n = 0;
//	int count = 0;
//	//创造出1到100之间的数字
//	for (n = 1; n <= 150; n++)
//	{
//		int tmp = n;                                     // 100 20，109，119，129，139，149  一共是25个
//		//数一数有几个数字9
//		while (tmp)//n为0时条件为假，就跳出循环
//		{
//			if (tmp % 10 == 9)
//				count++;
//			tmp /= 10;
//		}
//	}
//	printf("count=%d\n", count);
//}

//
//int main()
//{
//	int n = 0;
//	int count = 0;
//	//创造出1到100之间的数字
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 10 == 9)//末尾
//			count++;
//		if (n / 10 == 9)//首位
//			count++;
//	}
//	printf("count=%d\n", count);
//}

int main()
{
	int a = 0;
	int b = 0;
	int max = 0;//表示最大公约数
	int n = 0;
	//输入
	scanf("%d%d", &a, &b);
	//找到a的约束
	for (n = 1; n <= a; n++)//找到a的约数
	{
		if (a % n == 0 && b % n ==0 )//找到公约数
		{
			if (max < n)//进行比较
				max = n;
		}
	}
	printf("最大公约数是%d\n", max);
}