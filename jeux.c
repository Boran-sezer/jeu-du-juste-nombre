#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nombreMystere = 0, nombreEntre = 0;
    int continuerPartie = 1; // 1 pour OUI, 0 pour NON
    const int MAX = 100, MIN = 1;

    srand(time(NULL));

    // --- BOUCLE POUR REJOUER ---
    do {
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        printf("--- NOUVELLE PARTIE ---\n");

        // --- BOUCLE DU JEU ---
        do {
            printf("Quel est le nombre ? ");
            scanf("%d", &nombreEntre);

            if (nombreMystere > nombreEntre)
                printf("C'est plus !\n\n");
            else if (nombreMystere < nombreEntre)
                printf("C'est moins !\n\n");
            else
                printf("Bravo, tu as trouve !\n");
        } while (nombreEntre != nombreMystere);

        // --- ON DEMANDE SI LE JOUEUR VEUT RECOMMENCER ---
        printf("Voulez-vous rejouer ? (1 pour OUI, 0 pour NON) : ");
        scanf("%d", &continuerPartie);

    } while (continuerPartie == 1); 

    printf("Merci d'avoir joue ! A bientot. 🚀\n");

    return 0;
}