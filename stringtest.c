#include "stdio.h"
#include "strcpy.h"

int main(int argc, char **argv) {

	const char * STRINGTOCOPY = "Hello World";
	char * destination;
	
	printf("\n Destination is: ");
	puts(destination);

	printf("\n Copying STRINGTOCOPY to destination");
	destination = strcpy(destination, STRINGTOCOPY);

	printf("\n Destination is now: ");
	puts(destination);
	return 0;
}
