class Point {
	
	private:
		double x_cord;
		double y_cord;
		
		double get_x();
		double get_y();

	public:
		Point();
		Point(double x_cord, double y_cord);

		double operator-(Point p1);
		bool operator==(Point p1);
		bool operator!=(Point p1);
		Point operator/(Point p1);

};