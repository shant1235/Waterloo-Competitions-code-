#include <stdio.h>
#include <string.h>

int main ()
{
  int i,j,k,sum;
  int array[16];
   
     
    scanf("%d %d %d %d\n",&array[0],&array[1],&array[2],&array[3]);
    scanf("%d %d %d %d\n",&array[4],&array[5],&array[6],&array[7]);
    scanf("%d %d %d %d\n",&array[8],&array[9],&array[10],&array[11]);
    scanf("%d %d %d %d",&array[12],&array[13],&array[14],&array[15]);
   sum =array[0]+array[1]+array[2]+array[3];
        

  if (array[4]+array[5]+array[6]+array[7]== sum){
   
   if (array[8]+array[9]+array[10]+array[11]== sum){
      

      if (array[12]+array[13]+array[14]+array[15]== sum){
     

      
     if (array[0]+array[4]+array[8]+array[12]== sum){
        

      if (array[1]+array[5]+array[9]+array[13]== sum){
      

      if (array[2]+array[6]+array[10]+array[14]== sum){
    

      if (array[3]+array[7]+array[11]+array[15]== sum){
    printf("magic\n");
          

     
  } 
  else 
      printf("not magic\n");

     
  } 
 else 
      printf("not magic\n");   
  } 
   else 
      printf("not magic\n");  
  } 
  else 
      printf("not magic\n");
  } 
   else 
      printf("not magic\n");  
  }    
 else 
      printf("not magic\n");    
  }   
  else 
      printf("not magic\n");
  
return 0;
}
