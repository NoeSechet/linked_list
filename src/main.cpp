#include "include/Kohaku.h"
#include "include/Linked_list.h"

int main()
{
    srand(time(NULL));
    sf::RenderWindow window(sf::VideoMode(WIN_X, WIN_Y), "radar_project");

    l_list_t* l_list = l_create_list(10);

    for (l_node_t *node = l_list->begin; node; node = node->next) {
        node->shape->setPosition(rand() % WIN_X, rand() % WIN_Y);
    }

    while (window.isOpen())
    {
        window.clear();
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        for (l_node_t* node = l_list->begin; node; node = node->next) {
            window.draw(*node->shape);
        }

        window.display();
    }
    return 0;
}