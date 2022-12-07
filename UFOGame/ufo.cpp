// Incomplete project from Codecademy
// Link with ufo_functions.cpp when compiling
#include <iostream>
#include "ufo_functions.hpp"

int main() {
  greet(); // welcome message

  std::string codeword = "codecademy"; // Set codeword to what you want user to guess
  std::string answer = "__________"; // Set answer to underscores equal or chars in codeword 
  // this could be automated from user input and iterating over each char in the string
  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;

// Main body of Game Code
  while (answer != codeword && misses < 7) { // User has 6 lives to guess the codeword
    display_misses(misses);
    
    display_status(incorrect, answer);
    
    misses++;
  }
  // call function to check if user has won or lost
  end_game(answer, codeword);

}