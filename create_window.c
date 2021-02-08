/*
** EPITECH PROJECT, 2020
** CSFML-LIB
** File description:
** creata_window.c
*/

#include "lib.csfml.h"

sfRenderWindow *creat_window(int width, int height, char *name)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;
    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = 60;
    window = sfRenderWindow_create(video_mode, name,
    sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window, 55);
    return (window);
}