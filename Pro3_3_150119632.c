#include <stdio.h>

// Beyzanur Çabuk - 150119632
// The purpose of this program is to print identical triangles that nested each other recursively and created using two digits '_' (underscore) and '1'.


int main(){
	
	char triangle[32][63];  // declaring array
	int x,y;
	for (x=0;x<32;x++){		// filling first array with '_'
		for (y=0;y<63;y++){
			triangle[x][y]='_';
		}
	}
	
	
	int iteration;
	printf("Enter the iteration number: " );
	scanf("%d",&iteration);
	
	if (iteration>=5){
		printf("Invalid input. Please enter the number less than 5.");
	}
	
}
