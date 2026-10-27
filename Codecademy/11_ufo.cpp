#include <iostream>
#include "ufo_functions.hpp"

int main() {

  greet();

  std::string codeword = "codecademy";
  std::string answer = "__________";
  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;

  while ((answer != codeword) && (misses < 7)) {

    display_misses(misses);

    std::cout << "\nIncorrect Guesses: \n";

    for (int i=0; i < incorrect.size(); i++) {
      std::cout << incorrect[i] << " ";
    }
    
    misses++;
  }

  end_game(answer, codeword);

}
