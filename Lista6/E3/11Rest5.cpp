#include <iostream>

void restIs5(int& number)
{
  if(number%11 == 5)
  {
    std::cout << number << " ";
  }
}

int main()
{
  for(int i = 1000; i <= 1999; i++)
  {
    restIs5(i);
  }
  
  return 0;
}
