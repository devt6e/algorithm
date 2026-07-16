#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    int cnt = 0;
    int s = 999999;
    for(int i : arr)
        if(i < s) s = i;

    for(vector<int>::iterator iter = answer.begin(); iter != answer.end(); iter++)
    {
        if(*iter == s)
        {
            answer.erase(iter);
            iter--;
        }
    }
    
    return answer.empty()?(vector<int>){-1}:answer;
}