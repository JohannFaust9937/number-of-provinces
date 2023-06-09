#include <iostream>
#include "number-of-provinces.h"

int main()
{
    std::cout << "https://leetcode.com/problems/number-of-provinces/ :\n\n";
    //std::vector<std::vector<int>> cities{ { 1, 0, 0 }, { 0, 1, 0 }, { 0, 0, 1 } };
    //std::vector<std::vector<int>> cities{ { 1, 1, 0 }, { 1, 1, 0 }, { 0, 0, 1 } };
    //std::vector<std::vector<int>> cities{ { 1, 1, 0, 0 }, { 1, 1, 0, 1 }, { 0, 0, 1, 0 }, { 0, 1, 0, 1 } };
    //std::vector<std::vector<int>> cities{ { 1, 1, 0, 0 }, { 1, 1, 0, 1 }, { 0, 0, 1, 0 }, { 1, 0, 0, 1 } };
    std::vector<std::vector<int>> cities{ { 1, 1, 0, 0, 0, 1 }, { 1, 1, 0, 1, 0, 1 }, { 0, 0, 1, 0, 0, 0 }, { 0, 0, 0, 1, 1, 0 }, { 0, 0, 0, 1, 1, 1}, { 1, 1, 0, 0, 1, 1 } };
    Solution example;
    printf("%i", example.findCircleNum(cities));
}
