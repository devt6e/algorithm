#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    std::vector<int> lastday = {31,29,31,30,31,30,31,31,30,31,30,31};
    std::vector<std::string> day = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    int date = 0;
    for(int i = 0; i < a-1; i++)
    {
        date += lastday[i];
    }
    date += b;
    answer = day[date%7];
    
    return answer;
}