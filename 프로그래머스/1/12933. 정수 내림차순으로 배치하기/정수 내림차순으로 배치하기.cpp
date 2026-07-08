#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int arr[10] = {0,};
    int idx = 0;
    while(n)
    {
        arr[idx] = n%10;
        n/=10;
        idx++;
    }
    
    for(int i = 0; i < idx; i++)
    {
        for(int j = i; j < idx; j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < idx; i++)
    {
        answer *= 10;
        answer += arr[i];
    }
    
    
    return answer;
}