#include <iostream>
#include <string>


char firstNotRepeatingCharacter(std::string str) {
    const int MAX_CHAR = 256;
    std::pair<int, int> arr[MAX_CHAR]; 

    for (int i = 0; i < str.length(); i++) { 
        arr[str[i]].first++; 
        arr[str[i]].second = i; 
    } 

    int res = INT32_MAX; 
    for (int i = 0; i < MAX_CHAR; i++) 
        if (arr[i].first == 1) 
            res = std::min(res, arr[i].second); 

    return res != INT32_MAX ? str[res] : '_';  
}
