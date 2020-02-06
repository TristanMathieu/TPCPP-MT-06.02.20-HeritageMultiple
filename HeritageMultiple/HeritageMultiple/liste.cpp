#include <stdlib.h>
#include "liste.h"


liste::liste()
{
	debut = NULL;
	actuel = debut;
}


liste::~liste()
{
	element * prochain;
	actuel = debut;

	while (actuel != NULL)
	{
		prochain = actuel->suivant;
		delete(actuel);
		actuel = prochain;
	}
}

void liste::ajoute(void * monContent)
{
	element elementNeuf;
	element * nouveau;
	nouveau = &elementNeuf;
	nouveau->suivant = debut;
	nouveau->contenu = monContent;
	debut = nouveau;
}

void * liste::premier()
{
	return debut;
}

void * liste::prochain()
{
	actuel->suivant = actuel;
	return actuel;
}

int liste::fini()
{
	if (actuel == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
