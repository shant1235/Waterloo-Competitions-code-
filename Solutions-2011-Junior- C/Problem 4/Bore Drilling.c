#include <stdio.h>
#include <string.h>
int main()
{   char a[100];
    int b;
  while (!(strcmp(a,"q")==0)){
  scanf("%s %d",&a,&b);

/* Move right         */   
if (strcmp(a,"r")==0){
    
     printf("Moving right by %d spaces\n",b);

}
/* Move down         */   
if (strcmp(a,"d") ==0){ 
    
 printf("Moving down by %d spaces\n",b);
   
}
/* Move left         */   
if (strcmp(a,"l") ==0){ 
    
 printf("Moving left by %d spaces\n",b);
   
}
/* Move up         */   
if (strcmp(a,"u") ==0){ 
    
 printf("Moving up by %d spaces\n",b);
   
}
}
}
