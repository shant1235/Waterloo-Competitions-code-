#include <stdio.h>

int main(){
    
    int numAttenna;
    int numEyes;
      
     printf("How many antennas?\n");
    scanf("%d", &numAttenna);
     printf("How many eyes?\n");
    scanf("%d", &numEyes);
     if((numAttenna >= 3) && (numEyes <= 4)){
        printf("TroyMartian\n");
    }
      if(numAttenna <= 6 && numEyes >= 2){
        printf("VladSaturnian\n");
    }
      if(numAttenna <= 2 && numEyes <= 3){
       printf("GraemeMercurian\n");  
    }

    return 0; 
}
