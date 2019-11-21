#include<stdio.h>
#include<stdlib.h>
#define S 10


int main(){

	int s[S] = {1,3,5,7,9,2,4,6,8,10};
	int i,j;
	
	printf("%s%13s%19s\n","elements","value","histogram");
	
	for(j=0;j<S;j++){
		
		printf(" %7d%13d%10s",j,s[j]," ");
		for(i=1;i<=s[j];i++){
			
		printf("*");	
			
		}
		printf("\n");
	}


	system("pause");
	return 0;
}

