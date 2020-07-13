#pragma once
#include <iostream>
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
class House :public IPart
{
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
	{};
};
class Foundation:public IPart
{
	size_t workPercentage=0;//виконана робота 
public:
	void work()override
	{
		if (workPercentage!=100)
		{
		workPercentage += 25;
		}
	};
	size_t getProgress()override
	{};
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
	{};
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
	{};
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
	{};
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
	{};
};

class Builder:public IBuilder
{
public:
	void buildFoundation(House& house)override
	{
		
	};
	void buildWalls(House& house)override
	{
	
	};
	void buildWindow(House& house)override
	{
	
	};
	void buildDoor(House& house)override
	{
	
	};
	void buildRoof(House& house)override
	{
	
	};
};
