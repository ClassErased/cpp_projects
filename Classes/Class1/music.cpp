#include <iostream>
#include "song.hpp"

int main() {

  Song electric_relaxation; // Instantiate a version of the Song class called electric_relaxation

  electric_relaxation.add_artist("A Tribe Called Quest"); // call add_artist()
  std::cout << electric_relaxation.get_artist(); // call get_artist()
  
}