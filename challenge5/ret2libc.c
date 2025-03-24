//gcc shell_string.s ret2libc.c -fno-stack-protector -no-pie -m32 -o ret2libc
#include <stdio.h>
#include <stdlib.h>


void init(){
    printf("Le but du challenge est d'ouvrir un shell grâce a la libc\n");
}

void read_file(){
    FILE *file;
    char buffer[100];
    file = fopen("toto.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        exit(1);
    }
    fgets(buffer, 200, file);
    printf("Contenu du fichier : %s\n", buffer);
}

int main (int argc, char ** argv) {
    init();
    read_file();
    return 0;
}