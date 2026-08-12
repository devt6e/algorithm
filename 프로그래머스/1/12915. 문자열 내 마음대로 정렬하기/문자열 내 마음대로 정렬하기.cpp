#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    // sort(strings.begin(), strings.end());
    for(int i = 0; i < strings.size(); i++)
    {
        for(int j = i+1; j < strings.size(); j++)
        {
            if(strings[i][n] < strings[j][n])
                continue;
            if(strings[i][n] == strings[j][n] && strings[i] < strings[j])
                continue;
            string temp = strings[i];
            strings[i] = strings[j];
            strings[j] = temp;            
        }
        answer.push_back(strings[i]);
    }
    return answer;
}