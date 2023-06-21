#include "../Class Header/Vector3.h"

Vector3::Vector3(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;

}

void Vector3::Print()
{
	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
	std::cout << "z = " << z << std::endl;
}

Vector3 Vector3::operator+(Vector3& clone)
{
	x += clone.x;
	y += clone.y;
	z += clone.z;

	return Vector3(x,y,z);
}

Vector3& Vector3::operator++()
{
	x++;
	y++;
	z++;

	return *this;
	// TODO: 여기에 return 문을 삽입합니다.
}


