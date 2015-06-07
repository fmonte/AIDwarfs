#include <iostream>
#include <ctime>
#include "dwarf.h"
#include "sleepstate.h"
#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
    /*  every dwarf has different: float gatherSpeed, float moveSpeed,
        float capacity, float maxstamina, places place */

    sf::Clock clock;

    sf::Font font;
    font.loadFromFile("GoodDog.otf");

    sf::Text* questText = new sf::Text();

    // select the font
    questText->setFont(font); // font is a sf::Font

    questText->setPosition(70,20);

    // set the string to display
    questText->setString("Hi, I'm Dotto.");

    // set the character size
    questText->setCharacterSize(24); // in pixels, not points!

    // set the color
    questText->setColor(sf::Color::White);

    // set the text style
    questText->setStyle(sf::Text::Bold);

    sf::Text* oreText = new sf::Text();

    // select the font
    oreText->setFont(font); // font is a sf::Font

    oreText->setPosition(600,20);

    // set the string to display
    oreText->setString("Ores: 0");

    // set the character size
    oreText->setCharacterSize(24); // in pixels, not points!

    // set the color
    oreText->setColor(sf::Color::White);

    // set the text style
    oreText->setStyle(sf::Text::Bold);

    Dwarf * Dotto = new Dwarf(questText, oreText, 2.0f, 1.0f, 50.0f, 50.0f);

    questText = new sf::Text();

    // select the font
    questText->setFont(font); // font is a sf::Font

    questText->setPosition(70,100);

    // set the string to display
    questText->setString("Hi, I'm Eolo.");

    // set the character size
    questText->setCharacterSize(24); // in pixels, not points!

    // set the color
    questText->setColor(sf::Color::White);

    // set the text style
    questText->setStyle(sf::Text::Bold);

    oreText = new sf::Text();

    // select the font
    oreText->setFont(font); // font is a sf::Font

    oreText->setPosition(600,100);

    // set the string to display
    oreText->setString("Ores: 0");

    // set the character size
    oreText->setCharacterSize(24); // in pixels, not points!

    // set the color
    oreText->setColor(sf::Color::White);

    // set the text style
    oreText->setStyle(sf::Text::Bold);
    Dwarf * Eolo = new Dwarf(questText, oreText,3.0f, 1.0f, 50.0f, 70.0f);
    questText = new sf::Text();

    // select the font
    questText->setFont(font); // font is a sf::Font

    questText->setPosition(70,180);

    // set the string to display
    questText->setString("Hi, I'm Pisolo.");

    // set the character size
    questText->setCharacterSize(24); // in pixels, not points!

    // set the color
    questText->setColor(sf::Color::White);

    // set the text style
    questText->setStyle(sf::Text::Bold);

    oreText = new sf::Text();

    // select the font
    oreText->setFont(font); // font is a sf::Font

    oreText->setPosition(600,180);

    // set the string to display
    oreText->setString("Ores: 0");

    // set the character size
    oreText->setCharacterSize(24); // in pixels, not points!

    // set the color
    oreText->setColor(sf::Color::White);

    // set the text style
    oreText->setStyle(sf::Text::Bold);
    Dwarf * Pisolo = new Dwarf(questText, oreText,1.0f, 1.0f, 50.0f, 15.0f);
    questText = new sf::Text();

    // select the font
    questText->setFont(font); // font is a sf::Font

    questText->setPosition(70,260);

    // set the string to display
    questText->setString("Hi, I'm Mammolo.");

    // set the character size
    questText->setCharacterSize(24); // in pixels, not points!

    // set the color
    questText->setColor(sf::Color::White);

    // set the text style
    questText->setStyle(sf::Text::Bold);

    oreText = new sf::Text();

    // select the font
    oreText->setFont(font); // font is a sf::Font

    oreText->setPosition(600,260);

    // set the string to display
    oreText->setString("Ores: 0");

    // set the character size
    oreText->setCharacterSize(24); // in pixels, not points!

    // set the color
    oreText->setColor(sf::Color::White);

    // set the text style
    oreText->setStyle(sf::Text::Bold);
    Dwarf * Mammolo = new Dwarf(questText, oreText,3.0f, 1.0f, 50.0f, 60.0f);
    questText = new sf::Text();

    // select the font
    questText->setFont(font); // font is a sf::Font

    questText->setPosition(70,340);

    // set the string to display
    questText->setString("Hi, I'm Gongolo.");

    // set the character size
    questText->setCharacterSize(24); // in pixels, not points!

    // set the color
    questText->setColor(sf::Color::White);

    // set the text style
    questText->setStyle(sf::Text::Bold);

    oreText = new sf::Text();

    // select the font
    oreText->setFont(font); // font is a sf::Font

    oreText->setPosition(600,340);

    // set the string to display
    oreText->setString("Ores: 0");

    // set the character size
    oreText->setCharacterSize(24); // in pixels, not points!

    // set the color
    oreText->setColor(sf::Color::White);

    // set the text style
    oreText->setStyle(sf::Text::Bold);
    Dwarf * Gongolo = new Dwarf(questText, oreText,4.0f, 1.0f, 50.0f, 40.0f);
    questText = new sf::Text();

    // select the font
    questText->setFont(font); // font is a sf::Font

    questText->setPosition(70,420);

    // set the string to display
    questText->setString("Hi, I'm Brontolo.");

    // set the character size
    questText->setCharacterSize(24); // in pixels, not points!

    // set the color
    questText->setColor(sf::Color::White);

    // set the text style
    questText->setStyle(sf::Text::Bold);

    oreText = new sf::Text();

    oreText->setPosition(600,420);

    // select the font
    oreText->setFont(font); // font is a sf::Font

    // set the string to display
    oreText->setString("Ores: 0");

    // set the character size
    oreText->setCharacterSize(24); // in pixels, not points!

    // set the color
    oreText->setColor(sf::Color::White);

    // set the text style
    oreText->setStyle(sf::Text::Bold);
    Dwarf * Brontolo = new Dwarf(questText, oreText,5.0f, 1.0f, 50.0f, 80.f);
    questText = new sf::Text();

    // select the font
    questText->setFont(font); // font is a sf::Font

    questText->setPosition(70,500);

    // set the string to display
    questText->setString("Hi, I'm Cucciolo.");

    // set the character size
    questText->setCharacterSize(24); // in pixels, not points!

    // set the color
    questText->setColor(sf::Color::White);

    // set the text style
    questText->setStyle(sf::Text::Bold);

    oreText = new sf::Text();

    // select the font
    oreText->setFont(font); // font is a sf::Font

    oreText->setPosition(600,500);

    // set the string to display
    oreText->setString("Ores: 0");

    // set the character size
    oreText->setCharacterSize(24); // in pixels, not points!

    // set the color
    oreText->setColor(sf::Color::White);

    // set the text style
    oreText->setStyle(sf::Text::Bold);
    Dwarf * Cucciolo = new Dwarf(questText, oreText,2.0f, 1.0f, 50.0f, 100.0f);

    sf::RenderWindow window(sf::VideoMode(800, 600), "Hey Ho, Hey Ho!");

    int i = 0;

    while (window.isOpen())
        {
        window.clear(sf::Color::Black);

            // check all the window's events that were triggered since the last iteration of the loop
            sf::Event event;
            while (window.pollEvent(event))
            {
                // "close requested" event: we close the window
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            // clear the window with black color


            window.draw(*Dotto->getQuestText());
            window.draw(*Dotto->getOreText());
            window.draw(*Eolo->getQuestText());
            window.draw(*Eolo->getOreText());
            window.draw(*Pisolo->getQuestText());
            window.draw(*Pisolo->getOreText());
            window.draw(*Mammolo->getQuestText());
            window.draw(*Mammolo->getOreText());
            window.draw(*Gongolo->getQuestText());
            window.draw(*Gongolo->getOreText());
            window.draw(*Brontolo->getQuestText());
            window.draw(*Brontolo->getOreText());
            window.draw(*Cucciolo->getQuestText());
            window.draw(*Cucciolo->getOreText());

            if(clock.getElapsedTime() > sf::seconds(2.0f)){
                clock.restart();
                std::cout << "Cycle: " << i << std::endl;
                //std::cout << "Dotto" << std::endl;
                Dotto->Update();
                //std::cout << "Eolo" << std::endl;
                Eolo->Update();
                //std::cout << "Pisolo" << std::endl;
                Pisolo->Update();
                //std::cout << "Mammolo" << std::endl;
                Mammolo->Update();
                //std::cout << "Gongolo" << std::endl;
                Gongolo->Update();
                //std::cout << "Brontolo" << std::endl;
                Brontolo->Update();
                //std::cout << "Cucciolo" << std::endl;
                Cucciolo->Update();
                ++i;
            }

            // end the current frame
            window.display();
        }

    return 0;
}
