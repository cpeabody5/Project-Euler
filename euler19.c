#include<stdio.h>
#include<stdlib.h>

int checkDate(int);
int count=0;

int main(void){
	int year;
	int date=2;		//Jan 1, 1901 was a Tuesday, Sunday := 0

	for(year=1901;year<2001;year++){

		date+=31;				//Jan
		date=checkDate(date);

		if(year%4==0){			//Feb
			date+=29;
			date=checkDate(date);
		}
		else{
		date+=28;
		date=checkDate(date);
		}

		date+=31;				//Mar
		date=checkDate(date);

		date+=30;				//Apr
		date=checkDate(date);

		date+=31;				//May
		date=checkDate(date);

		date+=30;				//June
		date=checkDate(date);

		date+=31;				//July
		date=checkDate(date);

		date+=31;				//Aug
		date=checkDate(date);

		date+=30;				//Sept
		date=checkDate(date);

		date+=31;				//Oct
		date=checkDate(date);

		date+=30;				//Nov
		date=checkDate(date);


		date+=31;				//Dec
		date=checkDate(date);
	}
	printf("%d\n", count);
	return 0;
}

int checkDate(int date){
	if(date%7==0){
		count++;
		date=date%7;
	}
	return date;
}