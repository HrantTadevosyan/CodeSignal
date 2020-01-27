//TODO
#include <vector>

bool checkLine(std::vector<char> line) {
    const int n = 9;
    const int ascii = 48;
    int arr[n];
    
    for (int i = 0; i < line.size(); i++)
        if (line[i] != '.')
            arr[line[i] - ascii]++;

    for (int i = 0; i < n; i++)
        if (arr[i] > 1)
            return false;

    return true;
} 

bool sudoku2(std::vector<std::vector<char>> grid) {
    for (int x = 0; x < grid.size(); x++) 
        if (!checkLine(grid[x]))
            return false;
    return true;
    // for (int y = 0; y < grid.size(); y++) 
    //     for (int x = 0; x < grid.size(); x++) 
    //         if (!checkLine(grid[x][y]))
    //             return false;
    
}  