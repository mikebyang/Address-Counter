#include <stdio.h>
#include <stdlib.h>
#include "count.h"

int main(int argc, char** argv){
	if(argc!=2){
		printf("error\n");
		exit(0);
	}
	FILE* fp = fopen(argv[1],"r");
	if(fp == NULL){
		printf("error\n");
		exit(0);	
	}
	unsigned long int addr;
	int uniq;
	int key;
	bst* arr[1000];
	int i;
	for(i=0; i<1000; i++){
		arr[i] = NULL;
	}
	uniq = 0;
	while(fscanf(fp, "0x%lx\n", &addr) == 1){
		key = addr%999;
		addrc(addr, &uniq, &arr[key]);
	}
	printf("%d\n",uniq);
	
	
	return 0;
}
