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
       ft_substr.c 

BONUS_SRCS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
             ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

# Only include bonus sources that actually exist on disk
ACTIVE_BONUS_SRCS = $(wildcard $(BONUS_SRCS))

OBJS = $(SRCS:.c=.o)
ACTIVE_BONUS_OBJS = $(ACTIVE_BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

bonus: $(OBJS) $(ACTIVE_BONUS_OBJS)
	@if [ -n "$(ACTIVE_BONUS_OBJS)" ]; then \
		$(AR) $(ARFLAGS) $(NAME) $(OBJS) $(ACTIVE_BONUS_OBJS); \
	fi

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(ACTIVE_BONUS_SRCS)
	$(CC) -nostartfiles -shared -o libft.so $(OBJS) $(ACTIVE_BONUS_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME) libft.so

re: fclean all

.PHONY: all bonus so clean fclean re