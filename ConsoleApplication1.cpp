#include <iostream>
using namespace std;
//Первый класс
class vector2{
public:
	double x, y;
	public:
	vector2() { x = y = 0; }
public:
	vector2(double x, double y) {
		this->x = x;
		this->y = y;
	}	
	vector2 operator+ (vector2 op2) {
		vector2 temp;
		temp.x = x + op2.x;
		temp.y = y + op2.y;
		return temp;
	}

	double operator* (vector2 op2) {
		double temp;

		temp = (x * op2.x) + (y * op2.y);
		return temp;
	}

	vector2 operator* (double j) {
		vector2 temp;
		temp.x = (x * j);
		temp.y = (y * j);
		return temp;
	}

	vector2 operator- (vector2 op2) {
		vector2 temp;
		temp.x = x - op2.x;
		temp.y = y - op2.y;
		return temp;
	}

	vector2 operator/ (double p) {
		vector2 temp;
		temp.x = (x / p);
		temp.y = (y / p);
		return temp;
	}

	vector2 operator= (vector2 op2) {
		x = op2.x;
		y = op2.y;
		return *this;
	}

	void display() {
		cout << "{ " << x << " , " << " "<< y << "}" << endl;
	}

	vector2 cords1(vector2 op1, vector2 op2, double m, double k) {
		vector2 temp1;
		temp1.x = ((k * x) + (m * y));
		temp1.y = ((k * op2.x) + (m * op2.y));
		return temp1;
	}

};

//Второй класс 
class vector3 : public vector2 {
public:
	double z;
public:
	vector3() {
		x = y = z = 0;
	}
	vector3(double x, double y, double z) :vector2(x, y) {
		this->z = z;
	}

	vector3 operator+ (vector3 op2) {
		vector3 temp1;
		temp1.x = x + op2.x;
		temp1.y = y + op2.y;
		temp1.z = z + op2.z;
		return temp1;
	}



	vector3 operator* (vector3 op2) {
		vector3 temp1;
		temp1.x = (x * op2.x);
		temp1.y = (y * op2.y);
		temp1.z = (z * op2.z);
		return temp1;
	}

	double operator* (double p) {
		double temp1;
		temp1 = (x * p) + (y * p) + (z * p);
		return temp1;
	}

	double operator/ (double j) {
	double temp1;
		temp1 = (x / j) + (y / j) + (z / j);
		return temp1;
	}

	vector3 operator- (vector3 op2) {
		vector3 temp1;
		temp1.x = x - op2.x;
		temp1.y = y - op2.y;
		temp1.z = z - op2.z;
		return temp1;
	}

	vector3 operator= (vector3 op2) {
		x = op2.x;
		y = op2.y;
		z = op2.z;
		return *this;
	}
	
	void display() {
		cout << "{ " << x << " , " << y << " , " << z << " } " << endl;
	}

	vector3 cords(vector3 op1,vector3 op2, double k, double m) {
		vector3 temp1;
		temp1.x = ((k*op1.x)+ (m*y));
		temp1.y = ((k * op1.x) + (m * op2.y));
		temp1.z = ((k * op1.x) + (m * op2.z));
		return temp1;
	}
};


int main() {
	setlocale(0, "rus");
	vector2 a(10, 2), b(13, 23), c;
	c = a + b;
	c.display();
	c = a - b;
	c.display();
	c = a * 2;
	c.display();
	c = a / 2;
	c.display();
	cout << "Координаты" << endl;
	c.cords1(a, b, 10, 2);
	c = c.cords1(a, b, 2, 5);
	c.display();

	vector3 a1(10, 2, 3), b1(12, 23, 10), c1;
	c1 = a1 + b1;
	c1.display();

	double p = a1 * 2;
	cout << p << endl;
	c1 = a1 * b1;
	c1.display();
	cout << "Координаты" << endl;
	c1 = c1.cords(a1, b1, 2, 5);
	c1.display();

	//ВОТ
	vector3 a2(1,1,1), b2(0,1,2), c2;
	cout << "Координаты" << endl;
	c2 = c2.cords(a2, b2, 2, 3);
	c2.display();
	return 0;
}