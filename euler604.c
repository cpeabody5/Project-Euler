#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
 
long long int phi (long long int n)   
{    
   long long int result = n;   
    long long int i;  
     for (i=2; i*i<=n; ++i)  
      if (n % i == 0)    
      {        
    while (n % i == 0)     
       n /= i;       
      result -= result / i;     
    }    
     if (n > 1)  
    result -= result / n;     
    return result;
 }

int gcd(int m, int n)         //Euclidian Algorithm GCD 
                              //https://codereview.stackexchange.com/questions/37189/euclids-algorithm-greatest-common-divisor
{
    int r;
    if((m == 0) || (n == 0))
        return 0;
    else if((m < 0) || (n < 0))
        return -1;

    do
    {
        r = m % n;
        if(r == 0)
            break;
        m = n;
        n = r;
    }
    while(1);

    return n;
}


int findWays(int sq){
/*
    int i;
    int count=0;
  //  else{
        for(i=sq-1;i>sq/2;i--){
            if(gcd(i,sq-i)==1)count++;
    //    }
    }
*/



    return phi(sq)/2;
}

int main(void){
    unsigned long long N=10000000000;
    unsigned long long int seg=1;
    int sq=3;
    int i;

   double time_spent;
   clock_t end;
   clock_t begin = clock();
    N=N-1;


    while(N>sq){
        i=findWays(sq);

        //printf("N %llu sq %d numWays %d\n", N, sq, i);
        while((i>0)&&(N>sq)){
            N-= sq;
            seg+=2;
            i--;
        }
        sq++;

    }
    
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%llu, %f\n",seg+1, time_spent);
  
    return 0;
}