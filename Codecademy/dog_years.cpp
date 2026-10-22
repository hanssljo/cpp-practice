#include <iostream>
#include <string>

int main() {
  
  std::string dog_name;
  std::cout << "Enter dog's name: ";
  std::cin >> dog_name;

  int dog_age;
  std::cout << "Enter dog's age: ";
  std::cin >> dog_age;

  int early_years;  // for your dog’s first two years
  int later_years;  // for your dog’s following years
  int human_years;  // for your dog’s total human years
  
  early_years = 21;                  // The first two years of a dog’s life count as 21 human years.
  later_years = (dog_age - 2) * 4;   // Each following year counts as 4 human years.

  human_years = early_years + later_years;

  std::cout << "My name is " << dog_name << "! Ruff ruff, I am " << human_years << " years old in human years.\n";
 
}
