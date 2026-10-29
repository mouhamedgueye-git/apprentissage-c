#include <stdio.h> // Bibliothèque standard pour la gestion des affichages (printf) et des saisies (scanf)

int main()
{
    // Déclaration des tableaux de caractères (strings) pour stocker les textes de 49 caractères max (+1 pour le \0)
    char nom[50], prenom[50];
    char date_de_naissance[50];
    char lieu_de_naissance[50], domicile[50];
    
    // Variable pour la taille en mètres (ex: 1.75)
    float taille;
    
    // Variable pour stocker un seul caractère ('m' ou 'f')
    char sexe;
    
    // Déclaration des chaînes pour la région et le département
    char region[50], departement[50];

    // Message d'instruction pour guider l'utilisateur en cas de nom composé
    printf("s'il ya de l'espace remplacez le par ' _ ' svp!\n");

    // Saisie du prénom
    printf("quel est ton prenom?\n");
    scanf(" %s", prenom); // Pas de '&' nécessaire car 'prenom' est déjà un tableau de char

    // Saisie du nom
    printf("quel est ton nom?\n");
    scanf(" %s", nom);

    // Saisie de la date de naissance
    printf("donne ta date de naissance(format jj/mm/aaaa)\n");
    scanf(" %s", date_de_naissance);

    // Saisie du lieu de naissance
    printf("tu es nait ou?\n");
    scanf(" %s", lieu_de_naissance);

    // Saisie du domicile
    printf("tu habite ou?\n");
    scanf(" %s", domicile);

    // Saisie de la taille (nombre flottant)
    printf("tu fait quel taille?(en m)\n");
    scanf(" %f", &taille); // '&' obligatoire pour lire dans l'adresse de 'taille'

    // Saisie du sexe (caractère unique)
    printf("tu est de quel sexe? (m/f)\n");
    scanf(" %c", &sexe); // L'espace avant %c absorbe le saut de ligne restant dans le buffer

    // Saisie de la région
    printf("tu est de quel region?\n");
    scanf(" %s", region);

    // Saisie du département
    printf("tu est de quel departement?\n");
    scanf(" %s", departement);

    // --- AFFICHAGE DE LA CARTE D'IDENTITÉ ---
    printf("prenom: %s\n", prenom);
    printf("nom: %s\n", nom);
    printf("date_de_naissance: %s\n", date_de_naissance);
    printf("lieu_de_naissance: %s\n", lieu_de_naissance);
    printf("domicile: %s\n", domicile);
    printf("tu fait %.2f m\n", taille); // %.2f formate la taille avec 2 chiffres après la virgule

    // Traitement du sexe selon la valeur de la variable 'sexe'
    switch(sexe)
    {
        case 'm':
        case 'M': // Gère le cas où l'utilisateur entre 'm' ou 'M'
            printf("de sexe: masculin\n ");
            break;

        case 'f':
        case 'F': // Gère le cas où l'utilisateur entre 'f' ou 'F'
            printf("de sexe: feminin\n");
            break;

        default: // S'exécute si le caractère entré n'est ni 'm' ni 'f'
            printf("sexe non reconnue\n");
            break;
    }

    // Affichage des informations géographiques
    printf("region: %s\n", region);
    printf("departement: %s\n", departement);

    return 0; // Fin du programme sans erreur
}