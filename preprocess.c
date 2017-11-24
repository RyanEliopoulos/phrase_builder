#include<stdio.h>
#include<ctype.h>

int isignored(char);

//function takes an ASCII encoded integer and returns the corresponding value based upon the given rules: Whitespace is converted to a single space, alphabetic characters are converted to uppercase, and parentheses, quotes, and dashes are are all ignored
char preprocess(int c){
	
	char d = c;

	if(isspace(c)){
		return ' ';
	}
	if(isalpha(c)){
		d = toupper(c);
		return d;	
	}
	
	return d;
}


//Checks the given argument against a list of characters to ignore. If the argument matches a character from the list 1 is returned, otherwise 0 is returned
int isignored(char suspect){

	if((suspect == '(') || (suspect == ')') || (suspect == '\'') || (suspect == '"') || (suspect == '-')){
		return 1;
	}

	return 0;

}
