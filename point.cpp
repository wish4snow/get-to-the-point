#include <iostream>
#include <cmath>
#include "point.hpp"

Point::Point() {
	this->x_cord = 0;
	this->y_cord = 0;
}

Point::Point(double x_cord, double y_cord) {
	this->x_cord = x_cord;
	this->y_cord = y_cord;
}

double Point::get_x() {
	return this->x_cord;
}

double Point::get_y() {
	return this->y_cord;
}

double Point::operator-(Point p1) {
	return sqrt((this->x_cord - p1.get_x()) * (this->x_cord - p1.get_x()) + (this->y_cord - p1.get_y()) * (this->y_cord - p1.get_y()));
}

bool Point::operator==(Point p1) {
	if (this->x_cord == p1.get_x() && this->y_cord == p1.get_y()) {
		return true;
	}
	return false;
}

bool Point::operator!=(Point p1) {
	if (this->x_cord == p1.get_x() && this->y_cord == p1.get_y()) {
		return false;
	}
	return true;
}

Point Point::operator/(Point p1) {
	return Point((this->x_cord + p1.get_x()) / 2, (this->y_cord + p1.get_y()) / 2);
}