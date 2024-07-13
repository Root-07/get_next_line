# get_next_line
---
![1*_q02V1T9LWLszhDAlppmQg.png](https://miro.medium.com/v2/resize:fit:4800/format:webp/1*_q02V1T9LWLszhDAlppmQg.png
---
`get_next_line` est une fonction en C permettant de lire une ligne depuis un descripteur de fichier à chaque appel, jusqu'à la fin du fichier ou une nouvelle ligne.

## Sommaire

1. [Introduction](#introduction)
2. [Fonctionnalités](#fonctionnalités)
3. [Installation](#installation)
4. [Utilisation](#utilisation)
5. [Exemples](#exemples)
6. [Tests](#tests)
7. [Auteurs](#auteurs)
8. [Licence](#licence)

## Introduction

Le projet `get_next_line` a pour but de créer une fonction permettant de lire dynamiquement une ligne à partir d'un fichier ou d'une entrée standard en C, sans devoir gérer les tailles de buffer préalablement. Ce projet est réalisé dans le cadre du cursus de l'école 42.

## Fonctionnalités

- **Lecture ligne par ligne :** Lit une ligne complète depuis un descripteur de fichier.
- **Gestion des fichiers multiples :** Peut gérer plusieurs descripteurs de fichier simultanément.
- **Lecture optimisée :** Utilise un buffer statique pour minimiser l'utilisation de la mémoire.

## Installation

Pour utiliser `get_next_line` dans vos projets, suivez ces étapes :

1. Clonez le dépôt :

   ```sh
   git clone https://github.com/your_username/get_next_line.git
   cd get_next_line


