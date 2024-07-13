# get_next_line
---
![1*_q02V1T9LWLszhDAlppmQg.png](https://miro.medium.com/v2/resize:fit:4800/format:webp/1*_q02V1T9LWLszhDAlppmQg.png)
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
	make

	Cela générera get_next_line.a, que vous pourrez lier à vos projets.

	```
## Utilisation

	1- Incluez le fichier d'en-tête get_next_line.h dans votre code :
		#include "get_next_line.h"
	
	2- Appelez la fonction get_next_line pour lire chaque ligne du fichier :
		int fd;
		char *line;

		fd = open("file.txt", O_RDONLY);
		while (get_next_line(fd, &line) > 0)
		{
    		printf("%s\n", line);
    		free(line);
		}
		free(line);
		close(fd);

## Exemple de Makefile :
```make
CC = gcc
CFLAGS = -Wall -Wextra -Werror
GNL = path/to/get_next_line.a
INCLUDES = -I path/to/get_next_line/includes

SRCS = main.c
OBJS = $(SRCS:.c=.o)

all: $(OBJS)
    $(CC) $(CFLAGS) $(OBJS) $(GNL) -o my_program

clean:
    rm -f $(OBJS)

fclean: clean
    rm -f my_program

re: fclean all

.PHONY: all clean fclean re
```

## Exemples
Voici un exemple d'utilisation de get_next_line :
```c

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main() {
    int fd = open("example.txt", O_RDONLY);
    if (fd < 0) {
        perror("open");
        return 1;
    }

    char *line;
    while (get_next_line(fd, &line) > 0) {
        printf("%s\n", line);
        free(line);
    }
    free(line);  // N'oubliez pas de libérer la dernière ligne lue.
    close(fd);
    return 0;
}
```

## Tests

Pour tester la bibliothèque, vous pouvez utiliser les outils et frameworks suivants :

- [42TESTERS-GNL](https://github.com/Mazoise/42TESTERS-GNL)
- [gnlTester](https://github.com/Tripouille/gnlTester)
- [gnlTesterExtended](https://github.com/alelievr/gnlTesterExtended)

## Auteurs

Ce projet a été réalisé par [ael-amin](https://github.com/ael-amin).


