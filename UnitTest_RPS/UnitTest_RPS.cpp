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
			Assert::AreEqual("Player1", result); // test case of Player1 winning 
		}

	};
}
