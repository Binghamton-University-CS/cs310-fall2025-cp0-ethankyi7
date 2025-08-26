#include <stdlib.h>
#include "AnimalsInZoo.h"

int main() {
	Animal animal("penguin", 100);
	AnimalsInZoo zooAnimal(animal);
	zooAnimal.display();

	return 0;
}

