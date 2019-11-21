#include<stdio.h>
#include<stdlib.h>

int main(){

	int N[10] = {1,24,32,4,15,26,37,48,79,210};
	int I;
	
	printf("%s%13s\n","elements","value");

	for(I=0;I<10;I++){
	
	printf("%7d%13d\n",I,N[I]);

	}
	system("pause");
	return 0;
}

