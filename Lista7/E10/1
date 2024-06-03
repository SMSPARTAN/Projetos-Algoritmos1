#include <iostream>
#include <vector>
#include <string>
#include <limits>

double classAverage(const std::vector<double> &vec)
{
  double result;
  for(int i : vec)
  {
    result += i;
  }
  return result/vec.size();
}

void aboveAverage(const std::vector<std::string> &vecName, const std::vector<double> &vecGrade)
{
  for(int i = 0; i < 20; i++)
      {
        if(vecGrade[i] > classAverage(vecGrade))
        {
          std::cout << std::endl << vecName[i] << ": " << vecGrade[i] << std::endl;
        }
      }
}

std::vector<std::string> students;
std::vector<double> grades;
double studentGrade;
std::string studentName;

int main()
{
 for(int i = 0; i < 20; i++)
  {
      std::cout << "\nEnter Student Name: ";
      std::getline(std::cin, studentName);

      students.push_back(studentName);

      std::cout << "Enter Student Grade: ";
      std::cin >> studentGrade;

      grades.push_back(studentGrade);

      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');      
  }
  
  std::cout << "\nClass Average was: " << classAverage(grades) << "\nAbove Average Students were:\n";
  aboveAverage(students, grades);    
  return 0;
}
