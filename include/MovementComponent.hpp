#pragma once

//Standard libs
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <sstream>
#include <stack>
#include <map>

//SFML
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>


class MovementComponent
{
    private:
        sf::Sprite& sprite;
        
        float maxVelocity;
        float acceleration;
        float deceleration;
        
        sf::Vector2f velocity;
        
        //Initializer functions



    public:
        //Constructors & destructors
        MovementComponent(sf::Sprite& sprite, float maxVelocity, float deceleration, float acceleration);
        virtual ~MovementComponent();

        //Accessors
        const sf::Vector2f& getVelocity() const;


        //Functions
        const bool idle() const;
        void move(const float dir_x, const float dir_y, const float& dt);
        void update(const float& dt);
};