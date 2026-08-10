#include <string>
#include <vector>
#include <map>
#include <cctype>

using namespace std;

int solution(string s)     
{
    int answer = 0;
    // string s = "one4seveneightone";
    std::map<std::string, std::string> data;
    data.insert({"zero", "0"});
    data.insert({"one", "1"});
    data.insert({"two", "2"});
    data.insert({"three", "3"});
    data.insert({"four", "4"});
    data.insert({"five", "5"});
    data.insert({"six", "6"});
    data.insert({"seven", "7"});
    data.insert({"eight", "8"});
    data.insert({"nine", "9"});
    
//     for(auto kv : data)
//     {
//         if(s.find(kv.first) != std::string::npos)
//         {
//             s.replace(s.find(kv.first),kv.first.size(), std::to_string(kv.second));
//         }
//     }
    string word = "";
    string result = "";
    for(int i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i]))
        {
            result += s[i];
            continue;
        }
        word += s[i];
        // cout << i << ": " << word << endl;
        auto iter = data.find(word);
        if(iter == data.end())
        {
            continue;
        }
        result += iter->second;    
        word = "";
        
    }
    answer = stoi(result);
    // cout << answer << endl;
    return answer;
}