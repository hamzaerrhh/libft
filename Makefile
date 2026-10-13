NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

SRCS = ft_isalnum.c \
       ft_isalpha.c \
       ft_atoi.c \
       ft_strdup.c \
       ft_bzero.c \
       ft_strdup.c \
       ft_strlcat.c \
       ft_isascii.c \
       ft_strlcpy.c \
       ft_strncmp.c \
       ft_isdigit.c \
       ft_calloc.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_memchr.c \
       ft_memcpy.c \
       ft_memcmp.c \
       ft_memmove.c \
       ft_strnstr.c \
       ft_islower.c \
       ft_isprint.c \
       ft_isupper.c \
       ft_tolower.c \
       ft_toupper.c \
       ft_memset.c \
       ft_strlen.c \
       ft_strjoin.c \
       ft_split.c \
       ft_itoa.c \
       ft_strmapi.c \
       ft_strtrim.c \
       ft_strtrim.c \
       ft_putstr_fd.c \
       ft_putchar_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c \
       ft_substr.c 


# Only include bonus sources that actually exist on disk
ACTIVE_BONUS_SRCS = $(wildcard $(BONUS_SRCS))

OBJS = $(SRCS:.c=.o)
ACTIVE_BONUS_OBJS = $(ACTIVE_BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME) libft.so

re: fclean all

.PHONY: all bonus so clean fclean re