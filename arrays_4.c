#include <stdio.h>

int main()
{
    char array[] = {1,2,3,4,5};
     for(int j = sizeof(array)-1; j>=0; j--) {
         printf("%d", array[j]);
     }
}
