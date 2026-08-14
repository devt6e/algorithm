#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    for(vector<int> v : commands)
    {
        int idx_s = v[0]-1, idx_e = v[1]-1, idx_target = v[2]-1;
        
        temp = vector<int>(array.begin()+idx_s, array.begin()+idx_e+1);
        sort(temp.begin(), temp.end());
        
        answer.push_back(temp[idx_target]);
    }
    return answer;
}