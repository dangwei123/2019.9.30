#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*******************\n");
	printf("******1.������Ϸ***\n");
	printf("******0.�˳���Ϸ***\n");
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
		//ÿ���ƶ����Ҫ�ж��Ƿ���һ��ʤ��
		if (ret != ' ')
		{
			break;
		}
		Printboard(board, ROW, COL);//��ӡ����
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
		printf("��һ�ʤ\n");
	}
	if (ret == '0')
	{
		printf("���Ի�ʤ\n");
	}
	if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
	
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("����������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("���벻�Ϸ�������������\n");
			break;
		}
	} while (input);
	return 0;
     
}