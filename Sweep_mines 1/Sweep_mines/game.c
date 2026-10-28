#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//初始化函数
void InitBoard(char arr[ROWS][COLS], int r, int c, char a)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int n = 0;
		for (n = 0; n < c; n++)
		{
			arr[i][n] = a;
		}
	}

}

//打印函数
void ShowBoard(char arr[ROWS][COLS], int r, int c)
{
	//打印列标
	int u = 0;
	for (u = 0; u <= r; u++)
	{
		printf("%d ", u);
	}
	printf("\n");
	int i = 1;
	for (i = 1; i <= r; i++)
	{
		printf("%d ", i);
		int n = 1;
		for (n = 1; n <= c; n++)
		{
			printf("%c ", arr[i][n]);
		}
		printf("\n");
	}
	printf("\n");
}

//埋雷
void SetMine(char arr[ROWS][COLS], int r, int c)
{
	int InBox1 = 0;
	int InBox2 = 0;
	int count = 0;
	while (count<NUM)
	{
		InBox1 = rand() % 9 + 1;
		InBox2 = rand() % 9 + 1;
		if (arr[InBox1][InBox2] == '0')
		{
			arr[InBox1][InBox2] = '1';
			count++;
		}
	}
	
}

int StatMine(char arr[ROWS][COLS], int x, int y)
{
	int i = 0;
	int n = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (n = y - 1; n <= y + 1; n++)
		{
			if (arr[i][n] == '1')
				count++;
		}
	}
	return count;
}

void PlayBoard(char display_board[ROWS][COLS], char set_board[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int count = 0;
	//玩家输入自己想要输入的坐标
	while (count<r*r-NUM)
	{
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);
		if ((0<x&&x<= 9) && (0<y&& y<= 9))
		{
			if (set_board[x][y] == '0')
			{
				char num = 0;
				//统计四周有雷的个数
				num=StatMine(set_board, x, y);
				display_board[x][y] = (char)('0' + num);
				ShowBoard(display_board, r, c);
				count++;
			}
			else
			{
				printf("游戏结束，你被炸死\n");
				ShowBoard(set_board,r,c);
				break;
			}

		}
		else
			printf("输入错误，重新输入\n");
	}
	if (count == r*r-NUM)
	{
		printf("恭喜你，顺利通关\n");
		ShowBoard(set_board, r, c);
	}
}
