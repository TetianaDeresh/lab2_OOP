#include <iostream>

using namespace std;

class Rectangle
{
private:
	int* height;
	int* width;

public:

	Rectangle() {
		width = new int;
		height = new int;
		*width = *height = 0;
	}
	Rectangle(int w, int h) {
		width = new int;
		height = new int;
		*width = w;
		*height = h;
	}
	Rectangle(const Rectangle& obj) {
		width = new int;
		height = new int;
		*this->width = *obj.width;
		*this->height = *obj.height;
	}

	~Rectangle() {
		delete height;
		delete width;
	}

	double getWidth() { return *width; }

	double getHeight() { return *height; }


	void setWidth(int w) {
		while (w <= 0) {
			cout << "This parameter is not correct!Enter again, please" << endl;
			cin >> w;
		}
		*width = w;

	}

	void setHeight(int h) {
		if (h <= 0) {
			cout << "This parameter is not correct!Enter again, please" << endl;
			cin >> h;
		}
		*height = h;
	}

	void Print() 
	{
		cout << "Height: " << *height << "\nWidth:" << *width << endl;
	}
		double Area() 
		{
			double a = *width * *height;
			return a;
		}

		double Perimeter() 
		{
			double p = 2 * (*width + *height);
			return p;
		}


	};


	int main()

	{
		int *width, *height;
		width = new int;
		height = new int;
		Rectangle obj;
		cout << "Enter the width: ";
		cin >> *width;
		obj.setWidth(*width);
		cout << "Enter the height: ";
		cin >> *height;
		obj.setHeight(*height);
		obj.Print();
		
		cout << "Area: " << obj.Area() << endl;
		cout << "Perimeter: " << obj.Perimeter() << endl;

		Rectangle* obj1 = new Rectangle;
		cout << "\n\nEnter the width: ";
		cin >> *width;
		obj1->setWidth(*width);
		cout << "Enter the height: ";
		cin >> *height;
		obj1->setHeight(*height);
		obj1->Print();
		delete obj1;
		return 0;
	}

