# name of the program (Minix service)
PROG=lab5

# source code files to be compiled
SRCS = lab5.c kbd.c kbc.c utils.c  graphics.c timer.c

# additional compilation flags
# "-Wall -Wextra -Werror -I . -std=c11 -Wno-unused-parameter" are already set
CPPFLAGS += -DLAB5
CPPFLAGS += -D LAB5

# list of library dependencies
DPADD += ${LIBLCF}
LDADD += -llcf

# include LCOM's makefile that does all the "heavy lifting"
.include <minix.lcom.mk>
