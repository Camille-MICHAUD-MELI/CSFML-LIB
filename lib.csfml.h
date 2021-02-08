/*
** EPITECH PROJECT, 2020
** CSFML-LIB
** File description:
** lib.csfml.h
*/

#ifndef LIB_CSFML_H
#define LIB_CSFML_H

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Audio/Music.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Graphics/RenderWindow.h>

typedef struct object
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f vector;
    sfIntRect rectnl;
} object_t;

sfRenderWindow *creat_window(int width, int height, char *name);
object_t *create_object(const char *filepath, sfVector2f pos, sfIntRect rect);

#endif