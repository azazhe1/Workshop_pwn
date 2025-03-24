#include <stdio.h>
#include <stdlib.h>

void vuln()
{
	char buf[10];
	gets(buf);
    printf("%s\n", buf);
    printf(buf);
    printf("\n");
}

int main(int argc, char *argv[])
{
	vuln();
}