#pragma once
class sum {
	int x = 0;
	int y = 0;
	int z = 0;
public:
	//���������
	//����������� ��������� ���������� ������
	//��������� x(x_), y(y_)
	sum(int x_, int y_) : x=x_, y=y_ {
		z = x + y;
	}
	int summa();
};