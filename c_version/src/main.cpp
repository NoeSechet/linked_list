#include "include/utils.h"
#include "include/linked_list.h"

int main()
{
    srand(time(NULL));
    sf::RenderWindow window(sf::VideoMode(1000, 800), "linked_list workshop");
    l_linked_list_t *list = l_create_list(8);

    for (node_t *temp = list->begin; temp != nullptr; temp = temp->next)
    {
        ((sf::Shape*)temp->shape)->setPosition(rand() % 1000, rand() % 800);
    }

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        for (node_t *temp = list->begin; temp != nullptr; temp = temp->next) {
            // switch (temp->type)
            // {
            //     case shape_type::CIRCLE: window.draw(*((sf::CircleShape*)temp->shape)); break;
            //     case shape_type::RECTANGLE: window.draw(*((sf::RectangleShape*)temp->shape)); break;
            //     default: break;
            // }
            window.draw(*((sf::Shape*)temp->shape));
        }

        window.display();
    }
    return 0;
}