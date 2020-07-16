#include <iostream>
#include "Header.h"
#define ENDL std::cout << endl;
int main()
{
	House house;
	Foreman foreman;
	house.getProgress();
	ENDL
	foreman.buildDoor(house);
	foreman.getProgressDoor(house);

	ENDL


		

	foreman.buildFoundation(house);
	foreman.getProgressFoundation(house);

	foreman.buildRoof(house);
	foreman.getProgressRoof(house);

	foreman.buildWalls(house);
	foreman.getProgressWalls(house);

	foreman.buildWindow(house);
	foreman.getProgressWindow(house);


	ENDL


		house.getProgress();
	ENDL
	foreman.buildDoor(house);
	foreman.getProgressDoor(house);

	foreman.buildFoundation(house);
	foreman.getProgressFoundation(house);

	foreman.buildRoof(house);
	foreman.getProgressRoof(house);

	foreman.buildWalls(house);
	foreman.getProgressWalls(house);

	foreman.buildWindow(house);
	foreman.getProgressWindow(house);


	ENDL


		house.getProgress();
	ENDL
	foreman.buildWindow(house);
	foreman.buildDoor(house);
	foreman.buildFoundation(house);
	foreman.buildRoof(house);
	foreman.buildWalls(house);
	foreman.buildWindow(house);
	foreman.buildDoor(house);
	foreman.buildFoundation(house);
	foreman.buildRoof(house);
	foreman.buildWalls(house);

	foreman.getProgressDoor(house);
	foreman.getProgressFoundation(house);
	foreman.getProgressRoof(house);
	foreman.getProgressWalls(house);
	foreman.getProgressWindow(house);

	ENDL


		house.getProgress();
	ENDL
	return 0;
}