#include <vector>
#include <string>
#include <map>

bool launchSequenceChecker(std::vector<std::string> systemNames, std::vector<int> stepNumbers) {
    std::map<std::string, std::vector<int>> dic;
    int n = systemNames.size();
    
    for (int i = 0; i < n; i++) {
        std::string key = systemNames[i];
        if (dic.count(key))
            dic[key].push_back(stepNumbers[i]);
        else
            dic.insert(std::pair<std::string, std::vector<int>>(key, std::vector { stepNumbers[i] }));
    }
    
    for (auto const& x: dic) 
        for (int i = 0; i < x.second.size() - 1; i++) 
            if (x.second[i] >= x.second[i + 1])
                return false;
    
    return true;
}