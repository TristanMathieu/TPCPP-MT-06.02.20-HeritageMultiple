#pragma once


struct element
{
	element * suivant;
	void * contenu;
};

class liste
{
	element * debut;
	element * actuel;

public:
	liste();
	~liste();
	void ajoute(void *);
	void * premier();
	void * prochain();
	int fini();
};

