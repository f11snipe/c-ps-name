# c-ps-name
C - Change process name simple examples

*Based on [this stackoverflow answer](https://stackoverflow.com/a/55584492/20900387) (by [hexchain](https://stackoverflow.com/users/1025199/hexchain))*

### Quickstart

**Using Docker**

```bash
docker build -t pstest .
docker run --rm -it pstest
```

**Local Binary**

```bash
make
./pstest
```



```
Initial ps output:
  91985 pts/11   00:00:00 pstest

pthread_setname_np
  91985 pts/11   00:00:00 setname

prctl
  91985 pts/11   00:00:00 prctl

argv[0]
```

### Manual

**Compile `pstest` manually from source**

```bash
# Minimum compile command:
gcc pstest.c -o pstest -pthread
# Recommended compile command:
gcc pstest.c -o pstest -O2 -Wall -Wextra -Werror -Wno-unused -Wno-unused-result -std=gnu99 -pthread -D_GNU_SOURCE
```

