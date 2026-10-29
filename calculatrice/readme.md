# Calculatrice en Ligne de Commande (CLI) en C

Une calculatrice légère et portable développée en **C**. Ce projet met en avant les compétences fondamentales de la programmation en langage C, notamment la gestion des entrées/sorties standards, la manipulation des nombres à virgule flottante, les structures conditionnelles et la gestion sécurisée du buffer de saisie.

## 📌 Fonctionnalités

* **Opérations de base** : Prise en charge de l'addition (`+`), de la soustraction (`-`), de la multiplication (`*`) et de la division (`/`).
* **Gestion du buffer** : Utilisation d'espaces dans les spécificateurs `scanf` pour ignorer les caractères résiduels (ex: retours à la ligne).
* **Gestion des erreurs** :
  * Interdiction de la **division par zéro** via des vérifications conditionnelles.
  * Gestion des opérateurs invalides grâce au cas `default` dans la structure `switch`.
* **Affichage propre** : Formatage des variables `double` limité à 2 chiffres après la virgule (`%.2f`).

## 🛠️ Technologies et Prérequis

* **Langage** : C
* **Compilateur** : GCC (`gcc`)
* **Environnement** : Linux (Kali / Ubuntu) ou Windows (MinGW / Git Bash)

## 🚀 Compilation et Exécution

### 1. Compilation

Ouvrez votre terminal dans le dossier du projet et lancez :

```bash
gcc calculatrice.c -o calculatrice
```

### 2. Exécution

Exécutez l'exécutable généré :

* **Linux / macOS** :
  ```bash
  ./calculatrice
  ```
* **Windows** :
  ```cmd
  .\calculatrice.exe
  ```

## 💻 Exemple d'Utilisation

```text
choisissez le premier nombre
15.5
choisissez l'operateur (+,-,*,ou/)
*
choisissez la deuxieme nombre
4
resultat : 15.50 * 4.00 = 62.00
```

## 🔒 Sécurité et Cas Particuliers

* **Protection contre la division par zéro** :
  ```c
  if (nombre2 == 0) {
      printf("division par 0 impossible\n");
  } else {
      resultat = nombre1 / nombre2;
  }
  ```

## 👤 Auteur

Projet réalisé dans le cadre d'un laboratoire d'apprentissage pratique de la cybersécurité et du développement C.