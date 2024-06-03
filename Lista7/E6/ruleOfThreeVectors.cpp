#include <iostream>
#include <vector>

void cloneToThirdVector(const std::vector<int> &vec1, const std::vector<int> &vec2, std::vector<int> &vec3)
{
  for(int i : vec1)
  {
    vec3.push_back(i);
  }
  for(int i: vec2)
  {
    vec3.push_back(i);
  }
}

std::vector<int> vector1 = {1, 2, 3};
std::vector<int> vector2 = {4, 5, 6};
std::vector<int> vector3;

int main()
{
  cloneToThirdVector(vector1, vector2, vector3);

  for(int i : vector3)
  {
      std::cout << i << " ";
  }

  return 0;
}
