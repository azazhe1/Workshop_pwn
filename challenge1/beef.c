//gcc -o beef beef.c -m32 -no-pie -fno-stack-protector -z noexecstack
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{

  int value = 0x0;
  char buf[10];

  fgets(buf,15,stdin);

  if (value == 0xdeadbeef)
   {
      printf("well play, you win\n");
      system("cat flag.txt");
      printf("\n");

   }else{
      printf("You lose, try again !\n");
      printf("%x\n", value);
   }
   return 0;
}
