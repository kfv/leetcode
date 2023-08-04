CFLAGS    += -std=c2x -O0 -Wall -Wextra -Werror -pedantic -g
BUILD_DIR  = build
TEST_COUNT = `find $(BUILD_DIR) -type f -depth 1 | wc -l | tr -d ' '`
TEST_FILES = `find $(BUILD_DIR) -type f -depth 1`
