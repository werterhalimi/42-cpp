SRCS_FILES		:= randomChump.cpp newZombie.cpp Zombie.cpp main.cpp
SRCS_DIR		:= ./src/

SRCS			:= $(addprefix $(SRCS_DIR),$(SRCS_FILES))

OBJS_FILES		:= $(SRCS_FILES:.cpp=.o)

OBJS_DIR		:= ./bin/

OBJS_SUB_DIR	:=	$(OBJS_DIR)builtins	$(OBJS_DIR)utils $(OBJS_DIR)parse $(OBJS_DIR)pipe

OBJS			:= $(addprefix $(OBJS_DIR),$(OBJS_FILES))


INC_DIR			:= ./inc/
INC				:= Zombie.hpp
HEADERS 		:= $(addprefix $(INC_DIR),$(INC))

CC				:= @g++
CFLAGS			:= -g -Wall -Wextra -Werror -I $(INC_DIR)
RM				:= @rm -f
LIB				:= -lreadline
DEBUG			:= -g3# -fsanitize=address
UNIT			:= ""
NAME			:= zombie 

all:			$(NAME)

${OBJS_DIR}%.o:	${SRCS_DIR}%.cpp $(HEADERS)
				@mkdir -p $(OBJS_DIR) $(OBJS_SUB_DIR)
				@echo "\033[1;32mCompiling $<\033[0m"  #Ajout de la ligne pour afficher le pourcentage de compilation en couleur.
				$(CC) $(UNIT) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(LIB) -o $(NAME) $(OBJS)

unit:			clean
				echo salut
				make UNIT="-D UNIT"

clean:
				$(RM) $(OBJS)
				@rmdir $(OBJS_SUB_DIR) $(OBJS_DIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

run:			$(NAME)
				./$(NAME)

leaks:			$(NAME)
				leaks -atExit -- ./$(NAME)

debug:			CFLAGS += $(DEBUG)
debug:			$(OBJS)
				$(CC) $(CFLAGS) $(LIB) -o $(NAME) $(OBJS)

.PHONY:			all clean fclean re leaks run debugg test

