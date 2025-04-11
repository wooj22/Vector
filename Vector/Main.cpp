#include <iostream>
#include "Vector2.h"
using namespace std;

int main() {
	// 벡터 생성
	cout << "\n\n// 벡터 2개 생성 \n";
	Vector2 a(2, 2);
	Vector2 b(5, 4);

	a.Show();
	b.Show();

	// operator +
	cout << "\n\n// + 연산 \n";
	Vector2 c;
	c.Show();
	c = c + a;
	c.Show();

	// operator -
	cout << "\n\n// - 연산 \n";
	c.Show();
	c = c - a;
	c.Show();

	// operator * 
	cout << "\n\n// * 연산 \n";
	c.x = 1; c.y = 1;
	c.Show();
	c = c * 2.0f;
	c.Show();

	// Normalize
	cout << "\n\n// Normalize \n";
	a.Show();
	a.Normalize();
	a.Show();

	// Length
	cout << "\n\n// Length \n";
	a.Show();
	cout << a.Length() << endl;

	// LengthSquared
	cout << "\n\n// LengthSquared \n";
	a.Show();
	cout << a.LengthSquared() << endl;

	// Dot
	cout << "\n\n// Dot \n";
	a.Show();
	b.Show();
	cout << a.Dot(b) << endl;

	// Distance
	cout << "\n\n// Distance \n";
	a.Show();
	b.Show();
	cout << a.Distance(b) << endl;
}