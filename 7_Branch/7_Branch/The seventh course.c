#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() //输入一个整数，判断是不是奇数
//{
//	int a = 0;
//    //输入
//	scanf("%d", &a);
//	//判断
//	if (a % 2 == 1)
//		printf("%d是一个奇数\n", a);
//	else 
//		printf("%d是一个偶数\n", a);
//
//	return 0;
//}

//int main() //判断成绩
//{
//	int score = 0;
//	//输入
//	scanf("%d", &score);
//	//判断
//	if (score >= 60)
//		printf("拿捏拿捏\n");
//	else 
//		printf("补考补考\n");
//
//	return 0;
//}

//int main() //多条语句
//{
//	int score = 0;
//	//输入
//	scanf("%d", &score);
//	//判断
//	if (score >= 60)
//		printf("拿捏拿捏\n");
//	    printf("庆祝一下\n");
//
//	return 0;
//}

//int main() //多条语句
//{
//	int score = 0;
//	//输入
//	scanf("%d", &score);
//	//判断
//	if (score >= 60)
//	{
//		printf("拿捏拿捏\n");
//		printf("庆祝一下\n");
//	}
// 
//	return 0;
//}

//int main()//从大到小
//{
//	float total = 0.0f;
//	//输入
//	scanf("%f", &total);
//	//判断
//	if (total >= 50)
//	{
//		printf("满50减15，实际付款：%.2f\n", total - 15);
//	}
//	else if (total >= 30)
//	{
//		printf("满30减8，实际付款：%.2f\n", total - 8);
//	}
//	else if (total >= 20)
//	{
//		printf("满20减5，实际付款：%.2f\n", total - 5);
//	}
//	else
//	{
//		printf("不满20，不参加活动\n");
//	}
// 
//	return 0;

//int main()//从小到大
//{
//	float total = 0.0f;
//	//输入
//	scanf("%f", &total);
//	//判断
//	if (total < 20)
//	{
//		printf("未满20，不参加活动\n");
//	}
//	else if (total < 30)
//	{
//		printf("满20，减5元，应付%.2f\n", total - 5);
//	}
//	else if (total < 50)
//	{
//		printf("满30，减8元，应付%.2f\n", total - 8);
//	}
//	else
//	{
//		printf("满50，减15，应付%.2f\n", total - 15);
//	}
// 
//	return 0;
//}

//int main()//回复信息的速度
//{
//	int mintue = 0;
//	//输入
//	scanf("%d", &mintue);
//	//判断
//	if (mintue <= 1)
//	{
//		printf("有戏\n");
//	}
//	else if (mintue <= 10)
//	{
//		printf("ta可能在忙\n");
//	}
//	else if (mintue <= 60)
//	{
//		printf("我去打游戏了\n");
//	}
//	else
//	{
//		printf("还是代码香\n");
//	}
//
//	return 0;
//}

//int main() //评奖学金-bug
//{
//	int score = 0;
//	int fail = 0;
//	int warning = 0;
//	//输入
//	scanf("%d%d%d", &score, &fail, &warning);
//	//判断
//	if (score >= 85)
//	{
//		if (fail == 0)
//		{
//			if (warning == 0)
//			{
//				printf("有奖学金\n");
//			}
//		}
//	}
//	else
//	{
//		printf("不能参与评奖\n");
//	}
//}

//int main() //输入一个整数，判断是不是奇数
//{
//	int a = 0;
//    //输入
//	scanf("%d", &a);
//	//判断
//	if (a % 2 == 1)
//		printf("%d是一个奇数\n", a);
//	
//	return 0;
//}

//int main()//评奖学金-正确
//{
//	int score = 0;
//	int fail = 0;
//	int warning = 0;
//	//输入
//	scanf("%d%d%d", &score, &fail, &warning);
//	//判断
//	if (score >= 85)
//	{
//		if (fail == 0)
//		{
//			if (warning == 0) {
//				printf("有奖学金\n");
//			}
//			else
//			{
//				printf("有处分，不能参与评奖\n");
//			}
//		}
//		else
//		{
//			printf("挂科了，不能参与评奖\n");
//		}
//	}
//	else
//	{
//		printf("成绩不合格，不能参与评奖\n");
//	}
// 
//	return 0;
//}

//int main() //悬空else 
//{
//	int a = 0;
//	int b = 2;
//
//	if (a == 2)
//		if (b == 2)
//			printf("haha\n");
//		else
//			printf("hehe\n");
// 
//	return 0;
//}
//
//int main() //悬空else 加花括号
//{
//	int a = 0;
//	int b = 2;
//
//	if (a == 2)
//	{
//		if (b == 2)
//		{
//			printf("haha\n");
//		}
//	}
//	else
//	{
//		printf("hehe\n");
//	}
// 
//	return 0;
//}

//int main()// == 和 =
//{
//	int a = 2;
//
//	if (a == 3)
//	{
//		printf("哈哈\n");
//	}
//	else
//	{
//		printf("呵呵\n");
//	}
// 
//	return 0;
//}

//int main()// == 和 =
//{
//	int a = 2;
//
//	if (a = 3)
//	{
//		printf("哈哈\n");
//	}
//	else
//	{
//		printf("呵呵\n");
//	}
// 
//	return 0;
//}

//int main()// == 和 =
//{
//	int a = 2;
//
//	if (3 = a)
//	{
//		printf("哈哈\n");
//	}
//	else
//	{
//		printf("呵呵\n");
//	}
// 
//	return 0;
//}

//int main()//多个关系运算符连用
//{
//	int a = 4;
//
//	if (1 < a < 3)
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//int main() //找出两个数的最大值
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//
//	scanf("%d%d", &a, &b);
//	
//	if (a > b)
//	{
//		max = a;
//		printf("最大值为%d\n", max);
//	}
//	else
//	{
//		max = b;
//		printf("最大值为%d\n", max);
//	}
//	return 0;
//}

//int main()//找出两个数中的最大值
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//
//	scanf("%d%d", &a, &b);
//
//	max = a > b ? a : b;
//
//    printf("最大值是%d\n", max);
//}

//int main() //回信息
//{
//	int mintue = 0;
//	//输入
//	scanf("%d", &mintue);
//	//输出
//	printf("%s\n", mintue <= 1 ? "有戏" :
//		           mintue <= 10 ? "ta可能在忙" : 
//		           mintue <= 60 ? "去打游戏吧" : "还是代码香");
//	return 0;
//}
//
//int main() //评奖学金-条件表达式
//{
//	int score = 0;
//	int fail = 0;
//	int warning = 0;
//    //输入
//	scanf("%d%d%d", &score, &fail, &warning);
//	//输出
//	printf("%s\n", score>=85 
//		           ?(fail==0 
//				   ? (warning==0 
//				   ? "有奖学金" 
//				   : "有处分不能参与") 
//				   :"有挂科，不能参与") 
//		           : "成绩不合格，不能参与");
//	return 0;
//}

//int main() //取反
//{
//	int flag = 0;
//
//	scanf("%d", &flag);
//
//	if (flag) //如果flag为真
//	{
//		printf("do something\n");
//	}
//	if (!flag)//flag如果是假，取反后，就是真，就会执行下面的语句
//	{
//		printf("do something\n");
//	}
//	return 0;
//}

//int main()//与运算符
//{
//	int a = 4;
//
//	if (1 < a && a < 3)
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//int main() //冬天
//{
//	int month = 0;
//	//输入
//	scanf("%d", &month);
//	//判断
//	if (month == 12 || month == 1 || month == 2)
//	{
//		printf("该月是冬天\n");
//	}
//	return 0;
//}

//int main()//闰年
//{
//	int year = 0;
//
//	scanf("%d", &year);
//	
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("该年是闰年\n");
//	}
//
//	return 0;
//}
//
//int main() //石头剪刀布
//{
//	char player = 0;
//	char computer = 0;
//	   // 石头：s
//      // 剪刀 ：c
//	 //布：b
//	scanf("%c %c", &player, &computer);
//	//判断，有三种情况，平局，玩家赢，电脑赢
//	if (player == computer) //平局
//	{
//		printf("平局\n");
//	}
//	else if (player == 's' && computer == 'c'
//		     || player == 'c' && computer == 'b'
//		     || player == 'b' && computer == 's') //玩家赢
//	{
//		printf("玩家获胜\n");
//	}
//	else 
//	{
//		printf("电脑获胜");
//	}
//		
//
//	return 0;
//}

//int main()//短路1
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	
//	i = a++ && ++b && d++;
//
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//
//
//	return 0;
//}


//int main()//短路2
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	
//	i = a++ && ++b && d++;
//
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	
//	return 0;
//}

//
//int main()//短路3
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	
//	i = a++|| ++b || d++;
//
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	
//	return 0;
//}

//
//int main()//短路4
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//
//	i = a++ || ++b || d++;
//
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	printf("%d\n", i);
//
//	return 0;
//}

//
//int main()//余数
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a % 3)
//   {
//	case 0:
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//
//	return 0;
//}

//
//int main()//余数
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a % 3)
//	{
//	case 0:
//		printf("余数是0\n");
//	case 1:
//		printf("余数是1\n");
//	case 2:
//		printf("余数是2\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 3 == 0) 
//	{
//		printf("余数是0\n");
//	}
//	if (n % 3 == 1)
//	{
//		printf("余数是1\n");
//	}
//	else
//	{
//		printf("余数是2\n");
//	}
//}
//
//int main()//星期几
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("zhouyi\n");
//		break;
//	case 2:
//		printf("zhouer\n");
//		break;
//	case 3:
//		printf("zhousan\n");
//		break;
//	case 4:
//		printf("zhousi\n");
//		break;
//	case 5:
//		printf("zhouwu\n");
//		break;
//	case 6:
//		printf("zhoului\n");
//		break;
//	case 7:
//		printf("zhouri\n");
//		break;
//	}
//}

int main()//早八
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("早八\n");
		break;
	case 6:
	case 7:
		printf("睡觉\n");
		break;
	}
}