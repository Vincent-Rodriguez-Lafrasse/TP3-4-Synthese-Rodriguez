#include "fonctions.h"

void promptGetTftp(char * argv[]){ //permet de tester la fonction rapide
    printf("cmd = %s\nhost = %s\nfile = %s \n",argv[0],argv[1],argv[2]);
}

int main(int argc, char *argv[]){

    switch(argc){//plus claire que le if

        case 3: // argv[0] contient ./getftp donc il faut avoir 4 arguments pour que la commande soit complète
        promptGetTftp(argv);//simple fonction pour vérifier si on récupère bien la commande 
        break;

    	default://dans tous les autres cas la commande est fausse
        printf("Commande Invalide\n");
        break;

    }
    return 0;
}



