#include <stdio.h>
#include <string.h>

int main ()
{
    char a[100];
    int count,num;
    count=0;
    num=0;
    while (count<6){
    scanf("%s",&a );
    
    if (strcmp(a,"W")==0 ) {
    num++;    
           count++;    
       

    }
     if (strcmp(a,"L")==0 ) {
    count++;    
         
 
    }
  
    
    
    }
    if (num <= 2 && num >= 1) {
    printf("3\n") ;  
    }   
     if (num <= 4 && num >= 3 ) {
    printf("2\n") ;  
    } 
       if (num <= 6 && num >= 5 ) {
    printf("1\n");   
    } 
        if (num < 1 ) {
    printf("-1\n");   
    } 

}
