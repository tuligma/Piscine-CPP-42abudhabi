NAME = megaphone
SRCS = megaphone.cpp
COMP = clang++
OBJS = megaphone.o
CFLAG = -Wall -Wextra -Werror
DELETE = rm -rf

all: $(NAME)

%.o : %.cpp
	$(COMP) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(COMP) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(DELETE) $(OBJS)

fclean: clean
	$(DELETE) $(NAME)

re: clean fclean

.PHONY: all clean fclean re