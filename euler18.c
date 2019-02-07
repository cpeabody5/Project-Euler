//also solution for 67.

#include<stdio.h>
#include<stdlib.h>
#define TRISIZE 100

int main(void){
	FILE * fp= fopen("text18.txt","r");
	int tria[TRISIZE][TRISIZE];
	int i, j, k, l;
	int col;
	int colsum;
	int cocolsum;
	int sum = 0;
	int trisum=0;

	for(i=0;i<TRISIZE;i++){		//init triangle
		for(j=0;j<TRISIZE;j++){
			tria[i][j]=0;
		}
	}

	for(i=0;i<TRISIZE;i++){		//enter data
		for(j=0;j<i+1;j++){
			fscanf(fp, "%d", &tria[i][j]);
			trisum+=tria[i][j];
		}
	}

	col=0;
/*
	for(i=0;i<TRISIZE;i++){			//first attempt here 
		sum+=tria[i][col];
		colsum=0;
		cocolsum=0;


		for(j=i;j<TRISIZE;j++){		//calculate sum of each edge of the triangle
			colsum+=tria[j][col];
			cocolsum+=tria[j][col+j-i];
		}
		printf("%d L: %d R: %d\n",tria[i][col],trisum-cocolsum,trisum-colsum);

		if((trisum-colsum)>(trisum-cocolsum)){		//if the right sub triangle is larger than the left 
			trisum-=colsum;
			col++;
		}
		else{
			trisum-=cocolsum;
		}
	}
*/
	for(i=TRISIZE-2;i>=0;i--){
		for(j=0;j<=i;j++){
			if(tria[i+1][j]>tria[i+1][j+1]){
				tria[i][j]+=tria[i+1][j];
			}
			else{
				tria[i][j]+=tria[i+1][j+1];
			}
		}
		for(k=0;k<TRISIZE;k++){
			for(l=0;l<TRISIZE;l++){
				printf("%d ",tria[k][l]);
			}
			printf("\n");
		}
	}

	printf("%d\n",tria[0][0]);
	
	return 0;
}