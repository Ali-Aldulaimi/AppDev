
#include "score.h"
#define MAX 30
void input_scores(int scores[]) {
int i, input = 0; 
int trash = 0;
printf("Enter scores,-1 to end:\n");
	
	for (i = 0; i < MAX && input != -1;i++) {
		if (input <0 || input >100 || input == 67 ){
		        	
		        printf("invalid input \n");
		         
	               }
	printf(" %d:",i+1);
	scanf("%d", &input);
	scores[i] = input;
	}


}
