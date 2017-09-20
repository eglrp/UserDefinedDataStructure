#include <iostream>
#include <cstdlib>
#include <set>
#include <vector>
#include "Point.h"

int main()
{
	// test vector
	std::vector<Point> vecPoints;
	Point p;
	std::cin >> p;
	vecPoints.push_back(p);
	if (std::find(vecPoints.begin(), vecPoints.end(), p) != vecPoints.end()) {
		std::cout << "Find success" << std::endl;
	}
	// test set
	std::set<Point> setPoints;
	// must need operator< override
	setPoints.insert(Point(1, 1));
	setPoints.insert(Point(1, 1));
	for (auto it = setPoints.begin(); it != setPoints.end(); ++it)
		std::cout << *it;
	system("pause");
	return 0;
}