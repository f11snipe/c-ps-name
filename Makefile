all:
	gcc pstest.c -o pstest -O2 -Wall -Wextra -Werror -Wno-unused -Wno-unused-result -std=gnu99 -pthread -D_GNU_SOURCE

clean:
	rm pstest

