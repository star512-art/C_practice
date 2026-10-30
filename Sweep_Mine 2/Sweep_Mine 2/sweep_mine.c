#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//打印菜单
void Menu()
{
	printf("------------------\n");
	printf("-------1:play-----\n");
	printf("-------0:quit-----\n");
	printf("------------------\n");
}
//游戏体
void Game()
{
	char setboard[ROWS][COLS];
	char showboard[ROWS][COLS];
	//二维数组的初始化
	InitBoard(setboard, ROWS, COLS,'0');
	InitBoard(showboard, ROWS, COLS, '*');
	//打印二维数组
	//DisplayBoard(setboard, ROW, COL);
	DisplayBoard(showboard, ROW, COL);
	//埋雷
	SetMine(setboard, ROW, COL);
	//DisplayBoard(setboard, ROW, COL);
	//开始玩游戏
	FindMine(showboard, setboard, ROW, COL);

}


int main()
{
	int option = 0;
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("请输入你的选择：");
		scanf("%d", &option);
		//判断
		switch (option)
		{
		case 1:
			printf("开始游戏\n");
			Game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
	} while (option);

	return 0;
}