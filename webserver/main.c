#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include "socket.h"
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>

int main(void){
	int socket_serveur = creer_serveur(8080);
while(1){
	int socket_client ;
socket_client = accept ( socket_serveur , NULL , NULL );
if ( socket_client == -1)
{
perror ( " accept " );
/* traitement d ’ erreur */
}
/* On peut maintenant dialoguer avec le client */

const char * message_bienvenue = " Bonjour , bienvenue sur mon serveur \n " ;
int i = 0;
for(i = 0;i<10;i++){
sleep(1);
write ( socket_client , message_bienvenue , strlen ( message_bienvenue ));
}
	}
	return 0;
} 


