//gcc -o win win.c -m32 -no-pie -fno-stack-protector -z noexecstack
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
 
void win() {
    printf("You did it, can you feel the Force ?\n");
    system("cat flag.txt");
}
 
void lose() {
    printf("May the force be with you\n");
}

void func(){
    char buf[128];
    printf("What is your name young padawan?");
    fgets(buf,200,stdin);
}
 
void main()
{
    func();
    lose();
}