#include <iostream>


using namespace std;
// EX03_1;
class Fan
{
public:
	int speed;
	bool on;
	double radius;
	Fan()
	{
		speed = 1;
		on = false;
		radius = 5;

	}

	void fanSpeed(int newFanSpeed)
	{
		speed = newFanSpeed;
	}

	void fanRadius(int newRadius)
	{
		radius = newRadius;
	}

	void turnOn()
	{
		on = true;
	}
	void turnOff()
	{
		on = false;
	}

	
};

int main()
{
	Fan fan1;
	Fan fan2;
	fan1.fanRadius(10);
	fan1.fanSpeed(3);
	fan1.turnOn();
	fan2.fanRadius(5);
	fan2.fanSpeed(2);
	fan2.turnOff();

	cout << "Fan 1 has a speed " << fan1.speed << " and a radius " << fan1.radius<< endl;
	cout << "Fan 2 has a speed " << fan2.speed << " and a radius " << fan2.radius << endl;


	return 0;
}