#include <stdio.h>
  
int main(void)
{
    int a = 3;
    int b = 6;
    int c = a;
    
    int d = 5;
    int e = 3;
    
    int f = 20;   //10100 
    int g = 10;  // 01010
    
    int h = 5;
    int k = 3;
    
   // через 3 переменную
    a = b;
    b = c;
    
   // без 3 переменной 
    d = d + e;
    e = e - d;
    d += 1;
    
    //xor
    f = f ^ g;     
    g = f ^ g;     
    
    //операция с одним выражением 
    h = h+k-(h=k);
    
    printf("result 1: a = %d, b = %d\nresult 2: d = %d, e = %d\nresult 3: f = %d, g = %d\nresult 4: h = %d", a, b, d, e, f, g, h);
}
