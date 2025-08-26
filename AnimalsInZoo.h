#include <iostream>
#include "Animal.h"

using namespace std;

class AnimalsInZoo {
	public:
		AnimalsInZoo(Animal animal);
		AnimalsInZoo();
		void display();
	private:
		int numAnimals = 0;
		Animal animal;
};
