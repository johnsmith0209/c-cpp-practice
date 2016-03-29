//
//  main.c
//  CLessons
//
//  Created by 螣柴 on 15-7-1.
//  Copyright (c) 2015年 tony. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#include "struct.h"
#include "union.h"

int main(int argc, const char * argv[]) {
/*-------struct----------*/
//    File file = {"c struct lessons", 200};
//    file.name = "";
//    File * file = malloc(sizeof(File));
//    file->name = "c struct lessons";
//    file->size = 200;
//    free(file);
//    printf("File name is %s, size is %d\n", file->name, file->size);

/*---------union------------*/
    Color c;
    c.color = 0xFFF1F2F3; //
    printf("red is %X\n", c.colorArgb.red);
    return 0;
}
