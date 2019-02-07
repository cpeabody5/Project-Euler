#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(void){
	int n=1;
	int tria=0;
	int i;
	int count;

	while(count<500){
		count = 1;
		tria+=n++;

		for(i=1;i<=tria/2;i++){
			if(tria%i==0)count++;
		}
		printf("%d %d\n",count, tria);
	}

	printf("%d\n",tria);

	return(0);
}