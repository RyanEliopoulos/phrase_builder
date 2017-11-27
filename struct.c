#include<stdio.h>
#include<string.h>

void printPhraseList();
void swap(int);

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
	
		int i = 0;
		
		//continues iterating over the phrases as long as they match	
		while((inputString[i] == phraseList[j].phraseText[i]) && (searchContinues)){

			//Increments phraseList[j].count if the inputString is found to match.
			if(inputString[i] == '\0'){
				
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


void sortPhraseList(){

	//flag indicating the sorting is still in progress
	int sorting = 1;	

	while(sorting){

		//Indicates sorting is finished unless a swap takes place
		sorting = 0;

		//Compares each phrase with the one after it (bubble sorting)
		for(int i = 0;i<(phraseCount-1);i++){
			
			if(strlen(phraseList[i].phraseText) > strlen(phraseList[i+1].phraseText)){

				//swaps the informations of phraseList[i] and phraseList[i+1]
				swap(i);
				
				//flags sort as in process
				sorting = 1;
	
			}
		}
	}
}

void swap(int swapIndex){

	char tempPhrase[201];
	int tempCount;

	//moves info to temp variables
	strcpy(tempPhrase, phraseList[swapIndex].phraseText);
	tempCount = phraseList[swapIndex].count;	
	

	//moves second phrase up one
	strcpy(phraseList[swapIndex].phraseText, phraseList[swapIndex+1].phraseText);
	phraseList[swapIndex].count = phraseList[swapIndex+1].count;


	//moves the first phrase down one
	strcpy(phraseList[swapIndex+1].phraseText, tempPhrase);
	phraseList[swapIndex+1].count = tempCount;


}


//Iterates through the list of phrases and prints the phraseText and occurence count of each
void printPhraseList(){
	
	for(int p = 0;p<phraseCount;p++){
		
		printf("%05d <%s>\n", phraseList[p].count, phraseList[p].phraseText);
	}
}

