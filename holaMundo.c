/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   triangle.c
 * Author: davii
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int i;
    char acum[10];
    for (i=0;i<=9;i++){
        acum[i]='*';
        printf("%s\n",acum);
    }
    return (EXIT_SUCCESS);
}
