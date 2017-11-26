#include<stdio.h>
#include"pa5.h"



//String storing the phrase being constructed
char tempString[201];
int tempStringIndex = 0;


//Adds the next character to the temporary phrase string and then increments i IF the string is not full, otherwise it does nothing
void addCharacter(char c){

	if(tempStringIndex<=200){
		
		tempString[tempStringIndex] = c;
		tempStringIndex++;
	}

}


//Appends null terminator to the phrase under construction and resets the tempStringIndex. 
//Then calls receiveString to commit the phrase to the data structure
void addTerminator(){

	if(tempStringIndex<=201){
	
		tempString[tempStringIndex] = '\0';
	}

	//prints tempString, then resets its index for future use.	
	tempStringIndex = 0;

	//sends tempString to be copied into the data structure
	receiveString(tempString);
}




