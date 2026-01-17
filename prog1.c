#include <stdio.h> // Necessary for printf()
#include <time.h>
#include <stdlib.h>

// TODO Other includes


int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	// TODO Complete the program

	srand(time(NULL));

	int myrand = rand() % 11;

	printf("%d\n", myrand);

	if (myrand <= 4) {
		printf("Eat more beef, kick less cats\n");
	} else if (myrand == 10) {
		printf("Larn is the best roguelike\n");
	} else {
		printf("FRODO LIVES\n"); 
	}

}
