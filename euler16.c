#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


int main(void){
	double i;
	char num[1000];
	int sum;
	int j=0;
	int test;
	i=pow(2,1000);

	snprintf(num,1000,"%lf",i);

	printf("%s\n",num);
	for(j=0;j<strlen(num);j++){
		printf("%d\n",num[j]-'0');
		sum+=num[j]-'0';
	}
	sum-=('.'-'0');
	printf("%d\n",sum);

	return 0;
}