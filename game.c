#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//��ʼ������
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
//��ӡ����
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
//����ƶ�
void Playermove(char board[][ROW], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("���������������꣺");
		scanf("%d %d", &x, &y);
		//����ȷ������û�г������̷�Χ
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			//�õ�ҪΪ��
			if (board[x - 1][y - 1] == ' ')//�������ĺ��������Ӧ������Ӧ�ö�����1
			{
				board[x - 1][y - 1] = 'x';
				break;
			}
			else
			{
				printf("��λ���������ӣ�����������\n");
			}
		}
		else
		{
			printf("���볬�����̣�����������\n");
		}
	}
}
//�����ƶ�
void Computermove(char board[][ROW], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % 3;//���������
		y = rand() % 3;
		if (board[x][y] == ' ')
		{
			board[x][y] = '0';
			break;
		}
	}
}
//�ж��Ƿ���������  ������˷���1�����򷵻�0
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
//�ж��Ƿ���һ��ʤ��
char Iswin(char board[][ROW], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//����������ͬ
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i]
			&& board[0][i] != ' ')
		{
			return board[0][i];
		}
		//����������ͬ
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]
			&& board[i][0] != ' ')
		{
			return board[i][0];
		}
		//б��������ͬ
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2]
			&& board[0][0] != ' ')
		{
			return board[0][0];
		}
		//б��������ͬ
		if (board[2][2] == board[1][1] && board[1][1] == board[2][0]
			&& board[2][2] != ' ')
		{
			return board[2][2];
		}
		//������˻�û�н�����ƽ��
		if (Isfull(board,ROW,COL))
		{
			return 'Q';
		}
	}
	return ' ';
}