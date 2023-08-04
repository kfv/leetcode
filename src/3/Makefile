include ../config.mk
include ../common.mk

all: build/brute_force \
	 build/sliding_window

build/brute_force: brute_force.c test.c | build
	$(CC) $(CFLAGS) $^ -o $@

build/sliding_window: sliding_window.c test.c | build
	$(CC) $(CFLAGS) $^ -o $@

run_test: test

run_clean: clean
