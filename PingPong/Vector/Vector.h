#pragma once


class Vector {
private:
	double X, Y;

public:
	Vector(double X, double Y);

	Vector operator+ (Vector vec);
	Vector operator- (Vector vec);

	Vector operator * (int num);
};
