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
	cout << "\n\n***************************��ӭ��ʹ�õ���ϵͳ***************************\n\n" << endl;

	char state= ask_state();
	//A.�ܱ߲�ѯ B.·�ߵ��� C.�˳�����
	int place[3] = { 1,0,0 };
	//���������ִ���ǰλ����Ϣ����һ����1����ɳ��У����0���������ǣ������������ִ������ꡣ
	while (state != 'C')
	{
		if (state == 'A') search(place);
		else strcpy_s(place, guide());

		
			

		state = ask_state();
	}

	cout << "\n\n***************************��л��ʹ�õ���ϵͳ***************************\n\n" << endl;
	










	return 0;
}
