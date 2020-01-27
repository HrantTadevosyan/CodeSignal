#include <iostream>
#include <vector>
#include <set>

bool almostIncreasingSequence(std::vector<int> sequence) {
    std::set<int> left;
    std::set<int> right;
    
    for (int i = 0; i < sequence.size(); i++)
        for (int j = i + 1; j < sequence.size(); j++) 
            if (sequence[i] >= sequence[j]) {
                left.insert(i);
                right.insert(j);
            }
    
    return left.size() <= 1 || right.size() <= 1;
}