#include <vector>

void reverse(std::vector<int>& list) {
    for (int i = 0; i < list.size() / 2; i++) {
        int temp = list[i];
        list[i] = list[list.size() - i - 1];
        list[list.size() - i - 1] = temp;        
    }
}

std::vector<std::vector<int>> rotateImage(std::vector<std::vector<int>> a) {
    std::vector<std::vector<int>> copy(a.size(), std::vector<int>(a.size(), 0));
    
    for (int x = 0; x < a.size(); x++)
        for (int y = 0; y < a.size(); y++)
            copy[x][y] = a[y][x];
    
    for (int i = 0; i < copy.size(); i++) 
        reverse(copy[i]);
    
    return copy;
}
