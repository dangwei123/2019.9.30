#ifndef _GAME_H_
#define _GAME_H_

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void Initboard(char board[][ROW], int row, int col);
void Printboard(char board[][ROW], int row, int col);
void Playermove(char board[][ROW], int row, int col);
void Computermove(char board[][ROW], int row, int col);
char Iswin(char board[][ROW], int row, int col);

#endif