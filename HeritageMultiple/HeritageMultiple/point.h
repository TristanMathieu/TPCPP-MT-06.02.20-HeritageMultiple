#pragma once
#include <iostream>
#include <cstdlib>

class point
{
	int x, y;
public:
	point(int abs = 0, int ord = 0) { x = abs; y = ord; };
	void affiche() { std::cout << "Coordonnées : " << x << " " << y << "\n"; }
};

