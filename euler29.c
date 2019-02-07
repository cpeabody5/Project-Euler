#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(void){
	int i, j, k;
	long long int nums[10000]={0};
	for(i=2;i<101;i++){
		for(j=2;j<101;j++){
			nums[j+100*(i-2)]=pow(j,i);
			for(k=0;k<10000;k++){

			}
		}
	}
	for(i=0;i<10000;i++){
		printf("%lld\n",nums[i]);
	}
	
	return 0;
}