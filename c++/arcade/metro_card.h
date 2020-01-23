#include <vector>

std::vector<int> metroCard(int lastNumberOfDays) {
    std::vector<int> list;
    if (lastNumberOfDays == 31){
        list.push_back(28);
        list.push_back(30);
        list.push_back(31);
        return list;
    }
    
    list.push_back(31);
    return list;
}