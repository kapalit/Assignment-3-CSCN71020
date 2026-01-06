/*
 * CSCN71020 Assignment 3 - Rock Paper Scissors
 * Author: Mohamed Al-Husainawi
 * Description: Implementation of Rock Paper Scissors game logic
 */

#include <string.h>

/**
 * Determines the winner of a Rock Paper Scissors game
 * @param player1 First player's move ("Rock", "Paper", or "Scissors")
 * @param player2 Second player's move ("Rock", "Paper", or "Scissors")
 * @return "Player1" if player1 wins, "Player2" if player2 wins, 
 *         "Draw" for tie, "Invalid" for invalid input
 */
char* rockPaperScissors(const char* player1, const char* player2) {
    // Validate player1 input
    int valid_player1 = strcmp(player1, "Rock") == 0 ||
                       strcmp(player1, "Paper") == 0 ||
                       strcmp(player1, "Scissors") == 0;

    // Validate player2 input
    int valid_player2 = strcmp(player2, "Rock") == 0 ||
                       strcmp(player2, "Paper") == 0 ||
                       strcmp(player2, "Scissors") == 0;

    // Return "Invalid" if either player has invalid input
    if (!valid_player1 || !valid_player2) {
        return "Invalid";
    }

    // Check for draw (same moves)
    if (strcmp(player1, player2) == 0) {
        return "Draw";
    }
    
    // Check Player1 winning conditions
    // Rock beats Scissors, Scissors beats Paper, Paper beats Rock
    else if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
             (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0) ||
             (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0)) {
        return "Player1";
    }
    
    // All other cases: Player2 wins
    else {
        return "Player2";
    }
}