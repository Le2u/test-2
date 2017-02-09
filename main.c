//
//  main.c
//  test02
//
//  Created by lijiacheng on 2017/2/9.
//  Copyright © 2017年 lijiacheng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    const int amount = 100;
    int price = 0;
    
    printf("请输入价格");
    scanf("%d",&price);
    
    int change = amount - price ;
    
    printf("找%d\n",change);
    
    return 0;
}
