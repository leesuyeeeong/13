#include <stdio.h>
#include <stdlib.h>	
	
struct Book {
	int number;
	char title[10];
};

void main(void) {
	int i;
	struct Book **bookshelf;

	bookshelf = (struct Book**)malloc(3 * sizeof (struct Book*));
	for (i=0;i<3;i++)
		bookshelf[i] = (struct Book*)malloc(10 * sizeof (struct Book));
}
