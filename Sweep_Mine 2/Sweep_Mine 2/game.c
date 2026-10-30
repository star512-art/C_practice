#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//初始化函数
void InitBoard(char arr[ROWS][COLS], int r, int c,char a)
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
void DisplayBoard(char arr[ROWS][COLS], int r, int c)
{
	int a = 0;
	//打印列标
	for (a = 0; a < 10; a++)
	{
		printf("%d ", a);
	}
	printf("\n");

	for (int i = 1; i <=r; i++)
	{
		//打印行标
		printf("%d ", i);
		for (int n = 1; n <=c; n++)
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
	int x = 0;
	int y = 0;
	int count = 0;
	//生成1到9的随机数
	while (count < NUM_MINE)
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count++;
		}
	}
}
static int StatMine(char setboard[ROWS][COLS],int x, int y)
{
	int count = 0;
	for (int i = -1; i <= 1; i++)
	{
		for (int u = -1; u <= 1; u++)
		{
			if (setboard[x + i][y + u] == '1')
				count++;
		}
	}
	return count;
}

//找雷
void FindMine(char showboard[ROWS][COLS], char setboard[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while (count<ROW*ROW-NUM_MINE)
	{	//玩家输入自己想输入的坐标
		printf("请输入你要找的坐标：");
		scanf("%d%d", &x, &y);
		//判断坐标的合法性
		if ((x >= 1 && x <= r) && (y >= 1 && y <= c))
		{
			if (showboard[x][y] == '*')
			{
				if (setboard[x][y] == '0')
				{
					int num = 0;
					num = StatMine(setboard,x, y);
					showboard[x][y] = (char)(num + '0');
					DisplayBoard(showboard, r, c);
					count++;
				}
				else
				{
					printf("这是雷，被炸死，游戏结束\n");
					DisplayBoard(setboard, r, c);
					break;
				}
			}
			else
			{
				printf("该坐标已被判断过\n");
			}

		}
		else
			printf("坐标非法，请重新输入坐标\n");
	}
	if (count == ROW * ROW - NUM_MINE)
	{
		printf("恭喜你，游戏通关\n");
		DisplayBoard(setboard, r, c);
	}
}