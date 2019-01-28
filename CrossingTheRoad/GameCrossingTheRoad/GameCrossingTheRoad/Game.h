#pragma once
#include "console.h"
#include "Truck.h"
#include <conio.h>
#include <iostream>
#include "Car.h"
#include "Dinausor.h"
#include "Animal.h"
#include <Windows.h>
#include "Vehicle.h"
#include "Bird.h"
#include "People.h"
#include "Traffic.h"
class Game
{
private:
	int _numberOfBurdens;
	People player;
	Truck * trucks;
	Car * cars;
	Bird * birds;
	Dinausor * dinausors;
public:
	int getNumberOfBurdens() {
		return _numberOfBurdens;
	}
	Vehicle * getVehicle();
	Animal * getAnimal();
	People getPeople();
	void drawGame();
	void updatePosVehicle();
	void updatePosAnimal();
	void updatePosPeople(char);
	Game & operator = (const Game &);
public:
	Game();
	Game(const Game &);
	Game(int);
	~Game();
};

