#include <stdio.h> 
  
struct s { 
    int i; 
    char ch; 
    double d; 
} __attribute__((packed));  
// Attribute informing compiler to pack all members 
  
int main() 
{ 
    struct s A; 
    printf("Size of A is: %ld", sizeof(A)); 
} 
