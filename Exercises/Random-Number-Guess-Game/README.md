# Number Guessing Game in C++

This C++ program is a simple number guessing game where the user has up to 5 attempts to guess a randomly generated number between 0 and 100. The program provides feedback on whether the guessed number is higher or lower than the target number. After each game, the user is asked if they want to play again.

## Description

The program consists of the following steps:

1. **Generate a random number**:
    - A random number between 0 and 100 is generated using `rand()%101`.

2. **Prompt the user to guess the number**:
    - The user is given up to 5 attempts to guess the number.
    - After each guess, the program provides feedback:
        - If the guessed number is equal to the random number, the user wins, and the program asks if they want to play again.
        - If the guessed number is higher than the random number, the program prompts the user to guess a smaller number.
        - If the guessed number is lower than the random number, the program prompts the user to guess a larger number.
        - If the user fails to guess the number within 5 attempts, the program informs the user that they have lost and asks if they want to try again.

3. **Handle the user's response**:
    - If the user wants to play again, the game resets and starts over.
    - If the user does not want to play again, the program exits with a farewell message.

This program helps in understanding how to use loops, conditional statements, and random number generation in C++ to create a simple interactive game.

A Linux executable is provided.
