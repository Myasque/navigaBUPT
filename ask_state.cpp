#include<iostream>

using namespace std;
/*这个文件是把main函数、查询函数和导航函数里询问下一步操作的功能单拎出来了。*/

char ask_state()
{
	char state;
	cout << "请选择您接下来要进行的操作：\n\nA.周边查询\t\tB.路线导航\t\tC.退出程序" << endl;
	cin >> state;
	while (state != 'A' &&state != 'B' && state != 'C')
	{
		cout << "您的输入不合法，请重新输入。\n" <<endl;
		cout << "请选择您接下来要进行的操作：\n\nA.周边查询\t\tB.路线导航\t\tC.退出程序" << endl;
		cin >> state;
	}

	return state;

}

char ask_state_search()
{
	char state;
	cout << "请选择您要查询的位置：\nA.当前位置\t\tB.指定位置\t\t\n";
	cin >> state;
	while (state != 'A' && state != 'B')
	{
		cout << "您的输入非法，请重新输入。\n" << endl;
		cout << "请选择您要查询的位置：\nA.当前位置\t\tB.指定位置\t\t\n";
		cin >> state;
	}
	return state;
}

char ask_state_campus()
{
	char state;
	cout << "请选择您要进行的操作：\nA.沙河校区内部导航\t\tB.西土城校区内部导航\tC.跨校区导航\t\t" << endl;
	while (state != 'A' && state != 'B'&&state!='C')
	{
		cout << "您的输入非法，请重新输入。\n" << endl;
		cout << "请选择您要进行的操作：\nA.沙河校区内部导航\t\tB.西土城校区内部导航\tC.跨校区导航\t\t" << endl;
		cin >> state;
	}
	return state;
}




char ask_state_inguide()
{
	char state;
	cout << "请选择您要进行的操作：\nA.两点间导航\t\tB.指定途经地点导航\t\tC.退出导航\n" << endl;
	cin >> state;
	while (state != 'A' && state != 'B')
	{
		cout << "您的输入非法，请重新输入。\n" << endl;
		cout << "请选择您要进行的操作：\nA.两点间导航\t\tB.指定途经地点导航\t\tC.退出导航\n" << endl;
		cin >> state;
	}
	return state;
}










