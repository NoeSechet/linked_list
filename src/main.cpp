#include "include/kohaku.h"
#include "include/linked_list.h"

int main()
{
    srand(time(NULL));
    sf::RenderWindow window(sf::VideoMode(WIN_X, WIN_Y), "radar_project");

    l_list_t* normal_list = l_create_list(10);

    for (l_node_t *node = normal_list->begin; node; node = node->next) {
        node->shape->setPosition(rand() % WIN_X, rand() % WIN_Y);
    }

    screen_list_t *screenList = splitScreen(4);

    for (l_node_t *temp = normal_list->begin; temp; temp = temp->next) {
        sl_pushback(screenList, 0, temp);
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

        for (size_t i = 0; i < screenList->size; i += 1)
        {
            for (l_node_t *temp = screenList->splits[i]->begin; temp; temp = temp->next)
            {
                window.draw(*temp->shape);
            }
            
        }

        // for (l_node_t* node = screenList->begin; node; node = node->next) {
        //     if (node->shape)
        //         window.draw(*node->shape);
        // }

        window.display();
    }
    return 0;
}