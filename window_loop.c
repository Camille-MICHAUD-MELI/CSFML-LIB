/*
** EPITECH PROJECT, 2020
** CSFML-LIB
** File description:
** window_loop.c
*/

#include "libcsfml.h"

int window_loop(sfRenderWindow *window)
{
    while (sfRenderWindow_isOpen(window)) {
        printf("test");
    }
}

int main(void)
{
    sfRenderWindow *window = creat_window(600, 800, "test");
    window_loop(window);
}