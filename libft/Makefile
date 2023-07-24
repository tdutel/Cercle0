# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdutel <tdutel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 11:42:08 by tdutel            #+#    #+#              #
#    Updated: 2023/07/24 15:17:04 by tdutel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de la bibliothèque
NAME = libft.a
HEADER = includes/
# Compilateur et options
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Dossiers sources
SRC_DIR = check_fct mem_fct print_fct str_fct linked_list_fct

# Dossiers objets
OBJ_DIR = bin

# Fichiers sources
SRC_FILES = $(foreach dir,$(SRC_DIR),$(wildcard $(dir)/*.c))

# Noms des fichiers objets)
OBJ_FILES = $(patsubst %.c,$(OBJ_DIR)/%.o,$(SRC_FILES))


# Règle par défaut
all: $(NAME)

# Règle pour la bibliothèque
$(NAME): $(OBJ_FILES)
	ar rcs $@ $^

# Règle pour les fichiers objets
$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c -o $@ $<

# Création du dossier pour les objets
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Règle de nettoyage
clean:
	rm -rf $(OBJ_DIR)

# Règle de nettoyage complet
fclean: clean
	rm -f $(NAME)

re : fclean all

# Pour permettre l'utilisation de "clean" et "fclean" même s'il existe des fichiers portant ces noms
.PHONY: all clean fclean re
