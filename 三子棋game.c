#define _CRT_SECURE_NO_WARNINGS
#include"������.h"
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
		printf("���Ӯ\n");

	else if (ret == '#')
		printf("����Ӯ\n");

	else
		printf("ƽ��\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("��ѡ��>��");

		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");

		default:
			printf("���������������\n");
			break;
		}
	} while (input);
	return 0;
}