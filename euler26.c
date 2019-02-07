#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	int i, j, k, z, ff;
	int count;
	int max=0;
	int maxi;
	int nums[10000];
	int check;
	for(i=2;i<1001;i++){
		j=0;

		memset(nums, 0, sizeof(nums));
		check=1;
		z=1;

		while(check){
			
			nums[j]=z;
			z=z%i;
			
			if((z==0)||(j==999))check=0;
			z*=10;
			for(k=0;k<j;k++){
				if(nums[j]==nums[k]){
					check=0;
					count=j-k;
					if(count>max){
						max=count;
						maxi=i;
					}
					break;
				}
			}



			j++;
		}

									printf("%d!!!\n", i);
							for(ff=0;ff<10;ff++){
							printf("%d\n",nums[ff]);
							}
	}
	printf("%d\n", maxi);

	return 0;
}