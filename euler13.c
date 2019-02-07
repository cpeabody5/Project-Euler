#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	FILE *fp = fopen("text.txt", "r");
	char nums[100][51];
	char nums2[100][16];
	long long int nums3[100];
	long long int sum;

	int i; 
	for(i=0;i<100;i++){

		fscanf(fp, "%s", (nums+i)[0]);

		strncpy(nums2[i], nums[i],15);
		nums2[i][15]=0;

		sum+=atoll((nums2+i)[0]);
	}
	printf("%lli\n",sum);
	return(0);
}