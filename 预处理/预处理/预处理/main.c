//
//  main.c
//  预处理
//
//  Created by mac on 2019/5/23.
//  Copyright © 2019年 mac. All rights reserved.
//

#include <stdio.h>
#define PI 3.1415926¬
#define MUTIPLE(a,b) a*b

int main(int argc, const char * argv[]) {
    printf("Pi = %lf",PI);
    printf("Hello, World!\n");
    double c = MUTIPLE(10, 20);
    printf("c = %lf\n",c);
    return 0;
}
