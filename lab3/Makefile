# name of the program (Minix service)
PROG=lab3 

# source code files to be compiled
SRCS = lab3.c kbd.c kbc.c utils.c timer.c

# additional compilation flags
# "-Wall -Wextra -Werror -I . -std=c11 -Wno-unused-parameter" are already set
CPPFLAGS += -pedantic -DLAB3
CPPFLAGS += -D LAB3

# list of library dependencies
DPADD += ${LIBLCF}
LDADD += -llcf

# include LCOM's makefile that does all the "heavy lifting"
.include <minix.lcom.mk>
