#include <stdio.h>

int main()
{
     int Seq[10000];
    scanf("%d\n",&Seq[0]);
    scanf("%d",&Seq[1]);
    int v0;
    int v1;
    int v2;
    v0 = 0;
    v1 = 1;
    v2 = 2;
   
      while(Seq[v0] > Seq[v1]){
        Seq[v2]= Seq[v0]- Seq[v1];
         v0++;
         v1++;
         v2++;
      }
      
  printf("%d\n",v2);
    return 0;
}
