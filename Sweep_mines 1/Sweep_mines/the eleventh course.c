#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//打印菜单
void menu()
{
	printf("-------------------\n");
	printf("-------1:play------\n");
	printf("-------0:quit------\n");
	printf("-------------------\n");
}
//游戏框架
void game()
{
	char set_board[ROWS][COLS];
	char display_board[ROWS][COLS];
	//对两个数组进行初始化
	InitBoard(set_board, ROWS, COLS, '0');
	InitBoard(display_board, ROWS, COLS, '*');
	//打印数组
	//ShowBoard(set_board, ROW, COL);
	ShowBoard(display_board, ROW, COL);
	//埋雷
	SetMine(set_board, ROW, COL);
	ShowBoard(set_board, ROW, COL);
	//玩家开始玩
	PlayBoard(display_board,set_board,ROW,COL);

}

int main()
{
	int option = 0;
	//设置种子
	srand((unsigned int)time(NULL));
	do
	{
		//调用打印菜单函数
		menu();
		printf("请输入你的选择：");
		scanf("%d", &option);
		
		switch (option)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，重新输入\n");
			break;

		}

	} while (option);

}