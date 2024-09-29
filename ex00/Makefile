Name = pp00
SRC = .

OBJS	= ${SRC:.cpp=.o}

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -std=c++98

RM		= rm -f

all:	${NAME}

${NAME}:	${OBJS}
			$(CC) $(OBJS) $(CFLAGS) -o ${NAME}

exe:
	./$(NAME)

clean:
		@${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: clean exe fclean re all