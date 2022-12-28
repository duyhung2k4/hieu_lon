#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    
    printf("Nhap so n: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("Nhap so arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    int tong_chan = 0;
    int tong_le = 0;
    int tong_chia_het_cho_3 = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            tong_chan += arr[i];
        }
        
        if(arr[i] % 2 == 1) {
            tong_le += arr[i];
        }
        
        if(arr[i] % 3 == 0) {
            tong_chia_het_cho_3 += arr[i];
        }
    }
    
    printf("Tong chan: %d \n", tong_chan);
    printf("Tong le: %d \n", tong_le);
    printf("Tong chia het cho 3: %d \n", tong_chia_het_cho_3);


    return 0;
}
