#include <stdio.h>
  
int main(void)
{
     char inputNum = 0b01101;
     char bit_1 = (inputNum >> 1) & 1;
     char bit_2 = (inputNum >> 2) & 1;
    
     char xor_bits = bit_1 ^ bit_2;
     char res = inputNum ^ (xor_bits << 1 | xor_bits << 2);
  
     printf("%d", res);   // 11
     return 0;  
}
