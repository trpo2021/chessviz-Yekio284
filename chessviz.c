#include <stdio.h>
#include <ctype.h>

int main() {

	char chessfield[9][9] = {" "};
	int i, j;

	printf("\nNotation guide:\nr - Rook\np - Pawn\nb - Bishop\nk - Knight\nK - King\nQ - Queen\n\n");
	printf("Starting positions of chess pieces:\n\n");

	chessfield[0][1] = 'A';
	chessfield[0][2] = 'B';
	chessfield[0][3] = 'C';
	chessfield[0][4] = 'D';
	chessfield[0][5] = 'E';
	chessfield[0][6] = 'F';
	chessfield[0][7] = 'G';
	chessfield[0][8] = 'H';

	j = 0;

	for (i = 1; i <= 8; i++)
		chessfield[i][j] = i;



	for (i = 1; i < 9; i++) {
		for (j = 1; j < 9; j++) {
			if ((i == 2) || (i == 7))
				chessfield[i][j] = 'p';
			if (((i == 1) && (j == 1)) || ((i == 1) && (j == 8)) || ((i == 8) && (j == 1)) || ((i == 8) && (j == 8))) 
				chessfield[i][j] = 'r';
			if (((i == 1) && (j == 2)) || ((i == 1) && (j == 7)) || ((i == 8) && (j == 2)) || ((i == 8) && (j == 7)))
				chessfield[i][j] = 'k';
			if (((i == 1) && (j == 3)) || ((i == 1) && (j == 6)) || ((i == 8) && (j == 3)) || ((i == 8) && (j == 6)))
				chessfield[i][j] = 'b';
			if (((i == 1) && (j == 4)) || ((i == 8) && (j == 4)))
				chessfield[i][j] = 'K';
			if (((i == 1) && (j == 5)) || ((i == 8) && (j == 5)))
				chessfield[i][j] = 'Q';
		}
	}


	for (i = 0; i < 9; i++) {
		for(j = 0; j < 9; j++) {
			if (isalpha(chessfield[i][j]))
				printf("%c ", chessfield[i][j]);
			else if (chessfield[i][j] == ' ')
				printf("  ");
			else if (chessfield[i][j] == 0)
				printf(" ");
			else
				printf("%d|", chessfield[i][j]);
		}

		printf("\n");

		if (i == 0) {
                        printf("  ");
			for (int k = 1; k < 9; k++)
                                printf("- ");
			printf("\n");
		}
	}

	return 0;

}
