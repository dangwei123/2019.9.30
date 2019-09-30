#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*******************\n");
	printf("******1.进入游戏***\n");
	printf("******0.退出游戏***\n");
	printf("*******************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][ROW] = { 0 };
	Initboard(board,ROW,COL);
	Printboard(board, ROW,COL);
	while (1)
	{
		Playermove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		//每次移动完后都要判断是否有一方胜利
		if (ret != ' ')
		{
			break;
		}
		Printboard(board, ROW, COL);//打印棋盘
		Computermove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		Printboard(board, ROW, COL);
	}
	if (ret == 'x')
	{
		printf("玩家获胜\n");
	}
	if (ret == '0')
	{
		printf("电脑获胜\n");
	}
	if (ret == 'Q')
	{
		printf("平局\n");
	}
	
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入您的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("进入游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入不合法，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
     
}