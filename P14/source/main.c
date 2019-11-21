#include<stdio.h>
#include<stdlib.h>
#define stus 3
#define exams 4

int mini(const int grades[][exams],int pupils,int tests);
int maxi(const int grades[][exams],int pupils,int tests);
double av(const int SetOfGrades[],int tests);
void pa(const int grades[][exams],int pupils,int tests);

int main(){

	int stu;
	const int stuG[stus][exams] = 
	{	
		{77,88,99,100},
		{98,87,76,65},
		{70,80,85,88}	
	};

	printf("The array is:\n");
	pa(stuG,stus,exams);

	printf("Lowest grade:%d, Highest grade:%d\n",mini(stuG,stus,exams),maxi(stuG,stus,exams));

	for(stu = 0;stu<stus;stu++){
		
		printf("The average grade for students %d is %.2f\n",
		stu ,av(stuG[stu],exams));
		
		
	}

	system("pause");
	return 0;
}

void pa(const int grades[][exams],int pupils,int tests){
	
	int i,j;
	
	printf("                [0]  [1]  [2]  [3]");
	
	for(i = 0;i<pupils;i++){
		printf("\nstudentGrades[%d]",i);
		for(j = 0;j<tests;j++){
			printf("%-5d",grades[i][j]);
		}
	}
	
} 

int mini(const int grades[][exams],int pupils,int tests){
	
	int i,j,LG = 100;
	
	for(i=0;i<pupils;i++){
		for(j=0;j<tests;j++){
			if(grades[i][j]<LG){
				LG = grades[i][j];
			}
		}
	}
	
	return LG;
	
}

int maxi(const int grades[][exams],int pupils,int tests){
	
	int i,j,HG = 0;
	
	for(i=0;i<pupils;i++){
		for(j=0;j<tests;j++){
			if(grades[i][j]>HG){
				HG = grades[i][j];
			}
		}
	}
	
	return HG;
	
}

double av(const int SetOfGrades[],int tests){
	
	int i,t=0;
	
	for(i=0;i<tests;i++){
		t += SetOfGrades[i];
	}
	
	return(double)t / tests;
	
}






