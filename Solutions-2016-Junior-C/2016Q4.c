#include <stdio.h>

int main()
{
    int h,m,i,count,timH,timM,timX,timY,timFinal;
    char b[1];
   scanf("%d:%d",&h,&m);
   if((h <= 5 || h >= 10) && m == 00 ){
          
           printf("%d:%d0\n",h+2,m);

   }
   else{
   if((h > 10 && h <= 13 || h >= 19) && m == 00 ){
          
           printf("%d:%d0\n",h+2,m);

   }
   else{    
    if((h > 5 && h < 10||h == 5 && m > 0) ){
        if(m == 0){
        timH = 10 - h;      
        timM = m;  
        }
        if(m != 0){
        timH = 9 - h;      
        timM = 60 - m;  
        }
        if (timY = timM/2 == 0){
        timY = 30;    
        }
        else{
        timY = timM/2;     
        }
        timFinal = 60 - timY;
        m = m + timM + timFinal;
        h = h + timH;
       while(m > 60){
        h++;
        m = m - 60;
       }
        printf("%d %d %d %d %d %d %d %d\n",h,m,timH,timM,timY,timY,timFinal );
        
        printf("%d:%d\n",h,m);

   } 
   
        
    } 
          
    
   }
  
  
  
  
  
   
   
    

    return 0;
}

