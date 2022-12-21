#include <string>

class Song { // Create song class
  
  std::string title; // These two variables are private
  std::string artist;

public: // These are all public
  void add_title(std::string new_title); // But we can change them by making function calls to
  std::string get_title();               // Song class in the main function.
  void add_artist(std::string new_artist);
  std::string get_artist();
  
};