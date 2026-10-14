#include "Overcoat.h"

Overcoat::Overcoat()
{
    name = "underfined";
    type = "underfined";
    size = 0;
    price = 0;
}

Overcoat::Overcoat(string name, string type, int size, float price)
{
    this->name = name;
    this->type = type;
    this->size = size;
    this->price = price;
}

string Overcoat::getName() const
{
    return name;
}

string Overcoat::getType() const
{
    return type;
}

int Overcoat::getSize() const
{
    return size;
}

float Overcoat::getPrice() const
{
    return price;
}

void Overcoat::setName(string name)
{
    this->name = name;
}

void Overcoat::setType(string type)
{
    this->type = type;
}

void Overcoat::setSize(int size)
{
    this->size = size;
}

void Overcoat::setPrice(float price)
{
    this->price = price;
}

bool Overcoat::operator==(const Overcoat& obj) const&
{
    if (this->type == obj.type) {
        return true;
    }
    else {
        return false;
    }
}

bool Overcoat::operator!=(const Overcoat& obj) const&
{
    if (this->type != obj.type) {
        return true;
    }
    else {
        return false;
    }
}

bool Overcoat::operator>(const Overcoat& obj) const&
{
    if (this->price > obj.price) {
        return true;
    }
    else {
        return false;
    }
}

bool Overcoat::operator<(const Overcoat& obj) const&
{
    if (this->price < obj.price) {
        return true;
    }
    else {
        return false;
    }
}

bool Overcoat::operator>=(const Overcoat& obj) const&
{
    if (this->price >= obj.price) {
        return true;
    }
    else {
        return false;
    }
}

bool Overcoat::operator<=(const Overcoat& obj) const&
{
    if (this->price <= obj.price) {
        return true;
    }
    else {
        return false;
    }
}

Overcoat& Overcoat::operator--()
{
    // TODO: insert return statement here
    size = size - 1;
    return *this;
}

Overcoat& Overcoat::operator--(int)
{
    // TODO: insert return statement here
    Overcoat tmp = *this;
    --(*this);
    return tmp;
}

Overcoat& Overcoat::operator++()
{
    // TODO: insert return statement here
    size = size + 1;
    return *this;
}

Overcoat& Overcoat::operator++(int)
{
    // TODO: insert return statement here
    Overcoat tmp = *this;
    ++(*this);
    return tmp;
}
