CC	= gcc
NAME	= do-op.c
OUT	= do-op
RM	= rm -f
LIB	= ./../lib_src/libmy.a
WFLAGS	= -W -Wall -Wextra -pedantic

all:	$(OUT)

$(OUT):
	$(CC) $(WFLAGS) $(NAME) $(LIB) -o $(OUT)

clean:	
	$(RM) *~

fclean:	clean
	$(RM) $(OUT)