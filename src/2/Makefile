include ../config.mk
include ../common.mk

all: build/iterative

build/iterative: iterative.c test.c | build
	$(CC) $(CFLAGS) $^ -o $@

run_test: test

run_clean: clean
