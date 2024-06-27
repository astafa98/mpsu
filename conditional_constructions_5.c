#include <stdio.h>
  
int main()
{
    int a = 5;
    int b = 27;
    int c = 19;
    int arr[3] = {a,b,c};
    int max = 0;
    
    for(int i=0; i<3; ++i) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("%d", max);
    return 0;
}
