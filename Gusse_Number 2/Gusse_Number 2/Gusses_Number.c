#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("-------------------------\n");
	printf("----------1:play---------\n");
	printf("----------0:quit---------\n");
	printf("-------------------------\n");
}

//游戏内容
void game()
{
	int random = 0;
	//生成随机数
	random=SetNum();
	//玩家进行游戏
	Play(random);
}
int main()
{
	int option = 0;
	srand((unsigned int)time(NULL));

	do
	{
		//打印菜单
		menu();
		printf("请输入你的选择:");
		scanf("%d", &option);
	
		switch (option)
		{
		case 1:
			printf("开始游戏\n");
			//玩游戏的内容
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (option);
}