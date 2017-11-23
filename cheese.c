#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void main(int argc,char** argv){

	int c, i = 0;
	char array[50];


	c = getchar();
	while(c != EOF){
		array[i] = c;
		c = getchar();
	}
	
	int k = strlen(array);
	for(int j = 0;j<k;j++){
		printf("%c", array[j]);
	}
	printf("%d", k);
	
	int cheese = 0;
	if(1 && !cheese){
		printf("Failure\n");
	}	

}
