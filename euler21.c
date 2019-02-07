#include<stdio.h>
#include<stdlib.h>

int main(void){
	int num[10001]={0};
	int i, j;
	int sum;
	int totsum=0; 

	for(i=1;i<10000;i++){
		sum=0;
		for(j=1;j<i;j++){
			if(i%j==0)sum+=j;
		}
		num[i]=sum;
	}

	for(i=1;i<10000;i++){
		//printf( "%d %d\n", i, num[i]);
		if((num[i]<10001)&&(num[i]!=i)&&(num[num[i]]==i)){
			printf("%d %d\n", i , num[i]);
			totsum+=i;
		}
	}
	printf("%d\n",totsum);
	return 0;
}