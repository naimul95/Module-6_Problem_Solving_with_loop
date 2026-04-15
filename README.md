# Problem solving with loop
- post increment

```c
#include <stdio.h>

int main()
{
    int x = 10;
    int y = x++;
    printf("x = %d, y = %d\n", x, y); // x = 11, y = 10
    return 0;
}
```
- pre increment 
```c
#include <stdio.h>

int main()
{
    int x = 10;
    int y = ++x;
    printf("x = %d, y = %d\n", x, y); // x = 11, y = 11
    return 0;
}
```

```c
#include <stdio.h>

int main()
{
    int x = 10;
    int y = x++;
    int z = ++y;

    printf("%d", z++);  
    // x=11 , y =10 , z= 11 y=11, z=11, z=11
    return 0;
}
```

```c
#include <stdio.h>

int main()
{
    int x = 10;
    ++x;
    printf("%d", ++x); //12
    return 0;
}
```
B. Even Numbers
[Even Numbers](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B)

```c
#include<stdio.h>
int main ()
{
    int N;
    scanf("%d", &N);
    if(N==1){
        printf("-1");
    }
    for(int i=1 ; i<=N; i++){
        if(i%2==0){
            printf("%d\n", i);
        }
    }
    return 0;
   
}   
```

C. Even, Odd, Positive and Negative
[Even, Odd, Positive and Negative](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C)

```c

#include<stdio.h>
int main ()
{
     int n;
     int y;
     int even=0,odd=0,positive=0,negative=0;
     scanf("%d", &n);
      
for(int i=1; i<=n;i++){
    scanf("%d",&y);
    if(y%2==0){
       even++;
 }
 else{
    odd++;
 }
 
  if(y>0){
    positive++;
  }

  else if(y<0){
    negative++;
  }
}

printf("Even: %d\n", even);
printf("Odd: %d\n",odd);
printf("Positive: %d\n",positive);
printf("Negative: %d\n",negative);

return 0;
   
}   
```
D. Fixed Password (EOF) 
[Fixed Password (EOF)](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D)

```c
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
```
E. Max
[Max](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E)


```c
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
```

F. Multiplication table
[Multiplication](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F)

```c
int main ()
{
     int n;
     scanf("%d",&n);
     for(int i=1; i<=12;i++){
        int multi= n*i;
        printf("%d * %d = %d\n", n,i,multi);
     }
    return 0;
   
}   
```
Q. Digits     
[Digits](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q)

```c
#include<stdio.h>
int main ()
{
     int n; 
  scanf("%d", &n);
  for(int i=1 ;i<=n ; i++ ){
    int y;
    scanf("%d", &y);
  do{
    printf("%d ",y%10);
    y=y/10;}while(y !=0);

  
  printf("\n");}
    
    return 0;
  }
   
   
```
