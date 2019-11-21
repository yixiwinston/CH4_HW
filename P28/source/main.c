#include<stdio.h>
#include<stdlib.h>
#define S 5

void modifyArray(int b[],int s);
void modifyElement(int e);

int main(){

	int a[S] = {0,1,2,3,4};
	int i;

	printf("Effects of passing entire array by reference:\n\n");
	printf("The values of the original array are:\n");

	for(i=0;i<S;i++)
		printf("%3d",a[i]);
	printf("\n");

	modifyArray(a,S);
	printf("The values of the modified array are:\n");
	for(i=0;i<S;i++)
		printf("%3d",a[i]);
	printf("\n\n\n");

	printf("Effects of passing entire array by reference:\n\n");
	printf("The values of a[3] is %d:\n",a[3]);
	
	modifyElement(a[3]);
	printf("The values of a[3] is %d:\n",a[3]);


	system("pause");
	return 0;
}

void modifyArray(int b[],int s){
	
	int j;
	
	for(j=0;j<s;j++){
		b[j] *= 2;
	}
	
}

void modifyElement(int e){
	printf("Value in modifyElement is %d\n",e *= 2);
}

