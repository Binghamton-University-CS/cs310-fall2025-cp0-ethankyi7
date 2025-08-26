#include "AnimalsInZoo.h"

AnimalsInZoo::AnimalsInZoo(Animal a) {
	animal = a;
	numAnimals = 1;
}

AnimalsInZoo::AnimalsInZoo() : numAnimals(0) {};

void AnimalsInZoo::display() {
	cout << numAnimals << endl;
	if(numAnimals == 1) animal.display();
}
