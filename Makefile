# Compiler
CC = cc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Name of the library 
NAME = libftprintf.a

# Source files (.c)
SRCS = ft_printf.c \
       ft_putchar_fd.c \
       ft_putnbr_base.c \
       ft_putnbr_base_upper.c \
       ft_putstr_fd.c \
       ft_strlen.c \
       ft_putpointer.c
	   
# Object files (.o)
OBJS = $(SRCS:.c=.o)

# Rule to make the library
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)

# Rule to remove object files
clean:
	rm -f $(OBJS)

# Rule to remove the library and object files
fclean: clean
	rm -f $(NAME)

# Rule to re-make everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re

