#include "stdafx.h"
#include "Game.h"
#include <iostream>
Game::Game(){
	trucks = nullptr;
	cars = nullptr;
	birds = nullptr;
	dinausors = nullptr;
	player = People();
}

Game::Game(int n) {
	_numberOfBurdens = n;
	trucks = new Truck[n];
	cars = new Car[n];
	birds = new Bird[n];
	dinausors = new Dinausor[n];
	for (int i = 0; i < n; i++) {
		trucks[i] = Truck(i * 50, 15);
		cars[i] = Car(i * 50, 30);
		birds[i] =Bird(i*50,45);
		dinausors[n] = Dinausor(i*50,60);
	}
	player = People(50, 5,1);
}

Game::Game(const Game & other) {
	_numberOfBurdens = other._numberOfBurdens;
	delete[] trucks;
	delete[] cars;
	delete[] birds;
	delete[] dinausors;
	trucks = new Truck[ _numberOfBurdens];
	cars = new Car[_numberOfBurdens];
	birds = new Bird[_numberOfBurdens];
	dinausors = new Dinausor[_numberOfBurdens];
	for (int i = 0; i < _numberOfBurdens; i++) {
		trucks[i] = other.trucks[i];
		cars[i] = other.cars[i];
		birds[i] = other.birds[i];
	    dinausors[i] = other.dinausors[i];
	}
	player = other.player;
	
}
Vehicle * Game::getVehicle() {
	return trucks;
}

People Game::getPeople() {
	return player;
}
void Game::updatePosVehicle() {
	for (int i = 0; i < _numberOfBurdens; i++) {
		trucks[i].Move();
		cars[i].Move();
	}
	
}

void Game::updatePosPeople(char x) {
	player.Up(x);
	player.Down(x);
	player.Left(x);
	player.Right(x);
}

void Game::updatePosAnimal() {
	for (int i = 0; i < _numberOfBurdens;i++) {
		birds[i].Move();
		dinausors[i].Move();
	}
}
void Game::drawGame() {
	clrscr();
	for (int i = 0; i < _numberOfBurdens; i++) {
		trucks[i].Paint();
		cars[i].Paint();
		birds[i].Paint();
		dinausors[i].Paint();
	}
	player.Paint();
}
Game & Game:: operator=(const Game &other) {
	_numberOfBurdens = other._numberOfBurdens;
	delete[] trucks;
	delete[] cars;
	delete[] birds;
	delete[] dinausors;
	trucks = new Truck[_numberOfBurdens];
	cars = new Car[_numberOfBurdens];
	birds = new Bird[_numberOfBurdens];
	dinausors = new Dinausor[_numberOfBurdens];
	for (int i = 0; i < _numberOfBurdens; i++) {
		trucks[i] = other.trucks[i];
		cars[i] = other.cars[i];
		birds[i] = other.birds[i];
		dinausors[i] = other.dinausors[i];
	}
	player = other.player;
	return *this;
}
Game::~Game(){
	delete[] trucks;
	delete[] cars;
	delete[] birds;
	delete[] dinausors;
} 
