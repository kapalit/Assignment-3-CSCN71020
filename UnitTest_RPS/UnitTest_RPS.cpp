#include "pch.h"
#include "CppUnitTest.h"
extern "C" char* rockPaperScissors(const char* player1, const char* player2);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestPlayer1Wins)
		{
			char* result = rockPaperScissors("Rock", "Scissors");
			Assert::AreEqual("Player1", result); // Player1 should win this case
		}
		
		TEST_METHOD(TestPlayer2Wins)
		{
			char* result = rockPaperScissors("Rock", "Paper");
			Assert::AreEqual("Player2", result); // Player2 should win this case
		}
		
		TEST_METHOD(TestDraw)
		{
			char* result = rockPaperScissors("Scissors", "Scissors");
			Assert::AreEqual("Draw", result); // This should end in a draw
		}


	};
}
