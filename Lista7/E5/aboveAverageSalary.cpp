#include <iostream>
#include <vector>
#include <string>
#include <limits>

double averageSalary(const std::vector<double> &salary)
{
  int result = 0;
  for(int i : salary)
  {
    result += i;
  }
  return result/salary.size();
}

void aboveAverageSalary(const std::vector<std::string> &workers, const std::vector<double> &salary)
{
  for(int i = 0; i < 10; i++)
  {
    if(salary[i] > averageSalary(salary))
    {
      std::cout << workers[i] << ": " << salary[i] << std::endl;

    }
  }
}

std::vector<std::string> employee;
std::vector<double> salarys;
std::string workerName;
double workerSalary;

int main()
{
  for(int i = 0; i < 10; i++)
  { 
    std::cout << std::endl << "\nEnter the employee's name: ";
    std::getline(std::cin, workerName);

    employee.push_back(workerName);

    std::cout << "Enter the employee's salary: ";
    std::cin >> workerSalary;

    salarys.push_back(workerSalary);

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
  
  std::cout << averageSalary(salarys) << std::endl;

  aboveAverageSalary(employee, salarys);

  return 0;

}
