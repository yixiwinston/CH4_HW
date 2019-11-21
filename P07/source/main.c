#include<stdio.h>
#include<stdlib.h>
#define S 12


int main(){

	int s[S] = {1,3,5,7,9,2,4,6,8,10,12,14};
	int j;
	int t=0;
	
	for(j=0;j<S;j++){
		
		t +=s[j];
	}


	printf("Total of array element values is %d\n",t);
		


	system("pause");
	return 0;
}




