#include<iostream>
#include<cstring>
#include<string.h>
#include"dot.h"
#include"edge.h"

using namespace std;


char ask_state();
void search(int place[3]);
int* guide();

int main()
{
	cout << "\n\n***************************欢迎您使用导航系统***************************\n\n" << endl;

	char state= ask_state();
	//A.周边查询 B.路线导航 C.退出程序
	int place[3] = { 1,0,0 };
	//用三个数字代表当前位置信息，第一个：1代表沙河校区，0代表西土城；二、三个数字代表坐标。
	while (state != 'C')
	{
		if (state == 'A') search(place);
		else strcpy_s(place, guide());

		
			

		state = ask_state();
	}

	cout << "\n\n***************************感谢您使用导航系统***************************\n\n" << endl;
	










	return 0;
}
