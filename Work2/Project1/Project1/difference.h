#pragma once
class diff {
	int x = 0;
	int y = 0;
	int z = 0;
public:
	diff(int x_, int y_) : x(x_), y(y_) {
		z = x - y;
	}
	int difference();
};