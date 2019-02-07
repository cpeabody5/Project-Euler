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

int main(void){         //brute force right now 
	
	long int n, d, k;
	int check;
	int count=0;

	for(n=1;n<1000000;n++){
		for(d=2;d<1000000;d++){
			//printf("%d/%d\n",n,d);
			if((greatestCommonDivisor(n,d)==1))count++;

		}
	}


	printf("%d\n", count);
	return 0;
}