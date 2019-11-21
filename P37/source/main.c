#include<stdio.h>
#include<stdlib.h>
#define S 100

int linearSearch(const int array[],int k,int s);

int main(){

	int a[S],x,SK,e;

	for(x = 0;x<S;x++)
		a[x] = 2*x;

	printf("Enter integer search key : ");
	scanf_s("%d",&SK);
	
	e = linearSearch(a,SK,S);
	
	if(e != -1)
		printf("Found value in element %d\n",e);
	else
		printf("Value not found\n");
		
		
	system("pause");
	return 0;
}

int linearSearch(const int array[],int k,int s){
	
	int n;
	for(n=0;n<s;n++){
		if(array[n] == k)
			return n;
	}
	return -1;
}
