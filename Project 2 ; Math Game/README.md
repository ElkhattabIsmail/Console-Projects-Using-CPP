This is a Math Quiz Game implemented in C++. The game generates random math questions based on user-selected difficulty levels and operation types.
It provides an interactive way to practice basic arithmetic operations (addition, subtraction, multiplication, and division) while tracking the player's performance.

## Features
Customizable Quiz:

Choose the number of questions.

Select the difficulty level: Easy, Medium, Hard, or Mixed.

Choose the operation type: Addition, Subtraction, Multiplication, Division, or Mixed.

Dynamic Question Generation:

Questions are generated randomly based on the selected difficulty and operation type.

## Immediate Feedback:

The game provides instant feedback on whether the player's answer is correct or incorrect.

Displays the correct answer if the player's answer is wrong.

## Score Tracking:

Tracks the number of correct and incorrect answers.

Determines if the player passed or failed the quiz based on their performance.

## Interactive UI:

Changes the console color to green for correct answers and red for incorrect answers.

Plays an alert sound for incorrect answers.

## Replayability:

Allows the player to replay the game as many times as they want.

Technologies Used
C++: The core programming language used for the game logic.

## Structured Programming:

Uses enums, structs, and functions to organize the code effectively.

How It Works
Game Setup:

The player is prompted to choose:

The number of questions.

The difficulty level (Easy, Medium, Hard, or Mixed).

The operation type (Addition, Subtraction, Multiplication, Division, or Mixed).

Question Generation:

Based on the selected difficulty and operation type, the game generates random math questions.

Player Interaction:

The player answers each question, and the game provides immediate feedback.

Result Calculation:

After all questions are answered, the game calculates the number of correct and incorrect answers.

Determines if the player passed or failed the quiz.

Replay Option:

The player can choose to play again or exit the game.

Code Structure
Enums:

enQuestionsLevel: Defines the difficulty levels (Easy, Medium, Hard, Mixed).

enOperationType: Defines the operation types (Addition, Subtraction, Multiplication, Division, Mixed).

Structs:

stQuestion: Represents a single question with its properties (numbers, operation type, correct answer, etc.).

stQuizz: Represents the entire quiz with a list of questions, scores, and results.

## Functions:

RandomNumber: Generates a random number within a specified range.

GetOpTypeSymbol: Returns the symbol for the selected operation type.

GenerateQuestion: Generates a random question based on the selected difficulty and operation type.

AskAndCorrectQuestionListAnswers: Prompts the player to answer questions and checks their answers.

PlayMathGame: Manages the game flow and replayability.
