#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//
//void menu()
//{
//	printf("----------游戏菜单----------\n");
//	printf("------选项1：开始游戏--------\n");
//	printf("------选项0：退出游戏--------\n");
//	printf("------------------------------\n");
//	printf("请输入你的选择：");
//}
//void Game()
//{
//	int computer = 0;
//	int player = 0;
//	//电脑生成随机数
//	computer = rand()%100+1;
//	//开始猜数字
//	printf("请输入你要猜的数字:");
//	do
//	{
//		scanf("%d", &player);
//		if (player < computer)
//			printf("猜小了\n");
//		else if (player > computer)
//			printf("猜大了\n");
//		else
//			printf("恭喜你，猜对了\n");
//	} while (player != computer);
//}
//
//int main()
//{
//	int option = 0;//玩家的选择
//	srand(time(NULL));//只做一次种子规定
//	//页面
//	do
//	{
//		menu();
//		//输入
//		scanf("%d", &option);
//		//判断
//		switch (option)
//		{
//		case 1: //在这里开始进行猜数字的游戏
//			printf("开始游戏\n");
//			Game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//		}
//	} while (option); //n=1时会再进行一次，还可以继续玩
//
//	return 0;
//}


//
//int main()//生成随机数；
//{
//	srand(time(NULL));//如果可以让里面的参数是一个不断变化的参数呢;
//	//rand的返回值，就是一个伪随机数
//	printf("%d\n", rand()%100+1);//这个数字，就是固定的数字，比如41，就一直是41
//	//如果我们要界定随机数的范围呢，1到100
//	//a%100的余数就是0到99然后再加1，就是0到100
//}

//int main()
//{
//	int r = 0;
//	srand(2);
//	r = rand();
//	printf("%d\n", r);
//}
//
//int main() //不规定种子，直接用,这样每次生成的数，在程序启动再启动，都是一样的
//{
//	int r = 0;
//	int i = 0;
//	for (i = 1; i < 4; i++)
//	{
//		r = rand()%100+1;
//		printf("%d\n", r);
//	}
//}

//
//int main() //规定种子，在循环中规定
//{
//	int r = 0;
//	int i = 0;
//	for (i = 1; i < 4; i++)
//	{    
//		srand(time(NULL));
//		r = rand() % 100 + 1;
//		printf("%d\n", r);//输出的数都是一样的，每一次调用srand时都会重新规定序列，每次循环之间的间隔太小，就一直是同一个序列
//	}
//}
////
//int main()
//{
//	/*for (int i = 1; i < 6; i++)
//	{
//		printf("%d\n", rand());
//	}*/
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//}
//
//void menu()
//{
//	printf("----------游戏菜单----------\n");
//	printf("------选项1：开始游戏--------\n");
//	printf("------选项0：退出游戏--------\n");
//	printf("------------------------------\n");
//	printf("请输入你的选择：");
//}
//void Game()
//{
//	int computer = 0;
//	int player = 0;
//	//电脑生成随机数
//	computer = rand() % 100 + 1;
//	//开始猜数字
//	printf("请输入你要猜的数字:");
//	do
//	{
//		scanf("%d", &player);
//		if (player < computer)
//			printf("猜小了\n");
//		else if (player > computer)
//			printf("猜大了\n");
//		else
//			printf("恭喜你，猜对了\n");
//	} while (player != computer);
//}
//
//int main()
//{
//	int option = 0;//玩家的选择
//	
//	//页面
//	do
//	{
//		menu();
//		//输入
//		scanf("%d", &option);
//		//判断
//		switch (option)
//		{
//		case 1: //在这里开始进行猜数字的游戏
//			printf("开始游戏\n");
//			Game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//		}
//	} while (option); //n=1时会再进行一次，还可以继续玩
//
//	return 0;
//}
//

//
//void game()//游戏过程
//{
//    int computer = 0;
//    int player = 0;
//    //随机数字的生成
//    computer = rand() % 100 + 1;
//    printf("请输入数字：");
//    //判断+循环
//    while (1) //死循环
//    {
//        scanf("%d", &player);
//        if (player > computer)
//            printf("猜大了\n");
//        else if (player < computer)
//            printf("猜小了\n");
//        else
//        {
//            printf("猜对了\n");   
//                break; //break要写在花括号里，不然就算你输入的数字不对，也会直接break
//        }
//    }
//
//}
//void menu() //打印菜单
//{
//    printf("-------游戏菜单-------\n");
//    printf("-----选项1：开始游戏---\n");
//        printf("-----选项0：退出游戏---\n");
//            printf("---------------------\n");
//}
//
//int main()
//{   
//    int option = 0;
//    srand(time(NULL));
//    do
//    {
//        //调用函数
//        menu();
//        //玩家输入
//        printf("请输入你的选择：");
//        scanf("%d", &option);
//        //判断
//        switch (option)
//        {
//        case 1:
//            printf("开始游戏\n");
//            game();//调用
//            break;
//        case 2:
//            printf("退出游戏\n");
//            break;
//        }
//    } while (option);
//
//        return 0;
//}




void game()//游戏过程
{
    int computer = 0;
    int player = 0;
    int count = 0;
    //随机数字的生成
    computer = rand() % 100 + 1;
    //判断+循环
    while (1) //死循环
    {
        scanf("%d", &player);
        count++;
        printf("你已经猜了%d次 ", count);//输出你的猜的次数
        if (player > computer)
            printf("猜大了\n");
        else if (player < computer)
            printf("猜小了\n");
        else
        {
            printf("猜对了\n");
            break; //break要写在花括号里，不然就算你输入的数字不对，也会直接break
        }
        if (count == 5)
        {
            printf("已经达到5次上限，本关失败\n");
            printf("要猜的数字是%d\n", computer);
            break;
        }
    }

}
void menu() //打印菜单
{
    printf("-------游戏菜单-------\n");
    printf("-----选项1：开始游戏---\n");
    printf("-----选项0：退出游戏---\n");
    printf("---------------------\n");
}

int main()
{
    int option = 0;
    srand(time(NULL));
    do
    {
        
        //调用函数
        menu();
        //玩家输入
        printf("请输入你的选择：");
        scanf("%d", &option);
        //判断
        switch (option)
        {
        case 1:
            printf("开始游戏\n");
            printf("请输入你要猜的数字:");
            game();//调用
            break;
        case 0:
            printf("退出游戏\n");
            break;
        }
    } while (option);

    return 0;
}