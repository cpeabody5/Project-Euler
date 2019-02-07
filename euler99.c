#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
	FILE* fp=fopen("text99.txt", "r");
	int nums[1000][2];
	float numcheck;
	float nummax=0;
	int max=0;
	int i;

	for(i=0;i<1000;i++){
		fscanf(fp, "%d,%d", &nums[i][0], &nums[i][1]);
		numcheck=nums[i][1]*log(nums[i][0]);
		//printf("%d %d\n", max, nummax);
		if(numcheck>nummax){
			nummax=numcheck;
			max=i;
		}

	}
	printf("%d\n",max);
	return 0;
}