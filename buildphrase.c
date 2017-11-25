#include<stdio.h>
#include"pa5.h"

//as current (11/24/2017) all phrases are shoved into one string. Need to add phrase control
void transcribeString();

char* phraseList[1000];

char tempString[201];
//tempString[201] = '\0'
int tempStringIndex = 0;
int phraseListIndex= 0;


//Adds the next character to the temporary phrase string and then increments i IF the string is not full, otherwise it does nothing
void addCharacter(char c){

	if(tempStringIndex<=200){
		
		tempString[tempStringIndex] = c;
		tempStringIndex++;
	}

}


//Appends null terminator and resets the tempStringIndex
void addTerminator(){

	if(tempStringIndex<=201){
	
		tempString[tempStringIndex] = '\0';
	}

	//prints tempString, then resets its index for future use.	
	printString();
	printf("\n\nPhrase ended\n\n");
	tempStringIndex = 0;
	//Believe this is the problem. Assigning the address of tempString to phraseList[k], so when I try to print them all out, they're all pointers to the same location: tempString. - 11/24/2017
	//phraseList[phraseListIndex] = tempString;
	//transcribeString();
	//phraseListIndex++;
	//tempStringIndex = 0;
}


void printStringlist(){

	printf("here?");
	for(int zee=0;zee<5;zee++){
		
		for(int see=0;see<=200;see++){
		
			printf("%c", phraseList[zee][see]);
		}
		printf("\n");
	}


}	


void transcribeString(){

	int y = 0;
	printf("are we here at least?\n");
	while(tempString[y] != '\0'){
		printf("y is %d\n", y);
		char c;
		c = tempString[y];
		phraseList[phraseListIndex][y] = c;
		//Causing the problems...how to move literal value?
		//phraseList[phraseListIndex][y] = tempString[y];
		//
		y++;
	}

}




void printString(){

	int j = 0;
	while(tempString[j] != '\0'){

		printf("%c", tempString[j]);
		j++;
	}
	printf("\n");	
}



