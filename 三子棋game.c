#define _CRT_SECURE_NO_WARNINGS
#include"三子棋.h"
void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisPlayBoard(board, ROW, COL);

	char ret = 0;

	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisPlayBoard(board, ROW, COL);

		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		ComputerMove(board, ROW, COL);
		DisPlayBoard(board, ROW, COL);

		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

	}

	if (ret == '*')
		printf("玩家赢\n");

	else if (ret == '#')
		printf("电脑赢\n");

	else
		printf("平局\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("请选择>：");

		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");

		default:
			printf("输入错误，重新输入\n");
			break;
		}
	} while (input);
	return 0;
}