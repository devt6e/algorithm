#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int n = 0;
    for(auto i = number.begin(); i != prev(number.end(),2); i++)
    {
        for(auto j = next(i); j != prev(number.end()); j++)
        {
            n = *i + *j;
            for(auto k = next(j); k != number.end(); k++)
            {
                // std::cout << *i << " " << *j << " " << *k << std::endl;
                if(n+ *k == 0) answer++;
            }
        }
    }
    // std::cout << answer << std::endl;
    return answer;
}