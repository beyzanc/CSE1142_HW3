#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Beyzanur Çabuk - 150119632
// The purpose of this program is to calculate the super digit of number, meaning whole sum of whole digits.



int superDigit (int number){  // function to calculate super digit for the number entered as a parameter
	
	if(number < 10){
		return number;
	}
	int temp  = 0;
	while(number){
        temp += number% 10;
        number /= 10;
    }
    return superDigit(temp);  // recursive part
    
}


int digit(int number){ // function to find the number of digits
	
	if (number==0){
		return 0;
    }
	return 1+digit(number/10);  // recursive part 
	
}

unsigned long long concatNum(int basamak,int number,unsigned long long concat,int k){  // function to find concatenated number
  
	if(k==1){
		return concat;
	}
	concat=pow(10,basamak)*concat+number;
	return concatNum(basamak,number,concat,k-1);  // recursive part
	
}


int main(void) {
	
  int number,rnumber,basamak;
  unsigned long long concat;
  
  printf("Please enter a number (n=) : ");
  scanf("%d",&number);
  int tempNumber=number;
  
  printf("Please enter repetition factor (k=) : ");
  scanf("%d", &rnumber);
  
  basamak=digit(tempNumber);
  concat=number;	
  tempNumber*=rnumber;
  
  printf("Super digit of number %llu is %d.",concatNum(basamak,number,concat,rnumber),superDigit(tempNumber));
  return 0;
  
}
