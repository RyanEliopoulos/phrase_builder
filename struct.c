#include<stdio.h>
#include<string.h>

void printPhraseList();


//data structure that tracks unique phrases and their occurences
typedef struct{

	char phraseText[201];
	int count;

	}Phrase;

Phrase phraseList[1000];
//tracks length of phraseList
int phraseCount = 0;


//Searches data structure for a match with inputString and increments phrase count if found, otherwise appends inputString to data structure
void receiveString(char* inputString){

	int j = 0;

	//Acts as a flag indicating no match has been found
	int searchContinues = 1;	
	//search through struct list for a phrase match (testing/writing)
	while((j < phraseCount) && (searchContinues)){
	
//		printf("inside struct search loop 1\n");	
		int i = 0;
		
		//continues iterating over the phrases as long as they match	
		while((inputString[i] == phraseList[j].phraseText[i]) && (searchContinues)){

//			printf("inside struct search loop 2\n");

			//Increments phraseList[j].count if the inputString is found to match.
			if(inputString[i] == '\0'){
//				printf("We've got a match!\n");
//				printf("%s matches %s\n", inputString, phraseList[j].phraseText); 
				phraseList[j].count = phraseList[j].count + 1;
				searchContinues = 0;
			}
			i++;	
		}
		j++;

	}

	//searchContinues will be true if no match was found within the data structure
	//The phrase is added to the data structure if true.
	if(searchContinues){

		//Checks phraseCount is within bounds
		if(phraseCount <= 1000){
		
		//Copies the inputString into the next available slot
		strcpy(phraseList[phraseCount].phraseText, inputString);

		//Sets count value of new phrase to 1 instead of 0;
		phraseList[phraseCount].count++;
		phraseCount++;
		}
	}
}	


//Iterates through the list of phrases and prints the phraseText and occurence count of each
void printPhraseList(){
	
	for(int p = 0;p<phraseCount;p++){
		
		printf("%05d <%s>\n", phraseList[p].count, phraseList[p].phraseText);
	}
}

