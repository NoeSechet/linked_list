#ifndef LINKED_LISTT_H
#define LINKED_LISTT_H


#include "utils.h"

typedef struct l_node_s
{
	struct l_node_s *next;
	struct l_node_s *previous;
	sf::Shape *shape;
} l_node_t;

typedef struct l_list_s
{
	size_t size;
	l_node_t *begin;
	l_node_t *end;

} l_list_t;

typedef struct screen_list_s
{
	size_t size;
	l_list_t **splits;
} screen_list_t;

bool l_list_push_back(l_list_t* list, l_node_t* new_node);
l_node_t* l_create_node(shape_type type);
l_list_t *l_create_list(unsigned int size);

bool sl_pushback(screen_list_t *screenList, size_t index, l_node_t *node);
screen_list_t *splitScreen(size_t size);

#endif /* !LINKED_LISTT_H */
