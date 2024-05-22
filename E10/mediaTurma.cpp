#include <iostream>
#include <vector>
#include <string>
#include <limits>

struct student
{
  std::string name;
  double grade;
};

double classAverage(const std::vector<student>& vec)
{
  double result = 0.0;
  for(const student& i : vec)
  {
    result += i.grade;
  }
  return result/vec.size();
}

std::vector<student> students;

int main()
{
  students.resize(20);

  for(int pos = 0; pos < 20; pos++)
  {
    std::cout << "\nEnter thr student name: ";
    std::getline(std::cin, students[pos].name);
    
    std::cout << "\nEnter the student's grade: ";
    std::cin >> students[pos].grade;
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  
  double avg = classAverage(students);
  
  for(int i = 0; i < students.size(); i++)
  {
    if(students[i].grade > avg)
    {
      std::cout << std::endl <<students[i].name << ": " << students[i].grade << std::endl;
    }
  }
  return 0;
  
}

