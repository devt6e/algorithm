#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    long n = a+b;
    long cnt = a > b ? a - b + 1 : b - a + 1;
    
    answer = cnt*n/2;
    
    return answer;
}