#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) 
{
    int answer = 0;
    
    for(int i = 1; i <= 3000; i++)
    {
        if (n == 0)
            break;
        if(n % i == 0)
            answer += i;
    }

    return answer;
}