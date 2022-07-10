#include <stdio.h>

// Beyzanur Çabuk - 150119632
// The purpose of this program is to calculate the total number of ears of rabbits using recursion, depending on whether they are even or odd.

int lineNumber; 

int earsOfBunnies(int numbersOfBunnies){
	int sumOfEars;
	switch(numbersOfBunnies%2)
	{
		// if the line has an even number of bunnies like 2,4,6...
		case 0:  				
			sumOfEars= 2 + earsOfBunnies(numbersOfBunnies - 1);  // recursive part
			printf("bunnyEars2(%d) -> %d\n",lineNumber,sumOfEars);
			lineNumber = lineNumber+1;
			return sumOfEars;
			break;
		
		// if the line has an odd number of bunnies lik 1,3,5,7...
		case 1:    			    
			sumOfEars= 3 + earsOfBunnies(numbersOfBunnies - 1);  // recursive part
			printf("bunnyEars2(%d) -> %d\n",lineNumber,sumOfEars);
			lineNumber = lineNumber+1;
			return sumOfEars;
			break;
			
		// if there is no bunnies in the line.
		default: 			
			sumOfEars=0;     
			printf("bunnyEars2(%d) -> %d\n",lineNumber,sumOfEars);
			lineNumber = lineNumber+1;
			return sumOfEars;
			break;	
	}	
}

int main() {
	
	printf("Please enter the number of number of lines (n=): "); 
	int bunnyNumbers; // bunny numbers
	scanf("%d",&bunnyNumbers);  // takes input of number of bunnies from the user 
	earsOfBunnies(bunnyNumbers-1);  // calls the function
	
}
