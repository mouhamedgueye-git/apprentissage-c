# 🪪 Application Carte d'Identité Virtuelle en C

Ce projet est un programme développé en langage **C** qui permet de saisir, traiter et afficher les données d'identité d'un utilisateur sous la forme d'un récapitulatif structuré (carte d'identité).

## 🚀 Fonctionnalités
- **Saisie dynamique des informations personnelles** (Prénom, Nom, Date et Lieu de naissance, Domicile, Taille, Sexe, Région, Département).
- **Gestion du sexe avec un bloc `switch`** (Prend en compte les majuscules et minuscules `'m'`, `'M'`, `'f'`, `'F'`).
- **Support des espaces de saisie** (Utilisation de la convention `_` pour garantir une lecture fluide avec `scanf`).
- **Formatage précis de la taille** avec un affichage à deux décimales (`%.2f m`).

## 🛠️ Compilation et Exécution

Pour compiler le projet avec `gcc` sous Windows (PowerShell) :

```powershell
gcc carte_identite.c -o carte_identite.exe