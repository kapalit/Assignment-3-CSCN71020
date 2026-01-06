# CSCN71020 Assignment 3 - Rock Paper Scissors

A C implementation of the classic Rock Paper Scissors game with comprehensive unit testing.

## 📋 Project Overview

This is Assignment 3 for CSCN71020, implementing a Rock Paper Scissors game logic with the following features:
- Game logic for determining winners
- Input validation for valid moves
- Comprehensive unit test coverage
- Support for draw scenarios

## 🎮 Game Rules

- **Rock** beats **Scissors**
- **Scissors** beats **Paper** 
- **Paper** beats **Rock**
- Same moves result in a **Draw**
- Invalid inputs return **"Invalid"**

## 🚀 Getting Started

### Prerequisites
- Visual Studio 2019 or later
- C/C++ compiler support
- Microsoft Unit Testing Framework (for tests)

### Building the Project
1. Open `Assignment-3.sln` in Visual Studio
2. Build the solution (Ctrl+Shift+B)
3. Run tests via Test Explorer

## 💻 Usage

The main function `rockPaperScissors()` takes two string parameters:

```c
char* result = rockPaperScissors("Rock", "Scissors");
// Returns: "Player1" (Rock beats Scissors)

char* result = rockPaperScissors("Paper", "Rock");  
// Returns: "Player1" (Paper beats Rock)

char* result = rockPaperScissors("Rock", "Rock");
// Returns: "Draw" (Same moves)

char* result = rockPaperScissors("Rock", "InvalidMove");
// Returns: "Invalid" (Invalid input)
```

## 📁 Project Structure

```
Assignment-3-CSCN71020/
├── Assignment-3.sln              # Visual Studio solution
├── R_P_S/                        # Main game logic
│   ├── main.c                    # Rock Paper Scissors implementation
│   └── R_P_S.vcxproj            # Project file
├── UnitTest_RPS/                 # Unit test project
│   ├── UnitTest_RPS.cpp         # Test implementations
│   ├── pch.h                    # Precompiled header
│   ├── pch.cpp                  # Precompiled source
│   └── UnitTest_RPS.vcxproj     # Test project file
├── .gitignore                   # Git ignore rules
├── .gitattributes              # Git attributes
└── README.md                   # This file
```

## 🧪 Unit Tests

The project includes comprehensive unit tests covering:

### Test Cases
- **TestPlayer1Wins**: Player1 wins scenarios (Rock vs Scissors, etc.)
- **TestPlayer2Wins**: Player2 wins scenarios (Paper vs Rock, etc.)
- **TestDraw**: Draw scenarios (same moves)
- **TestInvalidInput**: Invalid input handling

### Return Values
- `"Player1"` - Player 1 wins
- `"Player2"` - Player 2 wins  
- `"Draw"` - Tie game
- `"Invalid"` - Invalid input provided

## 🔧 Technical Details

### Function Signature
```c
char* rockPaperScissors(const char* player1, const char* player2);
```

### Valid Inputs
- `"Rock"`
- `"Paper"`
- `"Scissors"`

### Input Validation
- Case-sensitive string matching
- Both players must provide valid moves
- Any invalid input returns `"Invalid"`

### Game Logic
1. Validate both player inputs
2. Check for draw (identical moves)
3. Apply Rock Paper Scissors rules
4. Return appropriate winner

## 🎯 Learning Objectives

This assignment demonstrates:
- String manipulation in C
- Conditional logic implementation
- Input validation techniques
- Unit testing methodology
- Function design and modularity

## 👨‍💻 Author

**Mohamed Al-Husainawi**
- GitHub: [@kapalit](https://github.com/kapalit)
- LinkedIn: [Mohamed Al-Husainawi](https://www.linkedin.com/in/mohamed-al-husainawi)

## 📝 Course Information

- **Course:** CSCN71020
- **Assignment:** Assignment 3
- **Language:** C/C++
- **IDE:** Visual Studio
- **Testing:** Microsoft Unit Testing Framework

---

*This project is part of academic coursework and is intended for educational purposes.*
