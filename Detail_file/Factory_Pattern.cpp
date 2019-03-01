#include<iostream>
using namespace std;


class Shape
{
public:
	virtual void draw() = 0;
	virtual ~Shape()
	{
		cout << "~Shape()" << endl;
	}
};
class Circle :public Shape
{
public:
	Circle()
	{
		cout << "Circle()" << endl;
	}
	void draw()
	{
		cout << "Circle is drawing" << endl;
	}
	~Circle()
	{
		cout << "~Circle()" << endl;
	}
};
class Square :public Shape
{
public:
	Square()
	{
		cout << "Square()" << endl;
	}
	void draw()
	{
		cout << "Square is drawing" << endl;
	}
	~Square()
	{
		cout << "~Square()" << endl;
	}
};
class Rectangle :public Shape
{
public:
	Rectangle()
	{
		cout << "Rectangle()" << endl;
	}
	void draw()
	{
		cout << "Rectangle is drawing" << endl;
	}
	~Rectangle()
	{
		cout << "~Recangle()" << endl;
	}
};
class ShapeFactory
{
public:
	static Shape * getShape(int type)
	{
		Shape * p;
		if (type == 1)
		{
			p = new Circle;
		}
		else if (type == 2)
		{
			p = new Square;
		}
		else if (type == 3)
		{
			p = new Rectangle;
		}
		else
			p = nullptr;
		return p;
	}
};

int main()
{
	int choice;
	

	Shape *ptr[2];
	for (int i = 0; i < 2; i++)
	{
		cout << "Enter 1 for Circle: " << endl;
		cout << "Enter 2 for Square: " << endl;
		cout << "Enter 3 for Rectangle: " << endl;
		cin >> choice;
		ptr[i] = ShapeFactory::getShape(choice);
		ptr[i]->draw();
	}
	
	for (int i = 0; i < 2; i++)
		delete ptr[i];
	return 0;

}
