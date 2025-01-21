Number Guessing Game
Overview

This is a simple number guessing game implemented in C++. The game involves three players, an umpire, and a guesser. The guesser selects a number, and the players each guess a number. The umpire checks the numbers provided by the players and determines if any player's guess matches the guesser's number.
Classes
1. Guesser

    The Guesser class is responsible for taking the guesser's input (the number they choose).
    The method takegueeserInput() prompts the user to input a number, stores it, and returns it.

2. Player

    The Player class is used for each player in the game to input their guessed number.
    The method takePlayerInput() allows each player to enter their number, stores it, and returns the value.

3. Umpire

    The Umpire class oversees the game. It:
        Retrieves the number from the guesser.
        Collects the numbers from the players.
        Compares the players' numbers with the guesser's number and prints the result.

Methods in the Umpire class:

    GetTheNumberFromGuesser(): Retrieves the guesser's number.
    GetTheNumberFromPlayer(): Retrieves the numbers from the three players.
    PrintTheResult(): Compares the players' numbers with the guesser's number and prints out who won the game.

Game Flow

    The umpire starts the game.
    The guesser inputs a number.
    Each player inputs their guessed number.
    The umpire checks if any player's number matches the guesser's number.
    The umpire prints out the result, determining which player(s) won.
    The game ends.

How to Run

    Clone or download the repository.
    Open the project in your preferred C++ IDE.
    Compile and run the main() function to start the game.
