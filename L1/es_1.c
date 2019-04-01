#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){

	char name[100];

	do{

		printf("How is this program called?\n");
		scanf("%s", name);

		if(strcmp(argv[0],name) != 0){ printf("You're wrong, try again!");}

	} while(strcmp(argv[0], name) != 0);

	printf("You got it! Congratulations!\n");


	return 0;
}