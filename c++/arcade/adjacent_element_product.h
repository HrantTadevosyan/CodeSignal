#include <iostream>
#include <vector>

int adjacentElementsProduct(std::vector<int> inputArray) {
    int max = INT32_MIN;
    for (int i = 0; i < inputArray.size() - 1; i++) 
        if (inputArray[i] * inputArray[i + 1] > max)
            max = inputArray[i] * inputArray[i + 1];
    return max;
}