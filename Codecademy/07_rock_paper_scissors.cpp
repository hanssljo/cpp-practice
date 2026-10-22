#include <iostream>
#include <stdlib.h>

int main() {

  // Computer's choice
  srand(time(NULL));
  int computer = rand() % 3 + 1;

  // User's choice
  int user = 0;

  std::cout << "======================\n";
  std::cout << "Rock, Paper, Scissors!\n";
  std::cout << "======================\n";

  std::cout << "  1) ✊\n";
  std::cout << "  2) ✋\n";
  std::cout << "  3) ✌️\n";

  std::cout << "Shoot!\n";
  std::cin >> user;

  // Check input validity
  if ((user>0) && (user<4)) {

    // Show the result - Computer
    if (computer == 1) {
      std::cout << "Computer chose ✊.\n";
    } else if (computer == 2) {
      std::cout << "Computer chose ✋.\n";
    } else if (computer == 3) {
      std::cout << "Computer chose ✌️.\n";
    }

    // Show the result - User
    if (user == 1) {
      std::cout << "You chose ✊.\n";
    } else if (user == 2) {
      std::cout << "You chose ✋.\n";
    } else if (user == 3) {
      std::cout << "You chose ✌️.\n";
    }

    // Who's the winner?
    if (user == computer) {
      std::cout << "TIE!\n";
    } else if ((user == 1) && (computer == 3)) {
      std::cout << "YOU WIN!\n";
    } else if ((user == 3) && (computer == 1)) {
      std::cout << "YOU LOSE!\n";
    } else if (user > computer) {
      std::cout << "YOU WIN!\n";
    } else if (user < computer ) {
      std::cout << "YOU LOSE!\n";
    }

  } else {
    std::cout << "Invalid input!\n";
  }

}
