#include<stdio.h>
#include<stdlib.h>

//After doing 604 this was trivial, now I can do all the easy totient questions 

long long int phi (long long int n){    
   long long int result = n;   
   long long int i;  
	for (i=2; i*i<=n; ++i)  
    	if (n % i == 0){        
    		while (n % i == 0)     
       			n /= i;       
      			result -= result / i;     
    		}    
     if (n > 1)result -= result / n;     
    return result;
 }

 int main(void){
 	int i;
 	double max=0;
 	int maxi;
 	for(i=5;i<1000000;i++){
 		printf("%d %f\n", i, phi(i)/(double)i);
 		if((double)i/phi(i)>max){
 			max=(double)i/phi(i);
 			maxi=i;
 		}
	}
 	printf("%d %f\n",maxi, max);
 	return 0;

 }