#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//设置随机数
int SetNum()
{
	int num = 0;
	num = rand() % NUM + 1;
	printf("%d", num);
	return num;
}

//玩家玩游戏
 void Judge(int num, int random,int* p)
{

    if (num > random)
	{
		printf("猜大了\n");
		(*p)++;
		printf("你已经猜了%d次\n", *p);
	}
	
	else if (num < random)
	{
		printf("猜小了\n");
		(*p)++;
		printf("你已经猜了%d次\n", *p);
	}
	else
	{
		printf("猜对了，数字是%d\n", random);
	}
}
void Play(int random)
{
	int num = 0;
	int count = 0;
	while (count < COUNT)
	{
		printf("请输入你要猜的数字:");
		scanf("%d", &num);

		Judge(num, random, &count);
		if (num == random)
			break;
	}
	
	if (count == 5)
	{
		printf("猜的次数达到%d次，游戏失败\n",COUNT);
		printf("数字是%d\n", random);
	}
}


//
//
//static Judge(int random,int num)
//{
//	int counts = 0;
//	if (num > random)
//	{
//		printf("猜大了\n");
//		counts = 1;
//	}
//	else if (num < random)
//	{
//		printf("猜小了\n");
//		counts = 1;
//	}
//	else
//	{
//		printf("猜对了，这个数字是%d\n", random);
//		
//	}
//
//	return counts;
//
//}
//
//void Play(int random)
////{
////	int count = 0;
////	int num = 0;
////
////	while (count<COUNT)
////	{
////	printf("请输入你要猜的数：");
////	scanf("%d", &num);
////
////	count+=Judge(random, num);
////	printf("你已经猜了%d次\n", count);
////     
////	if (num == random)
////		break;
////    }
////
////	if (num!=random)
////	{
////		printf("猜够5次，已出局\n");
////	}
////}