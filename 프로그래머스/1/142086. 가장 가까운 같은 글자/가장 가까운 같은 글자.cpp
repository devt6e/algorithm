#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<int> alpha(26,-1);
    int i = 0;
    for(const char& c : s)
    {
        int idx = c-'a';
        if(alpha[idx] == -1)
            answer.push_back(alpha[idx]);
        else
            answer.push_back(i-alpha[idx]);
        alpha[idx] = i++;
    }
    return answer;
}