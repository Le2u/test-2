#include <stdio.h>

int main(int argc, const char * argv[]) {
    int amount = 100;
    int price = 0;
    
    printf("请输入价格");
    scanf("%d",&price);
    
    printf("请输入面值");
    scanf("%d",&amount);
    
    int change = amount - price ;
    
    printf("找%d\n",change);
    
    return 0;
}
