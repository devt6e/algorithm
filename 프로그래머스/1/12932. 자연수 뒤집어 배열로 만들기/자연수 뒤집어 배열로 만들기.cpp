#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int item = 0;
    while(n)
    {
        item = n%10;
        answer.push_back(item);
        n /= 10;
    }
    return answer;
}