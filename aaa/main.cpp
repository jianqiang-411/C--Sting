//
//  main.cpp
//  aaa
//
//  Created by user on 13-8-20.
//  Copyright (c) 2013年 user. All rights reserved.
//

#include <iostream>
#include <string.h>
int main(int argc, const char * argv[])
{

    char *info[15] = {0};
    char s[] = "|login|0,fan123@sohu.com,,fan,0,0,0,18610500,649.5,0|~";
    const char *d = "| ,";
    char *p;
    p = strtok(s,d);
    int i= 0;
     while(p)
    {
        info[i]= p;
        i++;
        p=strtok(NULL,d);
    }
    
    for(int j = 0;j <15;j++) {
        printf("%s",info[j]);
        printf("\n");
    }
    
    
    
    return 0;
}

