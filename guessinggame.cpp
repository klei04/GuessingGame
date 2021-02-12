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

  while (playGame == 'y') {
    int guessesAmount = 0;
    int playerGuess = 200;
    srand (time(NULL));
    int randomNumber = rand()%101;
    cout << "I have selected a random number between 0 and 100. Why don't you guess what my number is?" << endl;
    cin >> playerGuess;
    guessesAmount++;
    while (playerGuess != randomNumber) {
      if (playerGuess < randomNumber) {
	cout << "Sorry! Your number is too small. Try again" << endl;
	cin >> playerGuess;
	guessesAmount++;
      }
      if (playerGuess > randomNumber) {
	cout << "Sorry! Your number is too large. Try again" << endl;
	cin >> playerGuess;
	guessesAmount++;
      }
    }
    cout << "Good job! You found the number in " << guessesAmount << " tries!" << endl;
    cout << "If you would like to play again, please type 'y'. If you would like to stop playing, please type 'n'." << endl;
    cin >> playGame;
  }

  cout << "Thank you for playing GuessingGame!" << endl;

  return 0;
}
