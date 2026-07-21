#include <cstdlib>
using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    answer = money-0.5*(long long)count*(price+price*count);
    answer = answer<0 ? -answer : 0;
    return answer;
}