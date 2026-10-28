#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+1
#define COLS COL+1
#define NUM 10


void InitBoard(char arr[ROWS][COLS], int r, int c, char a);
void ShowBoard(char arr[ROWS][COLS], int r, int c);
void SetMine(char arr[ROWS][COLS], int r, int c);
void PlayBoard(char display_board[ROWS][COLS], char set_board[ROWS][COLS], int r, int c);