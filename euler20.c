#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	int num[200];
	int i,j;
	int carry;
	int sum;

	for(i=0;i<201;i++){
		num[i]=0;
	}
	num[0]=1;
	carry=0;
	for(i=1;i<101;i++){
		for(j=0;j<200;j++){
			num[j]=num[j]*i;
			num[j]+=carry;
			carry=num[j]/10;
			num[j]=num[j]%10;
		}
	}
	for(i=200;i>=0;i--){
		sum+=num[i];

	}
	printf("%d\n",sum);
	return 0;

}