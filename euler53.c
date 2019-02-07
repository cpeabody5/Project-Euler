#include<stdio.h>
#include<stdlib.h>

//working with large numbers in C is not fun, had to use long doubles in the end.
//If a number in Pascal's triangle is greater than 1,000,000 all numbers in the 
//sub-triangle starting with that number will also be greater than 1,000,000
//(e.g. starting from 23C10 all numbers nC10, n>23 will be greater than 1,000,000).
//This property, combined with the symmetry of the triangle, means only entries along 
//the left edge of the triangle have to be checked. 

long double fact(int n){
	if(n==0)return 1;
	return(n*fact(n-1));
}

long double choose(int n, int r){
	return(fact(n)/(fact(r)*fact(n-r)));
}

int main(void){
	int i,c;
	int column=10;
	int count=0;
	
	for(i=23;i<101;i++){			
		for(c=0;c<column;c++){
			if(choose(i,c)>1000000){
				column=c;
			}
		}
		count+=i-2*column+1;
	}
	printf("%d\n",count);
	return 0;
}