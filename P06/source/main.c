#include<stdio.h>
#include<stdlib.h>
#define S 10


int main(){

	int s[S];
	int j;
	
	for(j=0;j<10;j++){
		
		s[j] = 2 + 2*j;
		
	}

	printf("%s%13s\n","elements","value");
	
	for(j=0;j<S;j++){
		
		printf("%7d%13d\n",j,s[j]);
		
	}


	system("pause");
	return 0;
}

