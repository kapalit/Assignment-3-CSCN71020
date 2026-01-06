/*
 * CSCN71020 Assignment 3 - Rock Paper Scissors Unit Tests
 * Author: Mohamed Al-Husainawi
 * Description: Comprehensive unit tests for Rock Paper Scissors game logic
 */

#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* rockPaperScissors(const char* player1, const char* player2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsUnitTest
{
    TEST_CLASS(RockPaperScissorsUnitTest)
    {
    public:

        // Test Player1 winning scenarios
        TEST_METHOD(TestPlayer1WinsRockVsScissors)
        {
            char* result = rockPaperScissors("Rock", "Scissors");
            Assert::AreEqual("Player1", result);
        }

        TEST_METHOD(TestPlayer1WinsScissorsVsPaper)
        {
            char* result = rockPaperScissors("Scissors", "Paper");
            Assert::AreEqual("Player1", result);
        }

        TEST_METHOD(TestPlayer1WinsPaperVsRock)
        {
            char* result = rockPaperScissors("Paper", "Rock");
            Assert::AreEqual("Player1", result);
        }

        // Test Player2 winning scenarios
        TEST_METHOD(TestPlayer2WinsPaperVsRock)
        {
            char* result = rockPaperScissors("Rock", "Paper");
            Assert::AreEqual("Player2", result);
        }

        TEST_METHOD(TestPlayer2WinsRockVsScissors)
        {
            char* result = rockPaperScissors("Scissors", "Rock");
            Assert::AreEqual("Player2", result);
        }

        TEST_METHOD(TestPlayer2WinsScissorsVsPaper)
        {
            char* result = rockPaperScissors("Paper", "Scissors");
            Assert::AreEqual("Player2", result);
        }

        // Test draw scenarios
        TEST_METHOD(TestDrawRockVsRock)
        {
            char* result = rockPaperScissors("Rock", "Rock");
            Assert::AreEqual("Draw", result);
        }

        TEST_METHOD(TestDrawPaperVsPaper)
        {
            char* result = rockPaperScissors("Paper", "Paper");
            Assert::AreEqual("Draw", result);
        }

        TEST_METHOD(TestDrawScissorsVsScissors)
        {
            char* result = rockPaperScissors("Scissors", "Scissors");
            Assert::AreEqual("Draw", result);
        }

        // Test invalid input scenarios
        TEST_METHOD(TestInvalidPlayer1Input)
        {
            char* result = rockPaperScissors("InvalidMove", "Rock");
            Assert::AreEqual("Invalid", result);
        }

        TEST_METHOD(TestInvalidPlayer2Input)
        {
            char* result = rockPaperScissors("Rock", "InvalidMove");
            Assert::AreEqual("Invalid", result);
        }

        TEST_METHOD(TestBothPlayersInvalidInput)
        {
            char* result = rockPaperScissors("InvalidMove1", "InvalidMove2");
            Assert::AreEqual("Invalid", result);
        }

        TEST_METHOD(TestEmptyStringInput)
        {
            char* result = rockPaperScissors("", "Rock");
            Assert::AreEqual("Invalid", result);
        }

        TEST_METHOD(TestCaseSensitiveInput)
        {
            char* result = rockPaperScissors("rock", "Rock");  // lowercase 'rock'
            Assert::AreEqual("Invalid", result);
        }
    };
}
