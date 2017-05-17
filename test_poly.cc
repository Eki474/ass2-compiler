#include <iostream>

class parent
{
public:
	parent();
	virtual void output(){
		std::cout << "je suis le parent" << std::endl;
	}
};

class enfant : public parent
{
public:
	enfant();
	virtual void output(){
		std::cout << "je suis l'enfant" << std::endl;
	}
};

class petit_enfant : public enfant
{
public:
	petit_enfant();
	void output();
};

parent::parent(){}
enfant::enfant(){}
petit_enfant::petit_enfant(){}

void petit_enfant::output()
{
	std::cout << "je suis le petit enfant" << std::endl;
}


int main(int argc, char **argv)
{
	parent* p = new parent();
	parent* e = new enfant();
	parent* pe = new petit_enfant();

	p->output();
	e->output();
	pe->output();
}