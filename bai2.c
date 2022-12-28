#include <stdio.h>

int main()
{
    
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    
    float s = 0.0;
    
    for(int i = 1; i < n; i++) {
        
        s += (float) 1 / i; 
    }
    
    printf("Tong S = %f", s);

    return 0;
}
