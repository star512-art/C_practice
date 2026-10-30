#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define NUM_MINE 10

//初始化函数
void InitBoard(char arr[ROWS][COLS], int r, int c,char a);
//打印函数
void DisplayBoard(char arr[ROWS][COLS], int r, int c);
//埋雷函数
void SetMine(char arr[ROWS][COLS], int r, int c);
//找雷函数
void FindMine(char showboard[ROWS][COLS],char setboard[ROWS][COLS],int x,int y);