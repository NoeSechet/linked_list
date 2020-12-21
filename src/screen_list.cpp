#include "include/linked_list.h"

screen_list_t *splitScreen(size_t size)
{
    screen_list_t *list = new screen_list_t;

    list->size = size;
    list->splits = new l_list_t*[size];
    for (size_t i = 0; i < size; i += 1)
    {
        list->splits[i] = l_create_list(0);
    }

    return list;
}