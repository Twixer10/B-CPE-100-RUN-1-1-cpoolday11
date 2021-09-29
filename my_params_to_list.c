/*
** EPITECH PROJECT, 2020
** MY PARAMS TO LIST
** File description:
** NO DESCRIPTION FOUND
*/

#include "./include/my.h"
#include "./include/mylist.h"
#include <stdlib.h>

linked_list_t *store_to_list(void *data, linked_list_t *list)
{
    linked_list_t *list2 = malloc(sizeof(linked_list_t));

    list2->data = data;
    list2->next = list;
    
    return (list2);
    
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    int i = 0;
    linked_list_t *list = malloc(sizeof(linked_list_t));
    
    while (i < ac) {
        list = store_to_list(av[i], list);
        i = i + 1;
    }
    return (list);
}
