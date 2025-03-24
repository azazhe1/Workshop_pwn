//gcc -o win win.c -m32 -no-pie -fno-stack-protector -z noexecstack
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
 
void get_shell() {
    printf("GGG You win\n");
    system("/bin/bash");
}

void func(){
    char buf[128];
    printf("Input: ");
    fgets(buf,200,stdin);
}
 
void main()
{
    func();
}