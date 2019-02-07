#include<stdio.h>
#include<stdlib.h>
#include<float.h>

long double findProb(int);
long double nums[5000000]={0.0};

int main(void){
	int i;
	long double avg;

	nums[2]=0.5;
	nums[3]=2.0/3.0;
	nums[4]=0.5;
	for(i=2;i<100;i++){
		printf("%d %0.14Lf\n", i, findProb(i));
	}

	return 0;
}

long double findProb(int n){
	int i, j;
	long double sum=0.0;
	if(nums[n])return nums[n];
	for(i=2;i<=(n-2);i++){
		sum+=(findProb(i)*i/n+findProb(n-i)*(n-i)/n)/(n-3);
	}
	nums[n]=sum;
	return sum;
}