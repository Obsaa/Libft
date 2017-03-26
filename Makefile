NAME			=	Libft.a
CC				=	gcc

DIR_SOURCES		= 	sources
D_INCLUDES		=	includes
DIR_OBJ			=	objects

OBJETOS_F		=	-O3
ERROR_W_F		=	-Wall -Wextra -Werror -I. -c
DEB				=
MKDIR			=	mkdir -p
RM				=	/bin/rm -rf

FLAG_FILES		:=	$(shell ls -1 $(DIR_SOURCES) | grep .c$$)
FLAG_OBJECTS	:=	$(FLAG_FILES:.c=.o)
FLAG_OBJECTS	:=	$(addprefix $(DIR_OBJ)/, $(FLAG_OBJECTS))

.PHONY: all clean fclean re

all: $(NAME)

$(DIR_OBJ)/%.o: $(DIR_SOURCES)/%.c $(D_INCLUDES)
	@$(MKDIR) $(DIR_OBJ)
	$(CC) -I$(D_INCLUDES) $(OBJETOS_F) $(ERROR_W_F) -c $< -o $@ $(DEB)

$(NAME): $(FLAG_OBJECTS)
	$(CC) -I$(D_INCLUDES) $(OBJETOS_F) $(ERROR_W_F) $(FLAG_OBJECTS) -o $@ $(DEB)

clean:
	$(RM) $(DIR_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
