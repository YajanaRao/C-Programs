#include <stdio.h>
#include <ctype.h>
#define EOL '\n'

int main()
{
    char letter[80];
    int tag,count = 0;
    
    /* Read in lower case text */
    while((letter[count] = getchar()) != EOL) {
    ++count;
    tag = count;
    }
    
    /* display the lowercase text */
    count = 0;
    while (count < tag)
    {
        putchar(tolower(letter[count]));
        ++count;
    }

    return 0;
}

