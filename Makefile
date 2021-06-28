NAME := bsq
CC := gcc
CFLAGS := -Wall -Werror -Wextra -c

SRC := srcs/main.c \
		srcs/basic_functions.c \
		srcs/ft_search_place.c \

OBJ_FILES = (SRC_FILES:.c=.o)
