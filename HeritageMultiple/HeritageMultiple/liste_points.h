#pragma once
#include "liste.h"
#include "point.h"

class liste_points :
	public liste, public point
{
public:
	liste_points();
	~liste_points();

	void ajoutPoint(point);
	void affichageListe();
};