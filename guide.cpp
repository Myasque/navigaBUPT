#include<iostream>
#include<cmath>
#include<cstring>
#include<fstream>

#include"dot.h"
#include"edge.h"

using namespace std;

char ask_state_campus();
char ask_state_inguide();
dot find_dot(string input);//�ж��û�������ַ���ָ���ǵ�ͼ�е���һ����
int* guide_shahe();//ɳ�ӵĵ���
int* guide_benbu();//��������
int* guide_cross();//��У������



int* guide()
{
	string start;
	string end;
	int* place[3] = { 0,0,0 };
	//int passing_num=0;//;���ĵص���Ŀ
	char state;
	cout << "\n\n***************************��ӭ�����뵼�����***************************\n\n" << endl;
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
		if (state == 'A')//����䵼��
		{
			cout << "���������ĳ����ص����ƣ�" << endl;
			cin >> start;
			cout << "����������Ŀ�ĵ����ƣ�" << endl;
			cin >> end;
		}

	}
}




