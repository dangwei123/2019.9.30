#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//初始化棋盘
void Initboard(char board[][ROW], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印棋盘
void Printboard(char board[][ROW], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			
		}
		printf("\n");
	}
}
//玩家移动
void Playermove(char board[][ROW], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家请输入你的坐标：");
		scanf("%d %d", &x, &y);
		//首先确保坐标没有超出棋盘范围
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			//该点要为空
			if (board[x - 1][y - 1] == ' ')//玩家输入的横纵坐标对应着棋盘应该都减少1
			{
				board[x - 1][y - 1] = 'x';
				break;
			}
			else
			{
				printf("该位置已有棋子，请重新输入\n");
			}
		}
		else
		{
			printf("输入超出棋盘，请重新输入\n");
		}
	}
}
//电脑移动
void Computermove(char board[][ROW], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % 3;//产生随机数
		y = rand() % 3;
		if (board[x][y] == ' ')
		{
			board[x][y] = '0';
			break;
		}
	}
}
//判断是否棋盘下满  如果满了返回1，否则返回0
int Isfull(char board[][ROW], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
//判断是否有一方胜利
char Iswin(char board[][ROW], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//竖着三个相同
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i]
			&& board[0][i] != ' ')
		{
			return board[0][i];
		}
		//横着三个相同
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]
			&& board[i][0] != ' ')
		{
			return board[i][0];
		}
		//斜着三个相同
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2]
			&& board[0][0] != ' ')
		{
			return board[0][0];
		}
		//斜着三个相同
		if (board[2][2] == board[1][1] && board[1][1] == board[2][0]
			&& board[2][2] != ' ')
		{
			return board[2][2];
		}
		//如果满了还没有结束则平局
		if (Isfull(board,ROW,COL))
		{
			return 'Q';
		}
	}
	return ' ';
}