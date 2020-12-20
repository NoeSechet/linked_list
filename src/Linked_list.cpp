#include "include/Linked_list.h"

bool l_list_push_back(l_list_t* list, l_node_t *new_node)
{
	if (!list || !new_node)
		return false;
	if (list->size == 0) {
		list->begin = new_node;
		list->end = new_node;
	}
	else {
		list->end->next = new_node;
		new_node->previous = list->end;
		list->end = new_node;
	}
	list->size += 1;
	return true;
}

l_node_t *l_create_node(shape_type type)
{
	l_node_t* new_node = new l_node_t;

	new_node->next = nullptr;
	new_node->previous = nullptr;
	switch (type) {
	case shape_type::CIRCLE: new_node->shape = new sf::CircleShape(20); break;
		case shape_type::RECTANGLE: new_node->shape = new sf::RectangleShape(sf::Vector2f(50, 30)); break;
		default: new_node->shape = new sf::CircleShape(20); break;
	}
	new_node->shape->setFillColor(sf::Color::Blue);
	return new_node;
}

l_list_t *l_create_list(unsigned int size)
{
	l_list_t *new_list = new l_list_t;

	for (size_t i = 0; i < size; i += 1)
	{
		l_list_push_back(new_list, l_create_node(shape_type::CIRCLE));
	}

	return new_list;
}