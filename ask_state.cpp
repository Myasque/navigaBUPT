#include<iostream>

using namespace std;
/*����ļ��ǰ�main��������ѯ�����͵���������ѯ����һ�������Ĺ��ܵ�������ˡ�*/

char ask_state()
{
	char state;
	cout << "��ѡ����������Ҫ���еĲ�����\n\nA.�ܱ߲�ѯ\t\tB.·�ߵ���\t\tC.�˳�����" << endl;
	cin >> state;
	while (state != 'A' &&state != 'B' && state != 'C')
	{
		cout << "�������벻�Ϸ������������롣\n" <<endl;
		cout << "��ѡ����������Ҫ���еĲ�����\n\nA.�ܱ߲�ѯ\t\tB.·�ߵ���\t\tC.�˳�����" << endl;
		cin >> state;
	}

	return state;

}

char ask_state_search()
{
	char state;
	cout << "��ѡ����Ҫ��ѯ��λ�ã�\nA.��ǰλ��\t\tB.ָ��λ��\t\t\n";
	cin >> state;
	while (state != 'A' && state != 'B')
	{
		cout << "��������Ƿ������������롣\n" << endl;
		cout << "��ѡ����Ҫ��ѯ��λ�ã�\nA.��ǰλ��\t\tB.ָ��λ��\t\t\n";
		cin >> state;
	}
	return state;
}

char ask_state_campus()
{
	char state;
	cout << "��ѡ����Ҫ���еĲ�����\nA.ɳ��У���ڲ�����\t\tB.������У���ڲ�����\tC.��У������\t\t" << endl;
	while (state != 'A' && state != 'B'&&state!='C')
	{
		cout << "��������Ƿ������������롣\n" << endl;
		cout << "��ѡ����Ҫ���еĲ�����\nA.ɳ��У���ڲ�����\t\tB.������У���ڲ�����\tC.��У������\t\t" << endl;
		cin >> state;
	}
	return state;
}




char ask_state_inguide()
{
	char state;
	cout << "��ѡ����Ҫ���еĲ�����\nA.����䵼��\t\tB.ָ��;���ص㵼��\t\tC.�˳�����\n" << endl;
	cin >> state;
	while (state != 'A' && state != 'B')
	{
		cout << "��������Ƿ������������롣\n" << endl;
		cout << "��ѡ����Ҫ���еĲ�����\nA.����䵼��\t\tB.ָ��;���ص㵼��\t\tC.�˳�����\n" << endl;
		cin >> state;
	}
	return state;
}










