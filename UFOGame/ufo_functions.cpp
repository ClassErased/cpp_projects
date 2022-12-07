#include <iostream>
#include <vector>

// Define functions
void greet() {
  std::cout << "=============\n";
  std::cout << "UFO: The Game\n";
  std::cout << "=============\n";
  std::cout << "Instructions: save your friend from alien abduction by guessing the letters in the codeword.\n";
 
}

// could be void, but might do something with bool
bool end_game(std::string answer, std::string codeword) {
  if (answer == codeword) {
    std::cout << "You saved your friend, well done!\n";
    return true;
  } else {
    std::cout << "Oh no, the UFO just flew away with another person!\n";
    return false;
  }
}

void display_status(std::vector<char> incorrect, std::string answer) {
  std::cout << "\nIncorrect Guesses:\n";
  for (int i = 0; i < incorrect.size(); i++) { // Iterate over incorrect vector
    std::cout << incorrect[i] << ' ';
    }
    std::cout << "\nCodeword:\n";
    for (int i = 0; i < answer.length(); i++) {
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