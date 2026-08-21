#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    int rest_cola = n; //dividend
    int q; //quotient
    int r = 0;  //rest
    int total_cola = 0;
    
    while(1)
    {
        if(rest_cola < a)
            break;
        
        q = rest_cola/a;
        r = rest_cola%a;
        rest_cola = q*b+r;
        total_cola += q*b;
    }
    
    answer = total_cola;
    return answer;
}