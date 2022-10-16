#include <iostream>
#include <cmath>

void F(double x, double y)
{
	if ((pow((pow(x, 2) + pow(y, 2) - 1), 3) - pow(x, 2) * pow(y, 3)) <= 0) std::cout << '*';
	else std::cout << '.';
}

int main()
{
	int width = 41, height = 21;
	double xstep = 1.5 / ((width - 1) / 2), ystep = 1.5 / ((height - 1) / 2);

	for (double y = 1.5; y > ystep; y -= ystep)
	{
		for (double x = 1.5; x > xstep; x -= xstep) F(x, y);
		std::cout << '|';
		for (double x = -xstep; x >= -1.5; x -= xstep) F(x, y);
		std::cout << std::endl;
	}
	for (int i = 0; i <= width; i++) std::cout << '-';
	std::cout << std::endl;
	for (double y = -ystep; y >= -1.5; y -= ystep)
	{
		for (double x = 1.5; x > xstep; x -= xstep) F(x, y);
		std::cout << '|';
		for (double x = -xstep; x >= -1.5; x -= xstep) F(x, y);
		std::cout << std::endl;
	}

	return 0;
}
