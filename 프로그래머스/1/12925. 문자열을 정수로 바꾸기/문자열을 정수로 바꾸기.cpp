#include <string>
#include <vector>

using namespace std;

int solution(string s) 
{
    int answer = 0;
    //answer = stoi(s);
    for(int i = 0; i < s.size(); i++)
    {
        int item = s.at(i) - '0';
        if(0 <= item && item <= 9)
        {
            answer *= 10;
            answer += item;
        }
    }
    
    if(s.at(0) == '-')
        answer *= -1;

    return answer;
}