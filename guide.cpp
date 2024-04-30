#include<iostream>
#include<cmath>
#include<cstring>
#include<fstream>

#include"dot.h"
#include"edge.h"

using namespace std;

char ask_state_campus();
char ask_state_inguide();
dot find_dot(string input);//判断用户输入的字符串指的是地图中的哪一个点
int* guide_shahe();//沙河的导航
int* guide_benbu();//本部导航
int* guide_cross();//跨校区导航



int* guide()
{
	string start;
	string end;
	int* place[3] = { 0,0,0 };
	//int passing_num=0;//途经的地点数目
	char state;
	cout << "\n\n***************************欢迎您进入导航板块***************************\n\n" << endl;
	state = ask_state_campus();
	
	
}

int* guide_shahe()
{
	string start;
	string end;

	char state='C';
	ask_state_inguide();
	while (state != 'C')
	{
		if (state == 'A')//两点间导航
		{
			cout << "请输入您的出发地点名称：" << endl;
			cin >> start;
			cout << "请输入您的目的地名称：" << endl;
			cin >> end;
		}

	}
}




