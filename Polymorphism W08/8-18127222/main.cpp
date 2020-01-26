#include"Animal.h"
#include"Antelope.h"
#include"Cheetah.h"
#include"Dog.h"
#include"Human.h"
#include"Lion.h"
#include"Hourse.h"
int CompareTwoAnimal(Animal *a, Animal* b){
	if (a->CompareWith(b) == 1) return 1;
	else if (a->CompareWith(b) == 0) return 0;
	else return -1;
}

int main() {
	Animal *p1 = new Human;
	Animal *p2 = new Lion;
	cout << CompareTwoAnimal(p1, p2) << endl;
	Animal *p3 = new Dog;
	cout << CompareTwoAnimal(p3, p1) << endl;
	Animal *p4 = new Antelope;
	Animal *p5 = new Cheetah;
	cout << CompareTwoAnimal(p3, p4) << endl;
	cout << CompareTwoAnimal(p1, p5) << endl;
	Animal *p6 = new Hourse;
	cout << CompareTwoAnimal(p3, p6) << endl;


	delete p1, p2, p3, p4, p5,p6;
	system("pause");
	return 0;
}