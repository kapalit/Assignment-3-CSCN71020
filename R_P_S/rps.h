/*
 * CSCN71020 Assignment 3 - Rock Paper Scissors
 * Function declarations and constants
 * Author: Mohamed Al-Husainawi
 */

#pragma once

/**
 * Determines the winner of a Rock Paper Scissors game
 * @param player1 First player's move ("Rock", "Paper", or "Scissors")
 * @param player2 Second player's move ("Rock", "Paper", or "Scissors")
 * @return "Player1" if player1 wins, "Player2" if player2 wins, 
 *         "Draw" for tie, "Invalid" for invalid input
 */
char* rockPaperScissors(const char* player1, const char* player2);

// Game constants
#define ROCK "Rock"
#define PAPER "Paper"
#define SCISSORS "Scissors"

// Return value constants
#define PLAYER1_WINS "Player1"
#define PLAYER2_WINS "Player2"
#define DRAW_RESULT "Draw"
#define INVALID_INPUT "Invalid"
