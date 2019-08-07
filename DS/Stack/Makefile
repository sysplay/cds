CC := gcc
CFLAGS := -IInclude

SRCS := $(wildcard LibraryCode/*.c)
_TLIBS := $(subst LibraryCode/,Library/lib,${SRCS})
LIBS := $(_TLIBS:.c=.a)

.PHONY: all

all: ${LIBS}

Library/lib%.a: LibraryCode/%.o
	${AR} ${ARFLAGS} $@ $^

.depend:  ${SRCS}
	${CC} -MM ${CFLAGS} $^ > $@

clean:
	${RM} ${LIBS} .depend

ifneq (${MAKECMDGOALS},clean)
-include .depend
endif
