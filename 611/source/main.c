#include<stdio.h>
#include<stdlib.h>

void Sorting(int *);

int count = 9;

int main(){

	int a[10] = {1,3,8,9,7,2,5,10,4,6};

	Sorting(a);

	system("pause");
	return 0;
}

void Sorting(int *b){
	
	int tmp,i,j,k,SP = 0,SortCount = count;
	
	for(i=0;i< count;i++){
		
		SP = 0;
		
		for(j= 0;j<SortCount;j++){
			
			if(b[j]>b[j+1]){
				
				tmp = b[j+1];
				b[j+1] = b[j];
				b[j] = tmp;
			
			}
				
		}	
		
		SortCount--;
		
		for(k =0;k<10;k++){
			printf("%d ",b[k]);
		}
		printf("\n");
		
		for(k=9;k>0;k--){
			if(b[k]>b[k-1])
				SP++;
			else
				break;
		}	
		
		//printf("%d",SP);
			
		if(SP == 9)
			break;
	}
}





