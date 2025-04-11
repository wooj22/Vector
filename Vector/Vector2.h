#pragma once
#include <iostream>
using namespace std;

class Vector2
{
public:
	float x, y;
	Vector2(float inputX = 0, float inputY = 0) : x(inputX), y(inputY) {};
	
	// operator
	Vector2 operator+ (const Vector2& vector2);
	Vector2 operator- (const Vector2& vector2);
	Vector2 operator* (float n);

	// member function
	void Show() { cout << "x : " << x << ", y : " << y << endl; }
	void Normalize();
	float Length();
	float LengthSquared();
	float Dot(const Vector2& vector2);
	float Distance(const Vector2& vector2);
};

