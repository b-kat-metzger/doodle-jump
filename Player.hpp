#pragma once
#include <SFML/Graphics.hpp>
#include "SFML/Main.hpp"
#include "SFML/System.hpp"
#include "SFML/Graphics/Sprite.hpp"

class Player : public sf::RectangleShape{

public:

	Player(const sf::Vector2f& size, sf::Vector2f& pos, const sf::Color& color) : sf::RectangleShape(size)
	{
		this->setPosition(pos);
		this->setFillColor(color);
        //this->setTexture(texture);
        this->size = size;
        velocity = 0.0;
	}

	bool isFalling() {
		return (velocity < 0);
	}


private:
	double velocity;
   // sf::Texture texture;
    sf::Vector2f size;
    sf::Vector2f pos;
};


//class Platform
//{
//public:
//
//    Platform(sf::Texture& texture double x, double y, double width, double float)
//        : texture(&texture), width(width), height(height)
//    {
//        sprite.setTexture(*texture);
//        sprite.setPos(x, y);
//        sprites.setSize(width / texture.getSize().x, height / texture.getSize().y);
//    }
//
//    void draw(sf::RenderWindow& window) //what displays the platforms on the SFML window
//    {
//        window.draw(sprite);
//    }
//
//    void setPos(double x, double y) //set the postion of the platforms
//    {
//        sprite.setPos(x, y);
//    }
//
//    sf::FloatRec getBounds() const //returns the global bounding rectangle (might help with collisions)
//    {
//        return sprite.getGlobalBounds();
//    }
//
//private:
//    sf::Texture& texture;
//    sf::Sprite sprite;
//    double width;
//    double height;
//};
