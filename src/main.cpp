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

int i;

printf("\nThis is aiplane\n-----------\n\n");

printf("Please start data stream...\n");

cout << "Please enter an integer value: ";
cin >> i;
cout << "The value you entered is " << i;
cout << " and its double is " << i*2 << ".\n";

if (i>=30){
                cout << "The value you entered was greater or equal to 30." << endl;
                cout << "It is likely that the data stream increment will be empty..." << endl;

        }

printf("Testing integer data stream increment:\n");
for(i; i<30; i++){

		stream(i);
}

cout << "\nDone.";
printf("\n\n");
return EXIT_SUCCESS;

}

