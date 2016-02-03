#include <stdio.h>
#include <string.h>
#include "main.h"
int main(int argc,char** argv){

	int socket_serveur ;
	socket_serveur = socket ( AF_INET , SOCK_STREAM , 0);
	if ( socket_serveur == -1){
		perror ( " socket_serveur " );
		/* traitement de l ’ erreur */
	}
	/* Utilisation de la socket serveur */
	return 0;
} 


