#include<stdio.h>
#include<ctype.h>

int isignored(char);

//function takes an ASCII encoded integer and returns the corresponding value based upon the given rules: Whitespace is converted to a single space, alphabetic characters are converted to uppercase, and parentheses, quotes, and dashes are are all ignored
char preprocess(int c){
	
	char d = c;
//	printf("%c is what d is\n", d);

	if(isspace(c)){
		return ' ';
	}
	if(isalpha(c)){
		d = toupper(c);
		return d;	
	}
	//Should modify this so it returns a flag that will be ignored when writing characters to the temporary string
	if(isignored(d)){
//		printf("That is an ignored characters\n");
		return;
	}
	//if c does not trigger any above statements it is returned as a char
	return d;
}


//Checks the given argument against a list of characters to ignore. If the argument matches a character from the list 1 is returned, otherwise 0 is returned
int isignored(char suspect){

	if((suspect == '(') || (suspect == ')') || (suspect == '\'') || (suspect == '"') || (suspect == '-')){
		return 1;
	}

	return 0;

}
