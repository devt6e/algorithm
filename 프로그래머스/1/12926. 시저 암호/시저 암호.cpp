#include <string>
#include <vector>
#include <cstring>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    char* cstr = new char[s.size()];
    strcpy(cstr, s.c_str());
    //abcde fghij klmno pqrst uvwxyz
    //c:'a' ~ 'z', (c+n)%26 + 'a'
    for(int i = 0; i < s.size(); i++)
    {
        if(cstr[i] == ' ')
            continue;
        if(cstr[i] >= 'a')
            cstr[i] = (cstr[i]+n-'a')%26+'a';
        else
            cstr[i] = (cstr[i]+n-'A')%26+'A';
    }
    answer = string(cstr);
    delete[] cstr;
    return answer;
}