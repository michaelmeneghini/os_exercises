#include <stdio.h>

int main(int argc, char* argv[]){
	int i;
	//stampo il numero degli argomenti passati da linea di comando
	printf("argc= %d\n", argc);
	//stampo gli argomenti uno ad uno
	for(i=0; i<argc; i++){
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	
	return 0;
}