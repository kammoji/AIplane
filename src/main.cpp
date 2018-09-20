#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int stream(int data);



int stream(int data){

	printf("%d", data);
	printf("\n");
	return EXIT_SUCCESS;

}

int main(void){

printf("\nThis is aiplane\n-----------\n\n");

printf("Please start data stream...\n");

printf("Testing integer data stream:\n");
for(int i=0; i<8; i++){

	stream(8);
}

cout << "\nDone.";
printf("\n\n");
return EXIT_SUCCESS;

}

