#include<stdio.h>




char tempString[201];
tempString[201] = '\0'
int i = 0;


void addCharacter(char c){

	if(i<200){
		
		tempString[i] = c;
		i++;
	}

}

void addTerminator(){

	tempString[i] = '\0';
}


void printString(){

	int j = 0;
	while(tempString[j] != '\0'){

		printf("%c", tempString[j]);
		j++;
	}	


