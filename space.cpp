#include <iostream>

int main() {
  
  double weight;
  int x;
 
  std::cout << "Please enter your current earth weight: ";
  std::cin >> weight;
 
  std::cout << "\nI have information for the following planets:\n\n";
  std::cout << " | 1. Mercury | 2. Venus  | 3. Mars   |\n";
  std::cout << " | 4. Jupiter | 5. Saturn | 6. Uranus |\n";
  std::cout << " | 7. Neptune |           |           |\n\n";
 
  std::cout << "Enter the number of the planet you plan to visit: ";
  std::cin >> x;

  /*switch : x would also work
  convert user input (weight) to value for specified planet*/
  if (x == 1) {
 
    weight = weight * 0.38;
 
  } else if (x == 2) {
 
    weight = weight * 0.91;
 
  } else if (x == 3) {
 
    weight = weight * 0.38;
 
  } else if (x == 4) {
 
    weight = weight * 2.34;
 
  } else if (x == 5) {
 
    weight = weight * 1.06;
 
  } else if (x == 6) {
 
    weight = weight * 0.92;
 
  } else if (x == 7) {

    weight = weight * 1.19;

  } else {
    std::cout << "Invalid Input\n";
    return 1;
  }
 
  std::cout << "\nYour weight: " << weight << "\n";
}