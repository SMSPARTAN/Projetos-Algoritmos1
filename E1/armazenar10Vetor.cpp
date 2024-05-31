#include <iostream>
#include <vector>

std::vector<int> store;

int main()
{
    for(int i = 0; i < 10; i++)
    {
        int input;
        std::cout << "\nEnter 10 numbers\nEnter a number: ";
        std::cin >> input;

        store.push_back(input);
    }

    for(int i : store)
    {
        std::cout << i << " ";
    }

    return 0;
}