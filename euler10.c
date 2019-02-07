#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(void){
	FILE *fp;
	int grid[20][20];
	int i, j;
	char* filename = "Users/coady/Downloads/grid.txt";
	
	fp = fopen(filename, "r");

	if(fp==NULL){
		printf("could not open")
		return 1;
	}

	for(i=0;i<20;i++){
		for(j=0;j<20;j++){

		}
	}


}