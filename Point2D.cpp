#include <iostream>
#include <cmath>
#include <climits>
#include <float.h>
#include <cstring>

using namespace std;

class Point2D {
	private:
		double x, y;
	public:
		// get distance between two points
		double get_distance(const Point2D & p2) const {
			return pow(pow(x - p2.x, 2) + pow(y - p2.y, 2), 0.5);		
		}
	private:
		bool set_x(double const  new_x) {
			if(DBL_MAX >= new_x && new_x >= DBL_MIN) {
				x = new_x;
				return true;
			} else {
				return false;
			}
		}
	
		bool set_y(double const new_y) {
			if(DBL_MAX >= new_y && new_y >= DBL_MIN) {
				y = new_y;
				return true;
			} else {
				return false;
			}
		}
	public:
		bool set_values(double const  new_x, double const new_y) {
			return set_y(new_y) && set_x(new_x);
		}
		void p_self() const {
			cout << "(" << x << ", " << y << ")\n";
		}
};
/*
bool Point2D::set_x(double const new_x) {
	if(DBL_MAX >= new_x && new_x >= DBL_MIN) {
		x = new_x;
		return true;
	} else {
		return false;
	}
}

bool Point2D::set_y(double const new_y) {
	if(DBL_MAX >= new_y && new_y >= DBL_MIN) {
		y = new_y;
		return true;
	} else {
		return false;
	}
}
*/
int main() {
	double x, y;
	char p1, p2, p3;
	Point2D point;
	cin >> p1 >> x >> p2 >> y >> p3;
	point.set_values(x, y);
	point.p_self();
}
