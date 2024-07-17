#include <stdio.h>

int main()
{
    char array[] = {1,2,3,4};
     printf("%s", array);
     array[0] *= 2;
     array[3] *= 2;
     for(int i = 0; i<4; i++) {
         printf("%d", array[i]);
     }
}
