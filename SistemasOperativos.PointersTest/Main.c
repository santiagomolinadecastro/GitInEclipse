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

	char * name = malloc(sizeof(char)*12);
	char * surname = malloc(sizeof(char)*(strlen(" Molina de Castro\n")+1));

	strcpy(name,"Santiago");
	strcpy(surname," Molina de Castro\n");

	printf("First letter of name = %c\n",*name);
	printf("Second leter of name = %c\n",name[1]);

//	name = (char*)realloc(name,sizeof(char)*strlen(surname));
//	strcat(name,surname);

	int pos;

	for (pos = 0; pos < strlen(name); pos++){
		printf("%c",name[pos]);
	}

	free(surname);
	free(name);

	return 0;

}
