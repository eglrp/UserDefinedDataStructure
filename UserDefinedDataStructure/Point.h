#pragma once
#include <iostream>

// User defined data structure
struct Point
{
	// Default constructor
	Point() : x(0), y(0) {}
	// Constructor
	Point(int x, int y) : x(x), y(y) {}
	// Operator< override
	bool operator<(const Point& rhs) const {
		return (x + y) < (rhs.x + rhs.y);
	}
	// Operator== override
	bool operator==(const Point& rhs) {
		return x == rhs.x && y == rhs.y;
	}
	// Operator<< override
	friend std::ostream& operator<<(std::ostream& os, const Point& pt) {
		os << "(" << pt.x << ", " << pt.y << ")" << std::endl;
		return os;
	}
	// Operator>> override
	friend std::istream& operator>>(std::istream& is, Point& pt) {
		is >> pt.x >> pt.y;
		return is;
	}
	// Member
	int x;
	int y;
};
