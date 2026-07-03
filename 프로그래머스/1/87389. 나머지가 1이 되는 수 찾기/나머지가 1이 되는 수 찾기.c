#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) 
{
    int answer = 0;
    if(n%2 == 1) 
        answer = 2;
    else
        for(int i = n-1; i > 2; i-=2 )
            if(n%i == 1)
                answer = i;
    return answer;
    
}