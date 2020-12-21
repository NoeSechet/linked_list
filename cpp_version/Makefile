NAME	= program

CC	= g++

RM	= rm -f

SRCS	=	./src/Linked_list.cpp \
			./src/screen_list.cpp \
	  		./src/Utils.cpp \
	  		./src/main.cpp 

OBJS	= $(SRCS:.cpp=.o)

CPPFLAGS = -I ./include/
CPPFLAGS += -Wall -Wextra -g3

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS) -lsfml-graphics -lsfml-window -lsfml-system

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
