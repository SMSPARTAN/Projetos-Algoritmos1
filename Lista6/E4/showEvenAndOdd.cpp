#include <iostream>

void first5Even(int& number)
{
  for(int i = number - 1; i >= number - 5; i--)
  {
    if(i%2 == 0)
    {
      std::cout << i << " ";
    }
  }
  std::cout << std::endl;
}

void past5Odd(int& number)
{
  for(int i = number; i <= number + 5; i++)
  {
    if(i%2 != 0)
    {
      std::cout << i << " ";
    }
  }
  std::cout << std::endl;
}

int userInput;

int main()
{
  std::cout << "Please enter a number: ";
  std::cin >> userInput;
  
  std::cout << "First 5 even numbers are: " << std::endl;
  first5Even(userInput);

  std::cout << "Last 5 odd numbers are: " << std::endl;
  past5Odd(userInput);

  return 0;
}
