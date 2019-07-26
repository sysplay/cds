#include <stdio.h> 
  
// To force compiler to use 1 byte packaging 
#pragma pack(1) 
struct s { 
    int i; 
    char ch; 
    double d; 
}; 
  
int main() 
{ 
    struct s A; 
    printf("Size of A is: %ld", sizeof(A)); 
} 
