#include <iostream>
#include <vector>

// Define functions
void greet() {
  std::cout << "=============\n";
  std::cout << "UFO: The Game\n";
  std::cout << "=============\n";
  std::cout << "Instructions: save your friend from alien abduction by guessing the letters in the codeword.\n";
 
}

// Could be void, but might do something with bool. checks conditions for victory
bool end_game(std::string answer, std::string codeword) {
  if (answer == codeword) {
    std::cout << "\nYou saved your friend, well done!\n";
    return true;
  } else {
    std::cout << "\nOh no, the UFO just flew away with another person!\n The answer was " << codeword << "\n";
    return false;
  }
}

// Function that displays current game information as incorrect guesses and codeword
void display_status(std::vector<char> incorrect, std::string answer) {
  std::cout << "\nIncorrect Guesses:\n";
  for (int i = 0; i < incorrect.size(); i++) { // Iterate over incorrect vector
    std::cout << incorrect[i] << ' ';
    }
    std::cout << "\nCodeword:\n";
    for (int i = 0; i < answer.length(); i++) { // Iterate over codeword string
      std::cout << answer[i] << ' ';
    }
}

void display_misses(int misses) {
  if (misses >= 0 && misses <= 6) {
    
    std::cout << "                 .                            \n";
    std::cout << "                 |                            \n";
    std::cout << "              .-\"^\"-.                       \n";
    std::cout << "             /_....._\\                       \n";
    std::cout << "         .-\"`         `\"-.                  \n";
    std::cout << "        (  ooo  ooo  ooo  )                   \n";
    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
    std::cout << "              /     \\        (  Send help! ) \n";
    std::cout << "             /   0   \\      / `-----------'  \n";
    std::cout << "            /  --|--  \\    /                 \n";
    std::cout << "           /     |     \\                     \n";
    std::cout << "          /     / \\     \\                   \n";
    std::cout << "         /               \\                   \n";

  }
}