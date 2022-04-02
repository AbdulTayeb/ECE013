/* 
 * File:   part0.c
 * Author: 
 *
 * Created on 2022?3?31?, ??11:56
 */

#include <stdio.h>
#include <stdlib.h>
#include "BOARD.h"
/*
 * 
 */
int main(void) {
    BOARD_Init();
    printf("Hello world!\n");
    
#ifdef PIC32
    while(1);
#else
    return (EXIT_SUCCESS);
#endif
}

