#include <stdio.h> // Inclusions de la bibliothèque standard pour l'affichage (printf) et la saisie (scanf)

int main() 
{
    // Déclaration des variables pour stocker les deux nombres saisis et le résultat
    double nombre1, nombre2;
    double resultat;
    
    // Variable pour stocker le symbole de l'opération (+, -, *, /)
    char operateur;

    // Saisie du premier nombre
    printf("choisissez le premier nombre\n");
    scanf(" %lf", &nombre1); // %lf est utilisé pour lire un nombre de type 'double'

    // Saisie de l'opérateur
    printf("choisissez l'operateur (+,-,*,ou/)\n");
    scanf(" %c", &operateur); // L'espace avant %c permet d'ignorer le saut de ligne restant dans le buffer

    // Saisie du deuxième nombre
    printf("choisissez la deuxieme nombre\n");
    scanf(" %lf", &nombre2);

    // Structure de contrôle switch pour exécuter le bon calcul selon l'opérateur choisi
    switch (operateur)
    {
    case '+' : // Cas de l'addition
        resultat = nombre1 + nombre2;
        printf("resultat : %.2f + %.2f = %.2f \n", nombre1, nombre2, resultat); // %.2f formate l'affichage à 2 décimales
        break;

    case '-' : // Cas de la soustraction
        resultat = nombre1 - nombre2;
        printf("resultat : %.2f - %.2f = %.2f \n", nombre1, nombre2, resultat);
        break;

    case '*' : // Cas de la multiplication
        resultat = nombre1 * nombre2;
        printf("resultat : %.2f * %.2f = %.2f\n", nombre1, nombre2, resultat);
        break;

    case '/' : // Cas de la division
        // Sécurité : vérification que le diviseur n'est pas égal à 0
        if (nombre2 == 0)
        {
            printf("division par o imposible\n");
        }
        else
        {
            resultat = nombre1 / nombre2;
            printf("resultat : %.2f / %.2f = %.2f\n", nombre1, nombre2, resultat);
        }
        break;

    default : // Cas où l'utilisateur saisit un caractère d'opération invalide
        printf("operateur non reconnue");
        break;
    }

    return 0; // Indique que le programme s'est exécuté sans erreur
}