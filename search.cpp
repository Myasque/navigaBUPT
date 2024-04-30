#include<iostream>
#include<cstring>

#include"dot.h"


char ask_state_search();
dot find_dot(string input);

using namespace std;



void search(int place[3])
{
	char state,state_guide='否';
	string q_place;//指要查询的地点
	cout << "\n\n***************************欢迎您进入查询板块***************************\n\n" << endl;
	state = ask_state_search();
	//A.当前位置B.指定位置C.退出查询
	if (state == 'B')
	{
			cout << "请输入要查询的位置：" << endl;
			cin >> q_place;

			/*用字符串查找？确定该指定位置是哪一个点，将其坐标赋给place数组*/

	}


		/*用place数组的信息和各点的坐标，确定周边的各建筑，输出*/



	if (state == 'B')
	{
			
		cout << "您是否想要从当前位置导航到该地点?\n请输入“是”或“否”：" << endl;
		if (state_guide == '是')
		{

				/*调用几个在guide模块里写好的，计算最短路径的函数、输出导航路线的函数等，
				完成此处的导航功能*/

		}
	}

		state = ask_state_search();
	

	cout << "\n\n***************************您已退出查询板块***************************\n\n" << endl;

}