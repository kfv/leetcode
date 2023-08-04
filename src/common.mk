build:
	@mkdir -p build

test: all
	@printf "Running $(TEST_COUNT) "
	@[ $(TEST_COUNT) -eq 1 ] && echo "test" || echo "tests"
	@for test in $(TEST_FILES); do \
		printf "test `basename $$test` ... ";                                 \
		exit_status=$$(( ./$$test > /dev/null 2>&1; echo $$? ) 2>/dev/null ); \
		[ $$exit_status -eq 0 ] && echo "ok" || echo "FAILED";                \
	done

clean:
	rm -rf build
