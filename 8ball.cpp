#include <iostream>
#include <cstdlib>

int main() 
{
  srand(time(NULL));
  int answer = std::rand() % 10;
  std::cout << "MAGIC 8 BALL:\n";

  switch(answer) 
  {
    case 0 :
    std::cout << "It is certain.\n";
    break;
    case 1 :
    std::cout << "Reply hazy, try again.\n";
    break;
    case 2 :
    std::cout << "Better not tell you now.\n";
    break;
    case 3 :
    std::cout << "Most likely.\n";
    break;
    case 4 :
    std::cout << "Ask again later.\n";
    break;
    case 5 :
    std::cout << "Without a doubt.\n";
    break;
    case 6 :
    std::cout << "My sources say no.\n";
    break;
    case 7 :
    std::cout << "It is decidedly so.\n";
    break;
    case 8 :
    std::cout << "Yes.\n";
    break;
    case 9 :
    std::cout << "Very doubtful.\n";
    break;
    default :
    std::cout << "Dunno m8...\n";
    break;
  }
 return 0;
}
