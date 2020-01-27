#include <vector>

int firstDuplicate(std::vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        int val = arr[i] < 0 ? arr[i] * -1 : arr[i];
        
        if (arr[val - 1] < 0)
            return val;
        arr[val - 1] = -arr[val - 1];
    }
    
    return -1;
}
