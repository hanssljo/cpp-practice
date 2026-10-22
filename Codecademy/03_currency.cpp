#include <iostream>

int main() {
  
  double pesos;
  double reais;
  double soles;

  double dollars;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;
  
  double conversion_rate_pesos = 0.00032;
  double conversion_rate_reais = 0.27;
  double conversion_rate_soles = 0.3;

  dollars = 
  (conversion_rate_pesos * pesos) +
  (conversion_rate_reais * reais) +
  (conversion_rate_soles * soles);

  std::cout << "US Dollars = $" << dollars << "\n";
  
}