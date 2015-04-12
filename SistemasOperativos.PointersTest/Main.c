/*
 * Main.c
 *
 *  Created on: 11/4/2015
 *      Author: utnso
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

	char * name = strdup("Santiago");
	char * surname = strdup(" Molina de Castro\n");

	printf("First letter of name = %c\n",*name);
	printf("Second leter of name = %c\n",name[1]);


	int lengthOfName = strlen(name)*sizeof(char);
	int lengthOfSurname = strlen(surname)*sizeof(char);

	strcat(name,surname);

	int pos;

	for (pos = 0; pos < strlen(name); pos++){
		printf("%c",name[pos]);
	}
	printf("Liberó memoria correctamente");

	free(surname);
	free(name);

	printf("Liberó memoria correctamente");

}
