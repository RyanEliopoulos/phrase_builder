#include<stdio.h>
#include"preprocess.h"
#include"phrasedetection.h"


void main(){

	int c;
	c = fgetc(stdin);
	int phraseStarted = 0;

	while(c != EOF){
	
		//preprocesses c: screens for ignore characters, all whitespace = 1 space, and all alpha characters are returned capitalized
		c = preprocess(c);
			
		//printf("%c   %d\n ", c, c);				
		//skips processing c should it be an ignored character
		if(!isignored(c)){
			//Determines if c begins a new phrase
			if((isphrasebeginner(c)) && (!phraseStarted)){
				
				phraseStarted = 1;
				printf("\\\\Beginning phrase \\\\\n");
				printf("%c", c);
				//string.append(c)
				addCharacter(c);
			}
			//Determines if c continues the current phrase
			else if((phraseStarted) && (!isphraseender(c))){
				//Accounts for the empty return preprocess gives when the character is to be ignored
				printf("inside phrase continue\n");
				printf("%c", c);	
				//string.append(c)
				addCharacter(c);
			}
			//Determines if c ends the current phrase
			else if(isphraseender(c)){
				phraseStarted = 0;
				//string.append(c)
				printf("\\\\Phrase has endeded \\\\\n");
				//from buildphrase.c. Debugging strings
				addCharacter(c);
				printString();
			}
			//If the last thing typed before pressing enter is a phrase ending character, there must be a carriage return or something read afterward that gets read after the phrase ends. Here lies that whitespace. RIP
			else if(c == ' '){
				printf("c is a rebel without  cause\n");
			}
			//uh oh
			else{
				printf("Something unaccounted for occured (5)\n");
			}
		}
		//retrieves next character for analysis
		c = fgetc(stdin);
	}	

}

