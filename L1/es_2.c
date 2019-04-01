#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){

	if(argc != 4){ 
		printf("Argument error.");
		return 1;
	}

	int a,b;
	//metto i valori presenti negli argv
	sscanf(argv[2], "%d", &a);
	sscanf(argv[3], "%d", &b); 

	if( strcmp(argv[1], "+") == 0){
		printf("The sum is: %d\n", a+b);
	} else if( strcmp(argv[1], "-") == 0) {
		printf("The difference is: %d\n", a-b);
	} else if( strcmp(argv[1], "*") == 0) {			// \* expected
		printf("The product is: %d\n", a*b);
	} else {
		printf("The ratio is: %d\n", a/b);
	}

	return 0;
}