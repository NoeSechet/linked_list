#include "include/linked_list.h"
#include <stdbool.h>

node_t *l_create_node(shape_type type)
{
    node_t *new_node = new node_t;

    new_node->previous = nullptr;
    new_node->next = nullptr;

    switch (type)
    {
        case shape_type::CIRCLE: new_node->shape = new sf::CircleShape(20); break;
        case shape_type::RECTANGLE: new_node->shape = new sf::RectangleShape(sf::Vector2f(50, 30)); break;
        default: new_node->shape = new sf::CircleShape(20); break;
    }
    new_node->type = type;

    return new_node;
}

bool l_push_back(l_linked_list_t *list, node_t *new_node)
{
    if (!list || !new_node)
        return false;

    if (list->size == 0) {
        list->begin = new_node;
        list->end = new_node;
    } else if (list->size > 0) {
        list->end->next = new_node;
        new_node->previous = list->end;
        list->end = new_node;
    }
    list->size += 1;
    return true;
}

l_linked_list_t *l_create_list(size_t size)
{
    l_linked_list_t *new_list = new l_linked_list_t;

    new_list->begin = nullptr;
    new_list->end = nullptr;
    new_list->size = 0;

    for (size_t i = 0; i < size; i += 1)
    {
        l_push_back(new_list, l_create_node(shape_type::CIRCLE));
    }
    return new_list;
}