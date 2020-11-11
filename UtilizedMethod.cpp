#include <iostream>

//클래스이름도 namesapce처럼 취급할 수있다 

using namespace std;

class Vector2 {
public:
	Vector2();
	Vector2(float x, float y);

	float Getx() const;
	float Gety() const;

	Vector2 operator+(const Vector2 rhs) const;
	Vector2 operator-(const Vector2 rhs) const;
	Vector2 operator*(const float rhs) const;
	Vector2 operator/(const float rhs) const;
	float operator*(const Vector2 rhs) const;
private:
	float x;
	float y;
};

Vector2 operator*(const float a, const Vector2 b)
{
	return  Vector2(a * b.Getx(), a * b.Gety());
}
int main()
{
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c2 = a * 1.6;
	Vector2 c3 = 1.6 * a;
	float c4 = a * b;

	cout << a.Getx() << ", " << a.Gety() << endl;
	cout << b.Getx() << ", " << b.Gety() << endl;
	cout << c2.Getx() << ", " << c2.Gety() << endl;
	cout << c3.Getx() << ", " << c3.Gety() << endl;
	cout << c4 << endl;
}

Vector2::Vector2() : x(0), y(0) {}  //vector2를 namespace처럼 사용 
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::Getx() const { return x; }
float Vector2::Gety() const { return y; }
Vector2 Vector2::operator+(const Vector2 rhs) const{
	return Vector2(x + rhs.x, y + rhs.y);
}
Vector2 Vector2::operator-(const Vector2 rhs) const {
	return Vector2(x - rhs.x, y - rhs.y);
}
Vector2 Vector2::operator*(const float rhs) const {
	return Vector2(x * rhs, y * rhs);
}
float Vector2::operator*(const Vector2 rhs) const {
	return x * rhs.x + y * rhs.y;
}
