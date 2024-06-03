#include <iostream>
#include <vector>

double averageHeight(std::vector<double>& vec)
{
  int result = 0;
  for(int i : vec)
  {
    result += i;
  }
  return result/vec.size();
}

void menOrWomen(int& height, char& sex, std::vector<double>& vec1, std::vector<double>& vec2)
{
  if(sex != 'F' && sex != 'f')
  {
    vec1.push_back(height);
  }
  else
  {
    vec2.push_back(height);
  }
}

std::vector<double> heightAll;
std::vector<double> heightMen;
std::vector<double> heightWomen;
int userInput;
char gender;

int main()
{
  for(int i = 0; i < 10; i++)
  {
    std::cout << "Please enter your height in cm: ";
    std::cin >> userInput;
    
    heightAll.push_back(userInput);

    std::cout << std::endl << "\nAre you a man or a woman? (M/F)\n";
    std::cin >> gender;
    
    menOrWomen(userInput, gender, heightMen, heightWomen);
  }

  std::cout << "The average height of everyone is: " << averageHeight(heightAll) << "cm \nThe average height of all men is: " << averageHeight(heightMen) << "cm \nThe average height of all women is: " << averageHeight(heightWomen) << "cm" << std::endl;

  return 0;
}
