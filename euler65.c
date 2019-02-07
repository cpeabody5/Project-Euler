#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<gmp.h>

//This is messy as fuck

int main(void){
	int i;
	int g =Z;
	int sum=0;
	char nums[100]={'0'};
	int b;
	mpz_t k;
	mpz_t n;
	mpz_t d;
	mpz_t gcd;
	int count=0;


	mpz_init(k);
	mpz_init(n);
	mpz_init(d);
	mpz_init(gcd);
	mpz_set_ui(k,66);
	mpz_set_ui(d,1);
	mpz_set_ui(n,1);
	mpz_set_ui(gcd,1);
	g=0;
	while(mpz_get_si(k)>0){
		//n+=d*1;
		if(g!=0){
		mpz_add(n,n,d);
		mpz_swap(n,d);

		printf("%d\n",1);
		count++;
		}
		g=1;
		//n+=k*d;
		mpz_addmul(n,k,d);
		mpz_swap(n,d);
		//n+=d*1;
		gmp_printf("%Zd\n",k);
		count++;
		
		mpz_add(n,n,d);
		mpz_swap(n,d);
		printf("%d\n",1);	
		count++;	


		mpz_sub_ui(k,k,2);
		//k=k-2;
		mpz_gcd(gcd,n,d);

		mpz_divexact(n,n,gcd);
		mpz_divexact(d,d,gcd);
	
	}

	mpz_addmul_ui(n,d,2);
	count++;


	gmp_printf("%Zd/%Zd\n",n,d);

	mpz_get_str(nums,10,n);

	//printf("%s\n",nums);
	i=0;
	while(nums[i]!='\0'){
		sum+=nums[i]-'0';
		i++;
	}
	printf("%d %d\n",count, sum);
	return 0;
}