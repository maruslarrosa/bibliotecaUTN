/*
 ============================================================================
 Name        : blibliotecaUTN.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int ordenarArray(int *pArray, int limiteArray);

int main(void) {

}

int ordenarArray(int *pArray, int limiteArray){
	if (pArray != NULL && limiteArray > 0){
		int ordered;
		int aux;
		do {
			int i;
			for (i = 0; i < limiteArray -1; i++){
				ordered = 1;
				if (pArray[i] > pArray[i+1]){
					//swap
					aux = pArray[i];
					pArray[i] = pArray[i+1];
					pArray[i+1] = aux;
					ordered = 0;
				}
			}
		} while(ordered != 1);

	}
	return 0;
}
