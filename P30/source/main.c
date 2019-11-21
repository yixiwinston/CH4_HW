#include<stdio.h>
#include<stdlib.h>

void inv(int *b);

int main(){

	int i,a[3] = {3,5,7};
	for(i=0;i<3;i++)
		printf("%d ",a[i]);
	printf("\n");
	
	inv(a);
	
	for(i=0;i<3;i++)
		printf("%d ",a[i]);
	printf("\n");






	system("pause");
	return 0;
}

void inv(int *b){
	
	int tmp[3],j;
	for(j = 0;j<3;j++)
		tmp[2-j] = b[j];
	for(j = 0;j<3;j++)
		b[j] = tmp[j];
	
}
