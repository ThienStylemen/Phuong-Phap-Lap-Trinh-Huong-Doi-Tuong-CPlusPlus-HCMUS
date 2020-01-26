#include "Carbriolet.h"



Carbriolet::Carbriolet(){

}

void Carbriolet::startEngine() {
	cout << "removing roof" << endl;
	Car::startEngine();
}
Carbriolet::~Carbriolet()
{
}
