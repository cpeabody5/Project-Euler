#include<stdio.h>
#include<stdlib.h>

long factorial(int);
long choose(int, int);


int main(void){
	float exp=0.0;
	int i;
	for(i=2;i<8;i++){

	}

	return 0;
}

long factorial(int n){
	int i;
	long o=1;
	for(i=1;i<=n;i++){
		o*=i;
	}
	return o;
}

long choose(int n, int k){
	long o;
	o=factorial(n)/(factorial(k)*factorial(n-k));
	return o;	
}