#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long pow = 1;
    for(int i = 1; ;i++)
    {
        if(n < pow)
        {
            pow = -1;
            break;
        }
        if(pow == n)    
        {
            pow += i+i+1;
            break;
        }
        pow += i+i+1;
    }      
    answer = pow;
    return answer;
}