#include <stdio.h>
#include <string.h>

// Originally from:
// http://www.thegeekstuff.com/2013/06/buffer-overflow/
// gets() doesn't check bounds and can write more than buffer allows.
// input a string greater than the buffer -- you don't need correct password.
int main(void)
{
    char buff[15];
    int pass = 0;

    printf("\n Enter the password : \n");
    gets(buff);

    if(strcmp(buff, "thegeekstuff"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
       /* Now Give root or admin rights to user*/
        printf ("\n Root privileges given to the user \n");
    }

    return 0;
}