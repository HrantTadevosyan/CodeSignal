#include <iostream>
#include <vector>

int makeArrayConsecutive2(std::vector<int> statues) {
    int min = INT32_MAX;
    int max = INT32_MIN;
    
    for (int i = 0; i < statues.size(); i++)
        if (statues[i] < min)
            min = statues[i];
    
    for (int i = 0; i < statues.size(); i++)
        if (statues[i] > max)
            max = statues[i];
    
    return (max - min) - statues.size() + 1;
}
