#include <iostream>
#include <vector>

std::vector<int> vec1;
std::vector<int> vec2;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Enter 3 numberts: ";
        int input;
        std::cin >> input;

        vec1.push_back(input);
    }

    vec2 = vec1;

    for (int i : vec2)
    {
        std::cout << i << " ";
    }
    
    return 0;
}