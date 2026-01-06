# Changelog

All notable changes to this project will be documented in this file.

## [1.1.0] - 2026-01-05

### Added
- Comprehensive README.md with detailed project documentation
- Cross-platform Makefile for building outside Visual Studio
- Proper code documentation and function comments
- Comprehensive unit test suite with 14 test cases
- Header documentation explaining function parameters and return values

### Fixed
- Fixed inconsistent return value capitalization:
  - "invalid" → "Invalid" 
  - "player1" → "Player1"
  - "player2" → "Player2"
- Improved code formatting and structure
- Added proper function documentation with parameter descriptions

### Enhanced Testing
- **Expanded from 4 to 14 unit tests** for comprehensive coverage:
  - 3 Player1 winning scenarios (Rock vs Scissors, Scissors vs Paper, Paper vs Rock)
  - 3 Player2 winning scenarios (all reverse cases)
  - 3 Draw scenarios (Rock vs Rock, Paper vs Paper, Scissors vs Scissors)
  - 5 Invalid input scenarios (invalid player1, invalid player2, both invalid, empty string, case sensitivity)

### Code Quality Improvements
- Added detailed function documentation with JSDoc-style comments
- Improved code organization and readability
- Better variable naming and structure
- Consistent formatting throughout

### Documentation
- Complete project overview with game rules
- Detailed usage examples and function signatures
- Technical implementation details
- Comprehensive test case documentation
- Learning objectives and course information

## [1.0.0] - Original

### Added
- Basic Rock Paper Scissors game logic
- Input validation for valid moves
- Basic unit test structure
- Visual Studio project setup
- Core game functionality (Rock beats Scissors, etc.)
