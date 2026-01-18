#include <stdio.h> // Necessary for printf()
#include <time.h>
#include <stdlib.h>

// TODO Other includes


int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	// TODO Complete the program

	srand(time(NULL)); // Enables to use rand() function in the programm.

	int myrand = rand() % 11;
	/*
	* Generates a pseudorandom number and stores its remainder when divided by
	* 11 into myrand. 
	*/

	if (myrand <= 4) { // checks if the variable <= 4
		printf("Eat more beef, kick less cats\n");
	} else if (myrand == 10) { // checks if the vareable is 10
		printf("Larn is the best roguelike\n");
	} else { // in all other cases, if 5 <= myrand <= 9
		printf("FRODO LIVES\n"); 
	}
	printf("The random number was: %d\n", myrand); // prints value of myrand
}
