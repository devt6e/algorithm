#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    int idx = 0;

    for(int i = 0; i < food.size(); i++)
    {
        if (i == 0) continue;
        int num = food[i];
        if (food[i]%2 == 1)
            num -= 1;

        answer.insert(idx, num, i+'0');
        idx += num/2;
    }
    answer.insert(idx, 1, '0');
    return answer;
}