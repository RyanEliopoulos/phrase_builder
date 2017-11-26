#include<stdio.h>
#include"pa5.h"


//will need to remember to change this
void main(){

	int c;
	c = fgetc(stdin);
	
	//flag indicating a phrase is in progress if 1
	int phraseStarted = 0;

	//Continues processing input until EOF is reached.
	while(c != EOF){
	
		//preprocesses c: screens for ignore characters, all whitespace = 1 space, and all alpha characters are returned capitalized
		c = preprocess(c);
			
		//skips processing c should it be an ignored character
		if(!isignored(c)){
			
			//Determines if c begins a new phrase
			if((isphrasebeginner(c)) && (!phraseStarted)){
				
				phraseStarted = 1;
				addCharacter(c);
			}
			
			//Determines if c continues the current phrase
			else if((phraseStarted) && (!isphraseender(c))){
				
				addCharacter(c);
			}

			//Determines if c ends the current phrase
			else if(isphraseender(c)){
				
				phraseStarted = 0;
				addCharacter(c);
				addTerminator();
			}
			//If the last thing typed before pressing enter is a phrase ending character, there must be a carriage return or something read afterward that gets read after the phrase ends. Here lies that whitespace. RIP
			else if(c == ' '){
			//	printf("c is a rebel without  cause\n");
			}
			//uh oh
			else{
				printf("Something unaccounted for occured (5)\n");
			}
		}
		//retrieves next character for analysis
		c = fgetc(stdin);
	}	
	
	//prints out the phraseText for all structs in our data structure
	printPhraseList();	

}

