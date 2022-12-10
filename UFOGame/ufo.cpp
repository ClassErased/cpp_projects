// Link with ufo_functions.cpp when compiling
#include <iostream>
#include <stdlib.h>
#include "ufo_functions.hpp"
#include <cctype>

int main() {
  greet(); // call welcome message function
  
  bool play = true; // these two lines handle restarting the game if the user wants to play again
  while (play = true) { // changed to bool for memory efficiency but it isnt really used yet

    srand(time(NULL)); // set seed for rand
    int secret = rand() % 4; // computer picks a random number between 1 and 5

    // assign variables
    std::string codewords[5] = {"codecademy","python","javascript","haskell","programming"};
    std::string codeword = "";
    std::string answer = ""; 
    int misses = 0;
    std::vector<char> incorrect;
    bool guess = false;
    char letter;
  
    codeword = codewords[secret]; // select word from array using random number
  
    for (int i = 0; i < codeword.length(); i++) {
      answer += "_"; // for each character in codeword, answer will dsplay an underscore
  }

  // Main body of Game Code
    while (answer != codeword && misses < 7) { // User has 6 lives to guess the codeword
      std::cout << "\n\nPlease enter your guess: ";
      std::cin >> letter;
      letter = tolower(letter);

      for (int i = 0; i < codeword.length(); i++) { // Iterates over each char in codeword string

        if (letter == codeword[i]) {
          answer[i] = letter; // if the guessed letter is found in codeword, add it to answer
          guess = true; // no life decrement
        }
      }

      if (guess) {
        std::cout << "\nCorrect!\n";
      } else {
        std::cout << "\nIncorrect! the tractor beam pulls the person in further\n";
        incorrect.push_back(letter); // add incorrect letter to incorrect vector
        misses++; // life increment
      }
    
      display_misses(misses); // call function for ufo ascii art
      display_status(incorrect, answer); // call funtion that displays the current game info
      guess = false; // reset bool outside of while loop
    }
    end_game(answer, codeword); // call function to check if user has won or lost
    
  //can probably put this in a function but im done with the compiler for now
  std::string v2 = "";
  std::cout << "\nWould you like to play again? [Y/N]: ";
  std::cin >> v2;
  if (v2 == "N" || v2 == "n") {
    std::cout << "\nThank you for playing!\n";
    break;
  } else if (v2 == "Y" || v2 == "y") {
    std::cout << "\nLets go again!\n";
  } else {
    std::cout << "\n\n\nInvalid input, terminating program[!!!]\n\n\n";
    break;
  }
  } 
}