echo "building library"
gcc -c lib/lucis.c -o lucis.o
ar rcs liblucis.a lucis.o
echo "building app"
gcc -Wall -Wextra -g -std=c11 src/main.c -Ilib -L. -llucis -lSDL3 -o main
