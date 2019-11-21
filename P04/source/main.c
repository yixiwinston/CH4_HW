#include<stdio.h>
#include<stdlib.h>

int main(){

	int N[10];
	int I;
	
	for(I=0;I<10;I++){
	
		N[I] = 0;
	
	}

	for(I=0;I<10;I++){
	
	printf("%7d%13d\n",I,N[I]);

	}
	system("pause");
	return 0;
}

