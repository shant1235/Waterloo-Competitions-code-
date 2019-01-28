#include <stdio.h>
#include <string.h>
int main()
{
    
    int length,i,j,k,l,count,increment,boo;
    char array[40];
        char intArray[40];
    increment = 1;
    scanf("%s",&array);
  
    length=strlen(array);
    
    
    for (i=0;i <= length - 1;i++){
        count=1;
        if (i==0||i== length - 1){
            count = 1;
            intArray[i] = count;
            
        }
        else{
                            increment=1;

            while(1==1){
                if (array[i-increment]==array[i+increment]){
                    count = count + 2;
                    increment = increment +1;
                    continue;
                }
                else{
                    
                    intArray[i] = count;
                               

                    break;
                }
            }    
        }
    }
    for(j=0;j <=length-1;j++){
        for(k=0;k<=length-1;k++){
            if(intArray[j]>=intArray[k]){
                boo = 1;
                
            }
            else{
        
            boo = 0;
            break;
            }
        }
        if(boo==1){
        printf("%d\n",intArray[j]); 
            return 0;
        }
    }
        return 0;

}

