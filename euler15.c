/*sovled this w/ Pascal's triangle 
there are (nCi) ways to get to the ith point along the 
main diagonal of the Latice, and (nCi) ways to get from that 
point to the bottom, so the answer is the nth row of 
Pascal's triangle squared then summed
*/

#include<stdio.h>
#include<stdlib.h>
#define n 20

long factorial(int);


int main(void){

	long int ans=0;
	int i;
	long int zz;

	for(i=0;i<n+1;i++){
		zz=factorial(n)/(factorial(i)*factorial(n-i));
		ans+=zz*zz;
	}
	
	printf("%li\n",ans);

	return 0;
}
long factorial(int a){
	int i;
	long fact=1;
	for(i=1;i<a+1;i++){
		fact*=i;
	}
	return fact;
}