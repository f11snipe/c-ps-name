// source: https://stackoverflow.com/a/55584492/20900387 (hexchain)
// gcc pstest.c -o pstest -O2 -Wall -Wextra -Werror -Wno-unused -Wno-unused-result -std=gnu99 -pthread -D_GNU_SOURCE 
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/prctl.h>

int main(int argc, char *argv[])
{
    puts("Initial ps output:");
    system("ps | grep pstest");

    puts("\npthread_setname_np");
    pthread_setname_np(pthread_self(), "setname");
    system("ps | grep setname");

    puts("\nprctl");
    prctl(PR_SET_NAME, (unsigned long)"prctl", 0, 0, 0);
    system("ps | grep prctl");

    puts("\nargv[0]");
    argv[0] = "argv0";
    system("ps | grep argv0");

    return 0;
}
