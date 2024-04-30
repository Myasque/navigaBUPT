#include<iostream>
#include<cmath>
#include"dot.h"

using namespace std;

int dot::length(int x2, int y2)
{
	return sqrt(pow(x - x2, 2) + pow(y - y2, 2));//两点间距离公式
}