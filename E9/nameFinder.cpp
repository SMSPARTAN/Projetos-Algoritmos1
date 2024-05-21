#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>

std::vector<std::string> names;
std::string input;

int main()
{
  for(int i = 0; i < 13; i++)
  {
    std::cout << "\nEnter a name: ";  
    std::getline(std::cin, input);

    names.push_back(input);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }

  std::cout << std::endl << "Who are you searching for? ";
  std::getline(std::cin, input);

  if(std::find(names.begin(), names.end(), input) != names.end())
  {
    std::cout << "Found It!" << std::endl;
  }
  else
  {
    std::cout << "Havent found it!" << std::endl;
  }
  return 0;

}
