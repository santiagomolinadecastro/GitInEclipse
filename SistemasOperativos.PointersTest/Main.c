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

	int pos;

	for (pos = 0; pos < strlen(name); pos++){
		printf("%c",name[pos]);
	}

	free(name);
	free(surname);

	/* Pruebo instanciar la estructura.*/
	Student * aStudent = malloc(sizeof(Student));

	/* Valido que la asignación de memoria sea la correcta.*/
	if (validateMemoryAllocation(aStudent) == 1) {
		printf("An error has been ocurred in memory allocation in aStudent local variable.");
		return 0;
	}

	/* Inicializo las variables internas de la estructura..*/
	aStudent->day = 1;
	aStudent->year = 2015;
	aStudent->month = 4;

	printf("Day = %d | Month = %d | Year = %d\n",aStudent->day,aStudent->month,aStudent->year);

	free(aStudent);

	// Prueba de Array de estructuras.
	Student * studentsArray = malloc(sizeof(Student)*10);

	studentsArray[0].day = 1;
	studentsArray[1].day = 2;

	printf("studensArray[0] = %d",studentsArray[0].day);
	printf("studensArray[0] = %d",studentsArray[1].day);

	free(studentsArray);

/*	for (pos = 0; pos < strlen(name); pos++){
		printf("%c",name[pos]);
	}*/

	return 0;

}
