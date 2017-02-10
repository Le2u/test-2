
#include <stdio.h>

int main(int argc, const char * argv[]) {
    double amount ;
    double price ;
    
    printf("请输入价格");
    scanf("%lf",&price);
    
    printf("请输入面值");
    scanf("%lf",&amount);
    
    if ( amount >= price ) {
        printf("找您%f元\n", amount - price );
    }else{
        printf("您支付的金额不足\n还需要%f元\n",price - amount );
    }
    
    return 0;
}
