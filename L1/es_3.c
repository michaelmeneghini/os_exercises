#include <stdio.h>

void reverseInt(int x){

	while(x != 0){
		int c = x%10;
		x /= 10;
		putchar(c+48);
	}
	printf("\n");
}

int main(){

	int x;
	printf("Inserisci un valore intero: ");
	scanf("%d", &x);
	reverseInt(x);

	return 0;
}

