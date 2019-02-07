#include<stdio.h>
#include<stdlib.h>

long fact(int m){
	if(m==0)return 1;
	else return m*fact(m-1);
}

int main(void){
	int nums[10];
	int count;
	int i;
	int check;
	long int a=1000000;
	for(i=10;i>0;i--){
		check=1;
		count=0;
		while(check==1){
			if(a-fact(i-1)>0){
				count++;
				a=a-fact(i-1);
			}
			else{
				check=0;
				nums[10-i]=count;
			}
		}
	}

	for(i=0;i<10;i++){
		printf("%d ",nums[i]);
	}

	return 0;
}