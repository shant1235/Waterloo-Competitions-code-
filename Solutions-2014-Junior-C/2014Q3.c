#include <stdio.h>

int main()
{   
    int numOfRounds,p1,p2,d1,d2,i;
    p1 = 100;
    p2 = 100;
    scanf ("%d\n",&numOfRounds);
    for (i = 0;i < numOfRounds;i++){
            
            scanf ("%d %d",&d1,&d2);
            if (d1 < d2){
            p1 = p1 - d2; 
            
            }
             if (d1 > d2){
            p2 = p2 - d1;     
            } 
            
        
    }
    printf("%d\n",p1);
    printf("%d\n",p2);
    
        
        
    return 0;
}
