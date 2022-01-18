#include "fonctions.h"
#define SIZE 100

void promptPutTftp(char * argv[]){ //permet de tester la fonction rapide

    printf("cmd = %s\nhost = %s\nfile = %s \n",argv[0],argv[1],argv[2]);
}
        struct addrinfo hints;
        const char* port="69";
        int s;
        struct addrinfo *res, *tmp;
        char ipserveur[256];

int main(int argc, char *argv[]){

        char *serveur=argv[1];
        
    switch(argc){//plus claire que le if

        case 3: // argv[0] contient ./getftp donc il faut avoir 4 arguments pour que la commande soit complète
        promptPutTftp(argv);//simple fonction pour vérifier si on récupère bien la commande 
        memset(&hints, 0, sizeof(struct addrinfo));
        hints.ai_family = AF_INET;
        hints.ai_socktype = SOCK_DGRAM;
        hints.ai_flags = 0;
        hints.ai_protocol= IPPROTO_UDP;

        s = getaddrinfo(serveur, port , &hints, &res);
        if (s != 0) {
            fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(s));
            exit(EXIT_FAILURE);
        }
        for (tmp = res; tmp != NULL; tmp = tmp->ai_next) {
            getnameinfo(tmp->ai_addr, tmp->ai_addrlen, ipserveur, sizeof (ipserveur), NULL, 0, NI_NUMERICHOST);
            puts(ipserveur);
        }
        freeaddrinfo(res);
        exit(EXIT_SUCCESS);
        break;

    	default://dans tous les autres cas la commande est fausse
        printf("Commande Invalide\n");
        break;

    }
    return 0;
}



