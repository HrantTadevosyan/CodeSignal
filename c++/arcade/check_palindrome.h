#include <string>

bool checkPalindrome(std::string inputString) {
    if (inputString.length() <= 1)
        return true;
    
    if (inputString.length() % 2 == 1) {
        int middle = inputString.length() / 2 + 1;
        std::string sub1 = inputString.substr(0, middle - 1);
        std::string sub2 = inputString.substr(middle, inputString.length());
        
        inputString = sub1 + sub2;
    }


    std::string part1 = "";
    std::string part2 = "";    
    for (int i = 0; i < inputString.length() / 2; i++)    
        part1 += inputString[i]; 
    for (int i = inputString.length() - 1; i >= inputString.length() / 2; i--)    
        part2 += inputString[i];   
    
    if (part1 == part2) 
        return true;
    
    return false;
}