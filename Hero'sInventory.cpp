//hero's inventory
//demonstrates arrays

#include"game.h"

void HI_Game()
{
	const int MAX_ITEMS = 10;	//item:��Ŀ�������Ʒ������MAX_ITEMS�����ñ�������
	string inventory[MAX_ITEMS];	//inventory��Ŀ¼���������棬���Ϊ��Ʒ��
	int numItems = 0;
	inventory[numItems++] = "sword";	//������Ʒ����������sword������armor�����ף�shield������
	inventory[numItems++] = "armor";
	inventory[numItems++] = "shield";
	cout << "Your items:\n";
	for (int i = 0; i < numItems; i++)	//���hero�е���Ʒ����ʼ��Ʒ��
	{
		cout << inventory[i] << endl;
	}
	cout <<  "\nYou trade your sword for a battle axe.";	//���ý�����һ��ս����
	inventory[0] = "battle axe";
	cout << "\nYour items:\n";
	for (int i = 0; i < numItems; i++)	//�ٴ����heroӵ�е���Ʒ
	{
		cout << inventory[i] << endl;
	}
	cout << "\nThe item name '" << inventory[0] << "' has ";
	cout << inventory[0].size() << " letters in it.\n";
	cout << "\nYou find a healing potion.";
	if (numItems < MAX_ITEMS)	//�жϳ�����Ʒ�����Ƿ񳬹���������
	{
		inventory[numItems++] = "healing potion";
	}
	else
	{
		cout << "You have too many items and can't carry anther.";	//����������������Ľ��
	}
	cout << "\nYour items:\n";
	for (int i = 0 ; i < numItems; i++)	//�ٴ����heroӵ�е���Ʒ
	{
		cout << inventory[i] << endl;
	}
}