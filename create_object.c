/*
** EPITECH PROJECT, 2020
** CSFML-LIB
** File description:
** creata_object.c
*/

object_t *create_object(const char *filepath, sfVector2f pos, sfIntRect rect)
{
    object_t *object = malloc(sizeof(object_t));

    object->texture = sfTexture_createFromFile(filepath, NULL);
    object->sprite = sfSprite_create();
    sfSprite_setTexture(object->sprite, object->texture, sfTrue);
    object->vector = pos;
    object->rectnl = rect;
    sfSprite_setTextureRect(object->sprite, object->rectnl);
    sfSprite_setPosition(object->sprite, object->vector);
    return (object);
}