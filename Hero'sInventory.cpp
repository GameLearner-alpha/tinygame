//hero's inventory
//demonstrates arrays

#include<iostreanm>
#include<string>

int main()
{
	const int MAX_ITEMS = 10;	//item:项目，条款，商品。这里MAX_ITEMS是设置背包容量
	string inventory[MAX_ITEMS];	//inventory：目录，存货，库存，理解为物品栏
	int numItems = 0;
	inventory[numItems++] = "sword";	//存入物品，并计数，sword：剑，armor：盔甲，shield：盾牌
	inventory[numItems++] = "armor";
	inventory[numItems++] = "shield";
	cout << "Your items:\n";
	for (int i = 0; i < numItems; i++)	//输出hero有的物品（初始物品）
	{
		cout << inventory[i] << endl;
	}
	cout <<  "\nYou trade your sword for a battle axe.";	//你用剑换了一把战斧。
	inventory[0] = "battle axe";
	cout << "\nYour items:\n";
	for (int i = 0; i < numItems; i++)	//再次输出hero拥有的物品
	{
		cout << inventory[i] << endl;
	}
	cout << "\nThe item name '" << inventory[0] << "' has ";
	cout << inventory[0].size() << " letters in it.\n";
	cout << "\nYou find a healing potion.";
	if (numItems < MAX_ITEMS)	//判断持有物品数量是否超过背包容量
	{
		inventory[numItems++] = "healing potion";
	}
	else
	{
		cout << "You have too many items and can't carry anther.";	//输出超出背包容量的结果
	}
	cout << "\nYour items:\n";
	for (int i = 0 ; i < numItems; i++)	//再次输出hero拥有的物品
	{
		cout << inventory[i] << endl;
	}
}
