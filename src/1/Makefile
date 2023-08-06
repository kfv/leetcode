include ../config.mk
include ../common.mk

all: build/brute_force \
     build/hash_table  \
     build/two_pointer

build/brute_force: brute_force.c test.c | build
	$(CC) $(CFLAGS) $^ -o $@

build/hash_table: hash_table.c test.c | build
	$(CC) $(CFLAGS) $^ -o $@

build/two_pointer: two_pointer.c test.c | build
	$(CC) $(CFLAGS) $^ -o $@

run_test: test

run_clean: clean
