#include<stdio.h>
#include<ctype.h>


//If the argument matches a list of phrase ending characters, the function returns 1, otherwise returns 0;
int isphraseender(char c){

	if((c == ',') || (c == '.') || (c == ';') || (c == ':') || (c == '?') || (c == '!')){
		return 1;
	}
	return 0;
		

}
//Checks to see if c is a character that begins a phrase. Returns 1 if so, 0 if not.
int isphrasebeginner(char c){

	if((!isphraseender(c)) && (!isspace(c))){
		
		return 1;
	}
	return 0;

}




