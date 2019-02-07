#include<stdio.h>
#include<stdlib.h>

#define N 1000000



int main(void){
	int i; 
	int cnt;
	long int num;
	int maxnum;
	int maxcnt=0;
	int nums[N];
	for(i=1;i<N;i++){
		nums[i]=i;
	}

	for(i=N-1;i>1;i--){
		num=nums[i];
 		cnt=0;

		while(num>1){
			if(num%2==0){
				num=num/2;
			}
			else{
				num=(3*num)+1;
			}
			cnt++;
			if((num<N-1)&&(num>1))nums[num]=0;
		
		}
		if(cnt>maxcnt){
			maxcnt=cnt;
			maxnum=i;
		}

	}
	printf("%d, %d\n",maxnum, maxcnt);

	return(0);
}