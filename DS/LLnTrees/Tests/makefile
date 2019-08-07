CC := gcc
CFLAGS := -I../Include -g
LDFLAGS := -L../Library

SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)
TGTS := $(SRCS:.c=.exe)

all: ${TGTS}

palindrome.exe: palindrome.o ../Library/libsll.a
	${CC} $< ${LDFLAGS} -lsll -o $@

bin_srch.exe: bin_srch.o ../Library/libbin_tree.a
	${CC} $< ${LDFLAGS} -lbin_tree -o $@

.depend:  ${SRCS}
	${CC} -MM ${CFLAGS} $^ > $@

clean:
	${RM} ${TGTS} ${OBJS} .depend

ifneq (${MAKECMDGOALS},clean)
-include .depend
endif
