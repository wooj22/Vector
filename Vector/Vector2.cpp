#include "Vector2.h"
#include <cmath>

Vector2 Vector2::operator+ (const Vector2& vector2) {
	Vector2 result;

	result.x = this->x + vector2.x;
	result.y = this->y + vector2.y;

	return result;
}

Vector2 Vector2::operator- (const Vector2& vector2) {
	Vector2 result;

	result.x = this->x - vector2.x;
	result.y = this->y - vector2.y;

	return result;
}

Vector2 Vector2::operator* (const Vector2& vector2) {
	Vector2 result;

	result.x = this->x * vector2.x;
	result.y = this->y * vector2.y;

	return result;
}

// �ڽ��� ���� ���ͷ� ��ȯ
void Vector2::Normalize() {
	//float dist = sqrt(this->x * this->x + this->y * this->y);
	//this->x = this->x / dist;
	//this->y = this->y / dist;
	// �Ǽ� ���� ���ͼ�... �Ʒ� ó�� �ص� �Ǵ°ǰ���...?

	if (this->x > 0) x = 1;
	if (this->y > 0) y = 1;
}

// �ڽ��� ���� ��ȯ
float Vector2::Length() {
	return sqrt(this->x * this->x + this->y * this->y);
}

// �ڽ��� ���� ��ȯ (��Ʈ ���� ������ ����)
float Vector2::LengthSquared() {
	return this->x * this->x + this->y * this->y;
}

// �ڽŰ� vector2�� ���� ��ȯ
float Vector2::Dot(const Vector2& vector2) {
	return this->x * vector2.x + this->y * vector2.y;
}

// �ڽŰ� vector2�� �Ÿ� ��ȯ
float Vector2::Distance(const Vector2& vector2) {
	float distX = this->x - vector2.x;
	float distY = this->y - vector2.y;

	float dist = sqrt(distX * distX + distY * distY);
	return dist;
}