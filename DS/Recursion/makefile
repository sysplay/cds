CC = -@echo -e "\n=== *** === Building $@ === *** ===\n" && gcc # Ignore compilation errors
CFLAGS := -O1

SRCS := $(wildcard *.c)
TGTS := $(SRCS:.c=)
CLEAN_TGTS := ${TGTS}
RUN_TGTS := $(filter ${TGTS}, $(wildcard *))

.PHONY: run all clean

all: ${TGTS}

run:
	@echo ${RUN_TGTS}

clean:
	${RM} ${CLEAN_TGTS}
