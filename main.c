#include <stdio.h>

int main(int argc, const char * argv[]) {
    double amount ;
    double price ;
    
    printf("请输入价格");
    scanf("%lf",&price);
    
    printf("请输入面值");
    scanf("%lf",&amount);
    
    double change = amount - price ;
    
    printf("找%lf\n",change);
    
    return 0;
}
