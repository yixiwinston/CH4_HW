#include<stdio.h>
#include<stdlib.h>



int main(){

	char str1[20];
	char str2[] = "string literal";
	int i;
	
	printf("Enter a string: ");
	scanf_s("%s",&str1,20);
	
	printf("string1 = %s\nstring2 = %s\n",str1,str2);
	printf("string1 with spaces between characters is :\n");

	for(i=0;str1[i] != '\0';i++){	//'\0' = space 
		
		printf("%c",str1[i]);
		
	}

	printf("\n");


	system("pause");
	return 0;
}

