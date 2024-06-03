#include <iostream>
#include <vector>
#include <algorithm>

void swap(std::vector<int> &vec)
{
  int s = vec.size();
  for(int i = 0; i < s/2; i++)
  {
      std::swap(vec[i], vec[s - 1 - i]);
  }
}

std::vector<int> vector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

int main()
{
  swap(vector);
  for(int i : vector)
  {
    std::cout << i << " ";
  }
  return 0;
}

