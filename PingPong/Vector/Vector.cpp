#include "Vector.h"

Vector::Vector(double X, double Y){
	this->X = X;
	this->Y = Y;
}

Vector Vector::operator+(Vector vec)
{
	return Vector(this->X + vec.X, this->Y + vec.Y);
}

Vector Vector::operator-(Vector vec)
{
	return Vector(this->X - vec.X, this->Y - vec.Y);
}

Vector Vector::operator*(int num)
{
	return Vector(this->X * num, this->Y * num);
}
