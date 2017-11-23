#include<stdio.h>
#include<ctype.h>

int isignored(char);

char preprocess(int c){
	
	char d = c;
	printf("%c is what d is\n", d);

	if(isspace(c)){
		return ' ';
	}
	
	if(isalpha(c)){
		d = toupper(c);
		return d;	
	}
	if(isignored(d)){
		printf("That is an ignored characters\n");
		return;
	}
}


//Checks the given argument against a list of characters to ignore. If the argument matches a character from the list 1 is returned, otherwise 0 is returned
int isignored(char suspect){

	if((suspect == '(') || (suspect == ')') || (suspect == '\'') || (suspect == '"') || (suspect == '-')){
		return 1;
	}

	return 0;

}
