CC	= gcc
NAME	= my_aff_up_params.c
OUT	= aff_up
RM	= rm -f
LIB	= ./../libmy.a
WFLAGS	= -W -Wall -Wextra -pedantic

all:	$(OUT)

$(OUT):
	$(CC) $(WFLAGS) $(NAME) $(LIB) -o $(OUT)

clean:	
	$(RM) *~

fclean:	clean
	$(RM) $(OUT)