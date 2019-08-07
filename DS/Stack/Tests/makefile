CC := gcc
CFLAGS := -I../Include
LDFLAGS := -L../Library -lstack

SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)
TGTS := $(SRCS:.c=.exe)

all: ${TGTS}

%.exe: %.o
	${CC} $^ ${LDFLAGS} -o $@

.depend:  ${SRCS}
	${CC} -MM ${CFLAGS} $^ > $@

clean:
	${RM} ${TGTS} ${OBJS} .depend

ifneq (${MAKECMDGOALS},clean)
-include .depend
endif
