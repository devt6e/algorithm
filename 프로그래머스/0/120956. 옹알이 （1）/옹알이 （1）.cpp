#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> can = {"aya", "ye", "woo", "ma"};
    
    for(std::string& bable : babbling)
    {
        std::string check = "";
         for(std::string& str : can)
         {
            auto pos = bable.find(str);
            while(pos != std::string::npos)
            {
                bable.replace(pos, str.size(), " ");    
                check += " ";
                pos = bable.find(str);
            }
        }
        if(bable == check) answer++;
    }
    return answer;
}