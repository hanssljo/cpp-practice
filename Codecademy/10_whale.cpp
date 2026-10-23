#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

  std::string input = "turpenine and turtles";

  vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  vector<char> result;

  for (int i=0; i<input.size(); i++) {
    for (int j=0; j<vowels.size(); j++) {
      if(input[i] == vowels[j]) {
        result.push_back(input[i]);
      }
    }
  }

  for (int k=0; k<result.size(); k++) {
    if ((result[k] == 'e') || (result[k] == 'u')) {
      cout << result[k] << result[k];
    } else {
      cout << result[k];
    }
  }

  cout << "\n";

}