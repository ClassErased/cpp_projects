#include <iostream>
#include <vector>
#include <string>

#define MAX_CHAR_LENGTH 100

int whale_talk(std::string input = "") {
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result;

   for (int i = 0; i < input.size(); i++) {
    
    for (int i2 = 0; i2 < vowels.size(); i2++) {

      if (input[i] == vowels[i2]) {
        result.push_back(input[i]);
        
        if (input[i] == 'e' || input [i] == 'u') {
          result.push_back(input[i]);
        }
      } 
    }
  }
  
  for (int i3 = 0; i3 < result.size(); i3++) { 
    std::cout << result[i3]; 
  }
  std::cout << "\n";
  return 0;
}
//I tried... couldn't quite get it to work yet, so its done inside main()
//int input_handling() {}
int main() {
  std::string str;
  std::cout << "What would you like to convert to whale talk?: ";
  std::getline(std::cin, str);
  whale_talk(str);
}