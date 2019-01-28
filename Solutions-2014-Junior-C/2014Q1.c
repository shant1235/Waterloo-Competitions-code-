#include <stdio.h>
#include <string.h>

int main()
{   
    int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
if (a + b + c == 180){  
  if (a == 60 && b == 60 && c == 60){
         printf("Equilateral\n");
 
  }
  else {
  if (a == b || a == c || b == c){
               printf("Isosceles\n");

  }
   if (a != b && a != c && b != c){
                printf("Scalene\n");

   }
  }
}
else {
    printf("Error\n");
}
}