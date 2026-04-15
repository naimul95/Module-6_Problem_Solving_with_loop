#include<stdio.h>
#include<limits.h> // for using (INT_MIN) use this header file//
int main ()
{
     int n;
     int max= INT_MIN; // to get the lowest integer number//
     scanf("%d", &n);
     for(int i =1;i<=n;i++){
        int y;
        scanf("%d",&y);
      if(y>max){
        max=y;
      }
     }
     printf("%d",max);
    return 0;
   
}   