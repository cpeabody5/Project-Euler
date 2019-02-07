#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(void){
		
	int i;
	int zz=1;
	for(i=0;i<30;i++){
		zz=zz<<1;
		printf("\t\t%d\n",zz);
	}

	return 0;

}