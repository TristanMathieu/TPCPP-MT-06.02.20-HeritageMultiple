#include "liste_points.h"



liste_points::liste_points()
{
	
}


liste_points::~liste_points()
{

}

void liste_points::ajoutPoint(point newPoint)
{
	point * adrNewPoint;
	ajoute(adrNewPoint);
}

void liste_points::affichageListe()
{
	point pointActuel;
	point * adrPointActuel;
	
	if (fini() == 0){
		affiche();
		prochain();
	}
}
