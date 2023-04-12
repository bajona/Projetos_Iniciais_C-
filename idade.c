#include <stdio.h>
#include <stdlib.h>

int main () {
	int anos;
		
	printf("\nQuantos anos voce tem?\n");
	scanf("%d", &anos);

	if (anos < 30) printf ("\nVoce eh muito jovem!");
	
	return 0;
}