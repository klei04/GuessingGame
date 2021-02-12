/*
 * This is a game where the computer picks a random number between 0 and 100 inclusive.
 * The user will guess a number and the computer will tell the user if the number guessed is larger or smaller than the actual number.
 * When the user finally guesses the right number, the computer will report back how many guesses it took and ask if the user wants to play again.
 * Author: Kevin Lei
 * Date: 2/11/2021
 */

#include <iostream>
#include <ctime>

using namespace std;

int main(){

  cout << "Welcome to GuessingGame!" << endl;
  char playGame = 'y';

  //As long as playGame is 'y', the game will run
  while (playGame == 'y') {
    int guessesAmount = 0;

    //Sets playerGuess to 200 which is out of the range of the randon number generation
    int playerGuess = 200;

    //Sets random number between 0 and 100 inclusive
    srand (time(NULL));
    int randomNumber = rand()%101;

    //Takes input from player and then adds 1 to the number of guesses
    cout << "I have selected a random number between 0 and 100. Why don't you guess what my number is?" << endl;
    cin >> playerGuess;
    guessesAmount++;

    //The code within the while loop will run until the player guesses the right number
    while (playerGuess != randomNumber) {

      //The following will run if the guess is too small
      if (playerGuess < randomNumber) {
	cout << "Sorry! Your number is too small. Try again" << endl;
	cin >> playerGuess;
	guessesAmount++;
      }

      //The following will run if the guess is too large
      if (playerGuess > randomNumber) {
	cout << "Sorry! Your number is too large. Try again" << endl;
	cin >> playerGuess;
	guessesAmount++;
      }
    }

    //Reports number of guesses made and asks if player wants to play again
    cout << "Good job! You found the number in " << guessesAmount << " tries!" << endl;
    cout << "If you would like to play again, please type 'y'. If you would like to stop playing, please type 'n'." << endl;
    cin >> playGame;
  }

  //This runs if player chooses not to play again
  cout << "Thank you for playing GuessingGame!" << endl;

  return 0;
}
