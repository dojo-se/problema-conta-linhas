#include "problema.h"
#include <cstdio>


int lerLinha(char* mystring){
	puts(mystring);
	if (mystring[0] == '/' && 
		mystring[1] == '/')  {
		return 0;
	} else if(mystring[0] != '\0'){
		return 1;
	} else {
		return 0;
	}
}

int contaLinhasCodigo(char codigo[]){
	/*FILE * pFile;
	pFile = fopen ("myfile.txt","w");
	if (pFile!=NULL)
	{
		fputs ("fopen example",pFile);
		fclose (pFile);
	}
	return 0;*/
	/*int linhasLidas = 0;
	char mystring[595];
	FILE* arquivo;
	arquivo = fopen(codigo, "r");
	if(arquivo != NULL){
		fgets(mystring, 595, arquivo);
		linhasLidas += lerLinha(mystring);
	}*/

	int estado = 0;
	/*
		0 - inicial
		1 - linha de código
		2 - primeira barra
		3 - comentário de bloco
		4 - comentário de linha
		5 - fim do comentario de bloco
	*/
	int linhasLidas = 0;
	char c;
	FILE* arquivo;
	arquivo = fopen(codigo, "r");
	
	do {

		c = fgetc(arquivo);
		
		/*if (c == '\n')
			linhasLidas++;
		*/
		
		if (estado == 0 && c != '/' && c != ' ' && c != '\n' && c != '\t') {
			estado = 1;
		} else if (estado == 0 && c == '/') {
			estado = 2;
		} else if (estado == 2 && c == '/') {
			estado = 4;
		} else if (estado == 2 && c == '*') {
			estado = 3;
		} else if (estado == 3 && c == '*') {
			estado = 5;
		} else if (estado == 5 && c == '/') {
			estado = 0;
		} else if (estado == 4 && c == '\n') {
			estado = 0;
		} else if (estado == 1 && (c == '\n' || c == EOF)) {	
			estado = 0;
			++linhasLidas;
		}


		
		// old school
		//if(c != EOF){
			//printf("%c", c);
		//}
	} while(c != EOF);


	/*if(arquivo != NULL){
		fgets(mystring, 595, arquivo);
		linhasLidas += lerLinha(mystring);
	}*/

	//teste old school
	/*puts(mystring);
	puts(codigo);*/

	return linhasLidas;
}
