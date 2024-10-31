#include <string.h>

char* rockPaperScissors(const char* player1, const char* player2) {

	int valid_player1 = strcmp(player1, "Rock") == 0 || strcmp(player1, "Paper") == 0 || strcmp(player1, "Scissors") == 0;

	int valid_player2 = strcmp(player2, "Rock") == 0 || strcmp(player2, "Paper") == 0 || strcmp(player2, "Scissors") == 0;

	if (!valid_player1 || !valid_player2) {
		return "invalid";
	}

	

}