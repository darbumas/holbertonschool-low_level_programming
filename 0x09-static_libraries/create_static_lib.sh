#!/bin/bash
gcc -Wextra -Werror -pedantic -Wall -c *.c
ar -rc liball.a *.o
