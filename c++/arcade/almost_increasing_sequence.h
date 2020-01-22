#include <vector>


int helper(std::vector<int> sequence, int start = 0) {
    for (int i = i + 1; i < sequence.size(); i++)
        if (sequence[i - 1] >= sequence[i])
            return i;

    return sequence.size();
}

bool almostIncreasingSequence(std::vector<int> sequence) {
    int count = helper(sequence);
    if (count == sequence.size())
        return true;

    if (count == 1 || sequence[count - 2] < sequence[count])
        return helper(sequence, count) == sequence.size();

    if (sequence[count - 1] < sequence[count + 1]) 
        return helper(sequence, count + 1) == sequence.size();

    return false;
}
