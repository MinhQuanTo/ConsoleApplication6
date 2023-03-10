#include "Entity.h"

Entity::Entity()
{
    life = 1;
}

void Entity::settings(Animation& a, int X, int Y, float Angle, int radius) // set parameters of entities
{
    anim = a;
    x = X; y = Y;
    angle = Angle;
    R = radius;
}

void Entity::update()
{

}

void Entity::draw(RenderWindow& app) // draw entity
{
    anim.sprite.setPosition(x, y);
    anim.sprite.setRotation(angle + 90);
    app.draw(anim.sprite);
}

Entity::~Entity()
{
}