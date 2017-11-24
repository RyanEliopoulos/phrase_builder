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
				
		if((isphrasebeginner) && (!phraseStarted)){
			phraseStarted = 1;
			printf("\\\\Beginning phrase \\\\\n");
			printf("%c", c);
			//string.append(c)
			
		}
		else if((phraseStarted) && (!isphraseender(c))){
			//Accounts for the empty return preprocess gives when the character is to be ignored
			if(c != 001){
				printf("%c", c);
				//string.append(c)
			}
			

		}
		else if(isphraseender(c)){
			phraseStarted = 0;
			printf("\\\\Phrase has endeded \\\\\n");
		}
		else{
			printf("Something unaccounted for occured (5)\n");
		}


		c = fgetc(stdin);
	}	

}

