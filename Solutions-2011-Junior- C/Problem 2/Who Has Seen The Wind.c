#include <stdio.h>

int main()
{
    int h;
    int M;
    int t;
    int A;
    A = 0;
    scanf("%d",&h);
    scanf("%d",&M);
    t = 0;
    while(t <= M){
        t=t+1;
    A = -1*6*t*t*t*t + h*t*t*t+ 2*t*t + t;
    if (A <= 0){
        
     printf("The balloon first touches ground at hour:\n");
     printf("%d\n",t);
  break;
        
    }
  
    }
    if (M < t){
    printf("The balloon does not touch ground in the given time.\n");
 
    }
    
     
    

    return 0;
}

