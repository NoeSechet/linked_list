#include "include/linked_list.h"

bool sl_pushback(screen_list_t *screenList, size_t index, l_node_t *node)
{
    if (!screenList || !node)
        return false;

    l_list_push_back(screenList->splits[index], node);

    return true;
}

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