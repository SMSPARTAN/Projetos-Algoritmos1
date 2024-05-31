#include <iostream>
#include <vector>

int sumVector(std::vector<int> &vec)
{
  int result = 0;
  for(int i : vec)
  {
    result += i;
  }
  return result;
}

int userInput;
std::vector<int> sumVec;

int main()
{
  for (int i = 0; i < 10; i++)
  {
    std::cout << "\nEnter a number: ";
    std::cin >> userInput;

    sumVec.push_back(userInput);
  }

  std::cout << "The sum of all numbers in the vector are: " << sumVector(sumVec) << std::endl;

  return 0;
}
