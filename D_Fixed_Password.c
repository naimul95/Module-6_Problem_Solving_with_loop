#include<stdio.h>
int main ()
{
     int x;
     while(scanf("%d", &x)){       // when there is no fixed number of input  use while loop//            
        if(x==1999){
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
    return 0;
   
}   