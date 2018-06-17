/*
 * NewImplementation.c
 *
 *  Created on: 17 giu 2018
 *      Author: melingiusti
 */

#include <string.h>
#include <stdio.h>

#include "NewFunctions.h"

//NewFunctions.h
void getSimilarity(char *name1, char *name2){
	printf("The similarity is equal to %d\n",strcmp(name1,name2));
}
