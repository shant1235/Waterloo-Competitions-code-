#include <stdio.h>
#include <string.h>

int main()
{   
    int i,c,length,wordLength,countH,countS;
    char array[255];
    char a[] = ":-)";
    char b[] = ":-(";
    countH = 0;
    countS = 0;
       

 
  scanf("%[^\n]s",&array);
  

wordLength = strlen(array);
for (i = 0; i < wordLength;i++){
    if(array[i] == a[0]){
        if(array[i] == a[0]&& array[i+1] == a[1] && array[i+2] == a[2]){
        countH++;    
            
        } 
         if(array[i] == b[0]&& array[i+1] == b[1] && array[i+2] == b[2]){
        countS++;    
            
        } 
        
    }
}
if(countH == countS){
printf("unsure\n");    
}
if(countH > countS){
printf("happy\n");        
}
if(countH < countS){
printf("sad\n");        
}
return 0;
}