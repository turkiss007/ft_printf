NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = 	ft_printf.c \
		ft_porcentage.c \
		ft_char.c \
		ft_string.c \
		ft_int.c \
		ft_unsigned_int.c \
		ft_pointer.c \
		ft_puthex.c \
		ft_mayus_hex.c \
		ft_minus_hex.c

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

LIBFT_OBJS = $(wildcard $(LIBFT_DIR)/*.o)

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJS)
	ar rcs $(NAME) $(OBJS) $(LIBFT_OBJS)

%.o: %.c ft_printf.h $(LIBFT_DIR)/libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re