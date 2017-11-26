#include<stdio.h>
#include"pa5.h"


char* phraseList[1000];

char tempString[201];
int tempStringIndex = 0;
int phraseListIndex= 0;

//debugging list and flag
char debugList[201];
int flag = 0;


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
//	printString();
//	printf("\n\nPhrase ended\n\n");
	tempStringIndex = 0;

	//sends tempString to be copied into the data structure
	receiveString(tempString);



	//Everything commented below here is probably good to be removed


	//debugging - trying to figure out how to copy into a list of strings (if possible).	
//	if(flag == 0){
//		phraseList[0] = tempString;
//		printf("%s is phraseList[0]\n", phraseList[0]);
//		flag = 1;	
//	}
//	printf("%s is phraseList[0]\n");

	//figuring out how writing info to new list will work (if it will). First pass through the string should be copied, then the flag is raised and shouldn't be written to again.
	//int debugIndex = 0;
	//printf("%d is the value of flag\n", flag);
	//if(flag == 0){	
	//	printf("Are we here?");
	//	while(tempString[debugIndex] != '\0'){
	//		printf("do we make it inside69?");
	//		debugList[debugIndex] = tempString[debugIndex];
	//		flag = 1;
	//		debugIndex++;
	//	}
	//	debugIndex = 0;
	//}
}

void printString(){

	int j = 0;
	while(tempString[j] != '\0'){

		printf("%c", tempString[j]);
		j++;
	}
	printf("\n");	
}



