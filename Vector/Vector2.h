#pragma once
class Vector2
{
private:
	float x, y;

public:
	// »ý¼ºÀÚ
	Vector2(float x = 0, float y = 0) : x(x), y(y) {};
	
	// operator
	Vector2 operator+ (const Vector2& vector2);
	Vector2 operator- (const Vector2& vector2);
	Vector2 operator* (const Vector2& vector2);

	// member function
	void Normalize();
	float Length();
	float LengthSquared();
	float Dot(const Vector2& vector2);
	float Distance(const Vector2& vector2);
};

