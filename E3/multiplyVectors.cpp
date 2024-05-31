#include <iostream>
#include <vector>

void multVector(const std::vector<int> &multVec1, std::vector<int> &multVec2, std::vector<int> &outVec)
{
    outVec.resize(multVec1.size());
    for(size_t i = 0; i < multVec1.size(); i++)
    {
        outVec[i] = multVec1[i] * multVec2[i];
    }
}

int main()
{
    std::vector<int> vector1;
    std::vector<int> vector2;
    std::vector<int> resultVector;
    int userInput;

    std::cout << "Enter 10 numbers for the first vector\n";
    for(int i = 0; i < 10; i++)
    {
        std::cout << "\nEnter a number: ";
        std::cin >> userInput;

        vector1.push_back(userInput);
    }

    std::cout << "Enter 10 numbers for the second vector\n";
    for(int i = 0; i < 10; i++)
    {
        std::cout << "\nEnter a number: ";
        std::cin >> userInput;

        vector2.push_back(userInput);
    }

    multVector(vector1, vector2, resultVector);
    
    std::cout << "Multiplication between vectors are: \n";
    for(int i : resultVector)
    {
        std::cout << i << " ";
    }

    return 0;

}