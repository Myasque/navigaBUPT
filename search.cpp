#include<iostream>
#include<cstring>

#include"dot.h"


char ask_state_search();
dot find_dot(string input);

using namespace std;



void search(int place[3])
{
	char state,state_guide='��';
	string q_place;//ָҪ��ѯ�ĵص�
	cout << "\n\n***************************��ӭ�������ѯ���***************************\n\n" << endl;
	state = ask_state_search();
	//A.��ǰλ��B.ָ��λ��C.�˳���ѯ
	if (state == 'B')
	{
			cout << "������Ҫ��ѯ��λ�ã�" << endl;
			cin >> q_place;

			/*���ַ������ң�ȷ����ָ��λ������һ���㣬�������긳��place����*/

	}


		/*��place�������Ϣ�͸�������꣬ȷ���ܱߵĸ����������*/



	if (state == 'B')
	{
			
		cout << "���Ƿ���Ҫ�ӵ�ǰλ�õ������õص�?\n�����롰�ǡ��򡰷񡱣�" << endl;
		if (state_guide == '��')
		{

				/*���ü�����guideģ����д�õģ��������·���ĺ������������·�ߵĺ����ȣ�
				��ɴ˴��ĵ�������*/

		}
	}

		state = ask_state_search();
	

	cout << "\n\n***************************�����˳���ѯ���***************************\n\n" << endl;

}