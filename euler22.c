#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int myCompare (const void * a, const void * b ) {
    const char *pa = *(const char**)a;
    const char *pb = *(const char**)b;

    return strcmp(pa,pb);
}


int main(void){
	FILE*fp=fopen("namesTest.txt","r");
	char* names[3];
	int i;

	//char* zz[4] = {"aa","zz","bb","cc"};
	for(i=0;i<4;i++){
		fscanf(fp, "%s", *names);
	}


	printf("%s\n",names[1]);


	qsort(names, 3, sizeof(char*), myCompare);

	//printf("%s\n",zz[1]);

	return 0;
}

