#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;
//const HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
class House;
__interface IBuilder
{
	void buildFoundation(House& house);
	void buildWalls(House& house);
	void buildWindow(House& house);
	void buildDoor(House& house);
	void buildRoof(House& house);
};
__interface IPart
{
	void work();
	size_t getProgress();
};
class Foundation:public IPart
{
	size_t workPercentage=0;//виконана робота 
public:
	void work()override
	{
		if (workPercentage != 100)
		{
			workPercentage += 25;
		}
		//while (workPercentage!=100)
		//SetConsoleCursorPosition(handle, );

	};
	size_t getProgress()override
	{
		return workPercentage;
	};
};
class Walls :public IPart
{
	size_t workPercentage = 0;//виконана робота 
public:
	void work()override
	{
		if (workPercentage != 100)
		{
			workPercentage += 25;
		}
	};
	size_t getProgress()override
	{
		return workPercentage;
	};
};
class Door :public IPart
{
	size_t workPercentage = 0;//виконана робота 
public:
	void work()override
	{
		if (workPercentage != 100)
		{
			workPercentage += 25;
		}
	};
	size_t getProgress()override
	{
		return workPercentage;
	};
};
class Window :public IPart
{
	size_t workPercentage = 0;//виконана робота 
public:
	void work()override
	{
		if (workPercentage != 100)
		{
			workPercentage += 25;
		}
	};
	size_t getProgress()override
	{
		return workPercentage;
	};
};
class Roof :public IPart
{
	size_t workPercentage = 0;//виконана робота 
public:
	void work()override
	{
		if (workPercentage != 100)
		{
			workPercentage += 25;
		}
	};
	size_t getProgress()override
	{
		return workPercentage;
	};
};

class House :public IPart
{
	friend class Builder;
	friend class Foreman;
	size_t workPercentage = 0;//виконана робота 
	Foundation foundation;
	Walls walls;
	Door door;
	Window window;
	Roof roof;
public:
	void work()override
	{
		if (workPercentage != 100)
		{
			foundation.work();
			walls.work();
			door.work();
			window.work();
			roof.work();
		}
	};
	size_t getProgress()override
	{
		workPercentage = 0;
		workPercentage += foundation.getProgress() / 5;
		workPercentage += walls.getProgress() / 5;
		workPercentage += door.getProgress() / 5;
		workPercentage += window.getProgress() / 5;
		workPercentage += roof.getProgress() / 5;
		cout << "House : " << workPercentage << " %\n";
		return workPercentage;
	};
};
class Builder:public IBuilder
{
public:
	void buildFoundation(House& house)override
	{
		house.foundation.work();
	};
	void buildWalls(House& house)override
	{
		house.walls.work();
	};
	void buildWindow(House& house)override
	{
		house.window.work();
	};
	void buildDoor(House& house)override
	{
		house.door.work();
	};
	void buildRoof(House& house)override
	{
		house.roof.work();
	};
};
class Foreman:public Builder
{
public:
	void getProgressFoundation(House& house)
	{
		cout<<"Foundation : "<< house.foundation.getProgress()<<" %\n";
	};
	void getProgressWalls(House& house)
	{
		cout << "Walls : " << house.walls.getProgress() << " %\n";
	};
	void getProgressWindow(House& house)
	{
		cout << "Window : " << house.window.getProgress() << " %\n";
	};
	void getProgressDoor(House& house)
	{
		cout << "Door : " << house.door.getProgress() << " %\n";
	};
	void getProgressRoof(House& house)
	{
		cout << "Roof : " << house.roof.getProgress() << " %\n";
	};
};

