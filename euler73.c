#include<stdio.h>
#include<stdlib.h>

int greatestCommonDivisor(int m, int n)			//Euclidian Algorithm GCD 
												//https://codereview.stackexchange.com/questions/37189/euclids-algorithm-greatest-common-divisor
{
    int r;
    if((m == 0) || (n == 0))
        return 0;
    else if((m < 0) || (n < 0))
        return -1;

    do
    {
        r = m % n;
        if(r == 0)
            break;
        m = n;
        n = r;
    }
    while(1);

    return n;
}

int main(void){
	
	int n, d, k;
	int check;
	int count=0;

	for(n=2;n<12000;n++){
		for(d=(2*n+1);d<3*n;d++){
			//printf("%d/%d\n",n,d);
			if((d<12001)&&(greatestCommonDivisor(n,d)==1))count++;

		}
	}


	printf("%d\n", count);
	return 0;
}