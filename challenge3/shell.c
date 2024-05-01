//gcc -o shell shell.c -m32 -no-pie -fno-stack-protector -z execstack
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void init(){
    printf("L'objectif de ce challenge est de faire pop un shell\n");
}

void vuln(){
    char buf[255];
    printf("buf is at %p\n", buf);
    gets(buf);
}

int main(int argc, char *argv[]) {
    init();
    vuln();
}