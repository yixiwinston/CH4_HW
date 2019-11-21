#include<stdio.h>
#include<stdlib.h>

//static �ܼơA�|�@���s�b�O���餧���A�Y�Ϩ禡���槹���A�ܼƤ]���|���� 
//���I���������ܼ�
 
void staticArrayInit(void);		
void automaticArrayInit(void);

int main(){

	printf("First call to each function:\n");
	staticArrayInit();
	automaticArrayInit();

	printf("\n\nSecond call to each function:\n");
	staticArrayInit();
	automaticArrayInit();
	
	printf("\n");

	system("pause");
	return 0;

}
void staticArrayInit(){
	
	static int a1[3];
	int i;
	
	printf("\nValue on entering staticArrayInit:\n");
	
	for(i=0;i<=2;i++)
		printf("Array1[%d] = %d  ",i,a1[i]);
		
	printf("\nValue on exiting staticArrayInit:\n");
	
	for(i=0;i<=2;i++)
		printf("Array1[%d] = %d  ",i,a1[i]+= 5) ;
		
}

void automaticArrayInit(){
 	int a2[3] = {1,2,3};
	int i;
	
	printf("\nValue on entering automaticArrayInit:\n");
	
	for(i=0;i<=2;i++)
		printf("Array2[%d] = %d  ",i,a2[i]);
		
	printf("\nValue on exiting automaticArrayInit:\n");
	
	for(i=0;i<=2;i++)
		printf("Array2[%d] = %d  ",i,a2[i]+= 5) ;
		
	
	
	
}
