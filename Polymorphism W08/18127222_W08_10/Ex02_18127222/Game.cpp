#include "Game.h"

void Game::InputListOfGate() {
	cout << "how many Academic Gate do you want to have : ";
	unsigned int academicgate =0;
	cin >> academicgate;
	
	cout << "how many Business Gate do you want to have : ";
	unsigned int businessgate = 0;
	cin >> businessgate;

	cout << "how many Power Gate do you want to have : ";
	unsigned int powergate = 0;
	cin >> powergate;

	Gate *p;
	for (int i = 0; i < academicgate; i++) {
		p = NULL;
		p = new AcademicGate;
		Game::a.push_back(p);
	}
	for (int i = 0; i < businessgate; i++) {
		p = NULL;
		p = new BusinessGate;
		Game::a.push_back(p);
	}
	for (int i = 0; i < powergate; i++) {
		p = NULL;
		p = new PowerGate;
		Game::a.push_back(p);
	}
}
//
//void Game::Process() {
//
//	for (int i = 0; i > Game::a.size(); i++) {
//		if (!Game::a[i]->checkForSaver(Game::saver)) {	// is not succeed {
//			cout << "improve your self";
//			return;
//		}
//	}
//	cout << "your are a good saver, well done ";
////}
//void Game::createASaver() {
//	this->saver.CreateInformationForSaver();
//}

Game::Game(){

}

Game::~Game() {
	for (int i = 0; i < Game::a.size(); i++) {
		delete Game::a[i];
	}
}
