#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>


int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "My Window", sf::Style::Titlebar | sf::Style::Close);

     sf::Event event;

    while (window.isOpen()) {
   

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if(event.type == sf::Event::KeyPressed){
                if(event.key.code == sf::Keyboard::Escape){
                window.close();
                }  
            }
        }

        window.clear();
        // Draw your graphics here

        window.display();
    }

    return 0;
}


//g++ video.cpp -o hello -lsfml-graphics -lsfml-system -lsfml-window
// ./hello 