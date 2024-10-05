
#include<stdlib.h>
#include<stdio.h>

#define num long long

int main(){
	const int capa = 1 << 15;
	int prIndex = 0;
	num prList[capa];
	int tstInd = 0;
	num val;
	prList[0] = 2;
	//prList[1] = 3;
	prIndex = 1;
	printf("2");
	for(val = 3;val < (1LL << 32);val+=2){
		for(tstInd = 0;tstInd < prIndex && prList[tstInd] * prList[tstInd] <= val;tstInd++){
			if(val % prList[tstInd] == 0)goto cont;
		}
		printf("%lli",val);
		if(prIndex < capa)
			prList[prIndex++] = val;
cont:
	}
	return 0;
}
