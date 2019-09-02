//
//  main.c
//  数组
//
//  Created by mac on 2019/5/21.
//  Copyright © 2019年 mac. All rights reserved.
//

#include <stdio.h>
#include "test.c"
#include "stdlib.h"
#include "time.h"

int main() {
    // insert code here...
    printf("Hello, World!\n");
    /// 二维数组必须给出列数
    /*
    int a[][4]={
        {1,2,3},
        {4,5,5},
        {7,8,8}
    };
    printf("%lu\n",sizeof(a));
     */
    
    
    /// 一维数组c
    // a,全部初始化
    int a[5]={1,2,3,4,5};
    printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d \n",i,a[i]);
    }
    
    /// 二维数组
    // a 全部初始化
    int b[2][2] = {{1,2},{3,4}};
    for (int i= 0; i<2; i++) {
        for (int j= 0; j<2; j++) {
            printf("b[%d][%d] = %d ",i,j,b[i][j]);
        }
        printf("\n");
    }
    
    
    printf("max = %d \n",max(10, 20));
    char str[51];
    srand(time(NULL));
    for (int i= 0; i<50; i++) {
        str[i] = rand() % 26 + 'a';
    }
    str[50]='\0';
    printf("%s\n",str);

    
    return 0;
}


int max(int a,int b){
//    return a>b?a:b;
    if (a>b) {
        return a;
    }else{
        return b;
    }
}

