//This is retarted...
#include<stdio.h>
#include<stdlib.h>

int main(void){
	int i;
	int zzz=0;
	int sum=0;
	int ones, tens, hund, thous;
	for(i=1;i<1001;i++){
		zzz=0;
		ones=0;
		tens=0;
		thous=0;
		hund=0;
		thous=(i/1000);
		hund=((i-thous*1000)/100);
		tens=((i-thous*1000-hund*100)/10);
		ones=(i-thous*1000-hund*100-tens*10);

		switch(thous){
			case 1:
				zzz+=3+8;
				break;
			default:
				break;
		}
		switch(hund){
			case 0:
				break;
			case 1:
				zzz+=3+7;
				break;
			case 2:
				zzz+=3+7;
				break;
			case 3:
				zzz+=5+7;
				break;
			case 4:
				zzz+=4+7;
				break;
			case 5:
				zzz+=4+7;
				break;
			case 6:
				zzz+=3+7;
				break;
			case 7:
				zzz+=5+7;
				break;
			case 8:
				zzz+=5+7;
				break;
			case 9:
				zzz+=4+7;
				break;
		}
		if((hund!=0)&&(tens+ones!=0))zzz+=3;
		switch(tens){
			case 0:
				break;
			case 1:
				switch(ones){
					case 0:
						zzz+=3;
						break;
					case 1:
						zzz+=6;
						break;
					case 2:
						zzz+=6;
						break;
					case 3:
						zzz+=8;
						break;
					case 4:
						zzz+=8;
						break;
					case 5:
						zzz+=7;
						break;
					case 6:
						zzz+=7;
						break;
					case 7:
						zzz+=9;
						break;
					case 8:
						zzz+=8;
						break;
					case 9:
						zzz+=8;
						break;
					}
				break;
			case 2:
				zzz+=6;
				break;
			case 3:
				zzz+=6;
				break;
			case 4:
				zzz+=5;
				break;
			case 5:
				zzz+=5;
				break;
			case 6:
				zzz+=5;
				break;
			case 7:
				zzz+=7;
				break;
			case 8:
				zzz+=6;
				break;
			case 9:
				zzz+=6;
				break;
		}
		if(tens!=1){
			switch(ones){
				case 0:
					break;
				case 1:
					zzz+=3;
					break;
				case 2:
					zzz+=3;
					break;
				case 3:
					zzz+=5;
					break;
				case 4:
					zzz+=4;
					break;
				case 5:
					zzz+=4;
					break;
				case 6:
					zzz+=3;
					break;
				case 7:
					zzz+=5;
					break;
				case 8:
					zzz+=5;
					break;
				case 9:
					zzz+=4;
					break;
			}
		}
		sum+=zzz;
		printf("%d %d %d %d %d\n", thous, hund, tens, ones, zzz);
		

	}
	printf("%d\n",sum);
	return 0;
}