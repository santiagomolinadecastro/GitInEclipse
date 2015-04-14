/*
 * Main.c
 *
 *  Created on: 11/4/2015
 *      Author: utnso
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int year;
	int month;
	int day;
}Student;


int validateMemoryAllocation(void* variable){

	if (variable == NULL) return 1;
	else return 0;

}

int main (){

	char * name = malloc(sizeof(char)*12);
	char * surname = malloc(sizeof(char)*(strlen(" Molina de Castro\n")+1));

	strcpy(name,"Santiago");
	strcpy(surname," Molina de Castro\n");

	printf("First letter of name = %c\n",*name);
	printf("Second leter of name = %c\n",name[1]);

	//name = (char*)realloc(name,sizeof(char)*strlen(surname));
	//strcat(name,surname);

	int pos;

	for (pos = 0; pos < strlen(name); pos++){
		printf("%c",name[pos]);
	}

	free(name);
	free(surname);


	Student * aStudent = malloc(sizeof(Student));

	if (validateMemoryAllocation(aStudent) == 1) {
		printf("An error has been ocurred in memory allocation in aStudent local variable.");
		return 0;
	}

	aStudent->day = 1;
	aStudent->year = 2015;
	aStudent->month = 4;

	printf("Day = %d | Month = %d | Year = %d",aStudent->day,aStudent->month,aStudent->year);


	free(aStudent);
	return 0;

}
