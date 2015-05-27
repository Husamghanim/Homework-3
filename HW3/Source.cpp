#include <iostream>
#include <string>

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

//Ex03_2

class QuadraticEquation
{
public:
	double a, b, c, discriminant, r1,r2;
	QuadraticEquation()
	{
		a = 0;
		b = 0;
		c = 0;
		r1 = 0;
		r2 = 0;
		discriminant = 0;
	}

	void getA(double newA)
	{
		a = newA;
	}

	void getB(double newB)
	{
		b = newB;
	}

	void getC(double newC)
	{
		c = newC;
		getDiscriminant(a, b, c);
		
	}

	void getDiscriminant(double A, double B, double C)
	{
		discriminant = (B*B) - (4 * A*C);
		getRoot1(discriminant, A, B);
		getRoot2(discriminant, A, B);

	}

	void getRoot1(double disc,double a,double b )
	{
		if (disc >= 0)
			r1 = (-b + sqrt(discriminant)) / (2 * a);
		else
		{
			r1 = 0;
			
		}
	}

	void getRoot2(double disc, double a, double b)
	{
		if (disc >= 0)
			r2 = (-b - sqrt(discriminant)) / (2 * a);
		else
			r2 = 0;

	}
};

	// EX03_3

class EvenNumber
{
public:
	int value;
	EvenNumber()
	{
		value = 0;
	}

	EvenNumber(int newValue)
	{
		value = newValue;
		
	}

	int getValue()
	{
		return value;
	}

	int getNext()
	{
		return value + 2;
	}

	int getPrevious()
	{
		return value - 2;
	}
};

//Ex03_4

string sort(string& s)
{
	char temp;
	string newS = s;
	for (int i = 0; i < newS.length() - 1; i++)
	{
		for (int j = i; j < newS.length() - 1; j++)
		{
			if (newS.at(i) > newS.at(j))
			{
				temp = newS.at(i);
				newS.at(i) = newS.at(j);
				newS.at(j) = temp;
			}
		}
	}

	return newS;
}

	//Ex03_5
class MyInteger
{
public:
	int value;
	MyInteger(int val)
	{
		value = val;
	}

	int get() const
	{
		return value;
	}

	bool isEven() const
	{
		if (value % 2 == 0)
			return true;
		else
			return false;
	}

	bool isOdd() const
	{
		if (value % 2 != 0)
			return true;
		else
			return false;
	}

	bool isPrime() const
	{
		int count = 0;
		for (int i = 2; i < value; i++)
		{
			if (value == 1 || value == 2 || value%i == 0)
				count++;
		}
		if (count == 2)
			return true;
		else
			return false;
	}

	static bool isEven(int val)			//I don't understand what 'static' does 
	{
		if (val % 2 == 0)
			return true;
		else
			return false;
	}


	static bool isOdd(int val)
	{
		if (val % 2 != 0)
			return true;
		else
			return false;
	}
	
	static bool isPrime(int val)
	{
		int count = 0;
		for (int i = 2; i < val; i++)
		{
			if (val == 1 || val == 2 || val%i == 0)
				count++;
		}
		if (count == 2)
			return true;
		else
			return false;
	}

	static bool isEven(const MyInteger& val)			//I don't understand those 
	{

	}

	static bool isOdd(const MyInteger& val)
	{

	}

	static bool isPrime(const MyInteger& val)
	{
	
	}


};
int main()
{
	//Ex03_1

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

	//Ex03_2

	QuadraticEquation student;
	double a, b, c,d;
	cout << "Please enter the value for a:";
	cin >> a;
	student.getA(a);

	cout << "Please enter the value for b:";
	cin >> b;
	student.getB(b);

	cout << "Please enter the value for c:";
	cin >> c;
	student.getC(c);

	if (student.discriminant < 0)
		cout << "There are no real roots. R1 = R2 = " << student.r1 << endl;
	else
	{
		cout << "The first root is " << student.r1 << endl;
		cout << "The second root is " << student.r2 << endl;
	}
	
	//Ex03_3
	EvenNumber even;
	int val;
	cout << "please enter an even number: ";
	cin >> val;
	
	cout << "The previous value is " << EvenNumber(val).getPrevious() << " , the current value is " << EvenNumber(val).getValue() << " and the next value is " << EvenNumber(val).getNext() << endl;

	//Ex03_4
	string s;
	string newS;
	cout << "Please enter the streing you want sorted: ";
	cin >> s;
	cout << "The sorted string of '" << s << "' is " << sort(s) << endl;
	
	
	return 0;
}