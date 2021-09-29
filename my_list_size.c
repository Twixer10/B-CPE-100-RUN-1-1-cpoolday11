/*
** EPITECH PROJECT, 2020
** MY LIST SIZE
** File description:
** NO DESCRIPTION FOUND
*/

#include "./include/my.h"
#include "./include/mylist.h"

int my_list_size(linked_list_t  const *begin)
{
    int size = 0;

    while (begin->next)
    {
        size = size + 1;
    }
    return (size);
}
