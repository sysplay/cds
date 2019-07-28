CC = gcc
CFLAGS :=

ALL_SRCS := $(wildcard *.c)

SRCS := $(filter-out basic_fnptr.c, ${ALL_SRCS})
OBJECTS := $(SRCS:.c=.o)

TARGET := average_computation

.phony := run

run: ${TARGET}
	./${TARGET}

${TARGET}: ${OBJECTS}
	${CC} ${CFLAGS} $^ -o $@

.depend: ${SRCS} 
	${CC} -MM ${CFLAGS} $^ > $@

clean:
	${RM} ${TARGET} ${OBJECTS} .depend

ifneq (${MAKECMDGOALS}, clean)
-include .depend
endif


