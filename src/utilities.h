/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: BSD-3-Clause
*/

#ifndef UTILITIES_H
#define UTILITIES_H

#include <stdio.h>


typedef struct{
    unsigned short id;
    char name[180];
}vit_command_t;


int add(int a, int b, int c);
int del(int a, int b);
void print(int a);

#endif /*UTILITIES_H*/

