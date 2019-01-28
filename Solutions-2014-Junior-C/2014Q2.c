#include <stdio.h>
#include <string.h>

int main()
{   
    int i,c,length,wordLength,countA,countB;
    char array[30];
    char a[] = "A";
    char b[] = "B";
    countA = 0;
    countB = 0;
       

  scanf("%d",&length);
  scanf("%s",&array);
   

wordLength = strlen(array);


for (i = 0; i < wordLength;i++){
    if (array[i] == a[0]){
    
    countA++;
     

    
    }
    if (array[i] == b[0]){
    
    countB++;
  
    
    
    }
       
}
if (countA == countB){
    printf("Tie\n");
    
}
if (countA > countB){
    printf("A\n");
    
}
if (countA < countB){
    printf("B\n");
    
}
return 0;
}