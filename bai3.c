#include <stdio.h>

int main()
{
    
    int dien_thang_truoc;
    int dien_thang_nay;
    
    printf("Thang truoc: ");
    scanf("%d", &dien_thang_truoc);
    
    printf("Thang nay: ");
    scanf("%d", &dien_thang_nay);
    
    int so_dien = dien_thang_nay - dien_thang_truoc;
    
    int tien_dien = 0;
    
    if(so_dien <= 100) {
        tien_dien = so_dien * 550 * 1.0 + (so_dien * 550) * 0.1; 
    }
    
    if(so_dien > 100 && so_dien <= 150) {
        tien_dien = 100 * 550 * 1.0 + (so_dien - 100 ) * 900 * 1.0;
        tien_dien += tien_dien * 0.1;
    }
    
    if (so_dien > 150 && so_dien <= 200) {
        tien_dien = 100 * 550 * 1.0 + (so_dien - 100 ) * 900 * 1.0 + (so_dien - 50) * 1200 * 1.0;
        tien_dien += tien_dien * 0.1;
    }
    
    if (so_dien > 200 && so_dien <= 300) {
        tien_dien = 100 * 550 * 1.0 + (so_dien - 100 ) * 900 * 1.0 + (so_dien - 50) * 1200 * 1.0 + (so_dien - 50) * 1340 * 1.0;
        tien_dien += tien_dien * 0.1;
    }
    
    if(so_dien > 300) {
        tien_dien = 100 * 550 * 1.0 + (so_dien - 100 ) * 900 * 1.0 + (so_dien - 50) * 1200 * 1.0 + (so_dien - 50) * 1340 * 1.0 + (so_dien - 100) * 1400;
        tien_dien += tien_dien * 0.1;
    }
    
    printf("%d", tien_dien);

    return 0;
}
