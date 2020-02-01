// LeetCode190.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

uint32_t reverseBits(uint32_t n) {
    uint32_t result = 0;
    for (int i = 0; i < 16; i++) {
        double x = pow(2, i);
        double y = pow(2, 31 - i);
        uint32_t first = ((uint32_t)x) & n;
        uint32_t second = ((uint32_t)y) & n;
        if (first == 0 && second == y || first == x && second == 0) {
            result = x + y;
        }   
        /*if (first == x && second == 0) {
            result = result - x + y;
        }*/
    }
    return result;
}

int main()
{
    uint32_t n = 43261596;
    std::cout << reverseBits(n);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
