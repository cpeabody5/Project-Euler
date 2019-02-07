#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(void){
	FILE *fp =fopen("grid.txt", "r");
	int grid[20][20];
	int i, j, k;
	int maxn=0;
	int diaga, diagb, row, col;

	if(fp==NULL){
		printf("could not open");
		return 1;
	}


	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			fscanf(fp, "%d", &grid[i][j]);
		}	
	}	
	printf("%d\n", grid[0][5]);
	for(i=0;i<17;i++){
		for(j=0;j<17;j++){
			diaga=1;
			diagb=1;
			row=1;
			col=1;
			for(k=0;k<4;k++){
				diaga=diaga*grid[i+k][j+k];
				diagb=diagb*grid[i+3-k][j+k];
				row=row*grid[i][j+k];
				col=col*grid[i+k][j];
			}
			if(diaga>maxn)(maxn=diaga);
			if(diagb>maxn)(maxn=diagb);
			if(row>maxn)(maxn=row);
			if(col>maxn)(maxn=col);

		}
	}
	printf("%d\n", maxn);
	return(0);

}