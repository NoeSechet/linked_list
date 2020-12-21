/*
** EPITECH PROJECT, 2020
** linked_list_train
** File description:
** linked_list
*/

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include "utils.h"

typedef struct node_s
{
    struct node_s *previous;
    struct node_s *next;
    void *shape;
    shape_type type;
} node_t;

typedef struct l_linked_list_s
{
    node_t *begin;
    node_t *end;
    size_t size;
} l_linked_list_t;

l_linked_list_t *l_create_list(size_t size);
bool l_push_back(l_linked_list_t *list, node_t *new_node);
node_t *l_create_node(int number);

#endif /* !LINKED_LIST_H_ */