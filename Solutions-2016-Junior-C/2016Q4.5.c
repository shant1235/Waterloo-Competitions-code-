#include <stdio.h>

int main()
{
    int h,m,i,count,timH,timM,timX,timY,timFinal,timeInRushH,timInRushM,totalTime,timeInRush;
    double distanceTraveled;
    distanceTraveled =0;
    count = 0;
   scanf("%d:%d",&h,&m);
   
    totalTime = h*60 + m;
    printf("%d\n",totalTime);

   if(totalTime >= 300 && (totalTime <= 600) ){
          totalTime = h*60 + m;
          timeInRush = 10 * 60 - totalTime;
          distanceTraveled = (1.0 / 12) * (timeInRush / 20);
            count = 1;


   }
   
   if(totalTime >= 900 && totalTime <= 1140){
           totalTime = h*60 + m;
          timeInRush= 19 * 60 - totalTime;
          distanceTraveled = (1.0 / 12) * (timeInRush / 20);
         count = 1;
   }
    if (h > 600 && h < 900 ){
        if (900 - totalTime >= 120){
        totalTime = totalTime + 120;
            printf("%d\n",totalTime);

     }
     else{
         timeInRush = 900 - totalTime;
         distanceTraveled = (1 / 6) * (timeInRush / 20);
     }
    }
    
    if (h > 1140 && h < 300 ){
        if (300 - totalTime >= 120){
        totalTime = totalTime + 120;
            printf("%d\n",totalTime);

     }
     else{
          timeInRush = 300 - totalTime;
         distanceTraveled = (1 / 6) * (timeInRush / 20);
     }
    }
    
   timX = 1 - distanceTraveled; 
    if(count == 1){
        timX = timX / (1.0 / 12);
    }
    else{
        timX = timX / (1.0 / 6);
    }
    totalTime = totalTime + timX * 20;
    printf("%d\n",totalTime);
    return 0;
}
