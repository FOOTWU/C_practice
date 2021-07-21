//
// Created by wmk03 on 2021/5/28.
//
#include <stdio.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
#ifndef C_PRACTICE_GAME_H
#define C_PRACTICE_GAME_H
#include <stdlib.h>
#include <time.h>



void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);
void DisplayBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char board[ROWS][COLS],int row,int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
#endif //C_PRACTICE_GAME_H
