#include<iostream>
#include<string>
using namespace std;
class thing//定义thing类
{
public:
	float worth_hearvy;
	int hearvy;
	float worth;
	thing()
	{	
		cin >> name >> worth >> hearvy;
		worth_hearvy = worth / hearvy;
	}
	void display()
	{
		cout <<"name: "<< name << " "<<"worth: " << worth << " "<<"hearvy: " << hearvy << " "<<"worth/hearvy: " << worth_hearvy <<" "<< endl;
	}

protected:
	string name;
};
class pack
{
public:
	pack()
	{
		cout << "packback's max heavry： ";
		cin >> max_hearvy;
	}
	void display()
	{
		cout << "packback's hearvy: " << pack_hearvy <<endl<< "packback's worth: " << pack_worth << endl;
	}
	int max_hearvy;
	int pack_hearvy=0;
	float pack_worth=0;
};
void input(thing t[], pack back, int n)
{
	for (int i = 0; i < n; ++i)
	{
		if (back.pack_hearvy + t[i].hearvy <= back.max_hearvy)
		{
			back.pack_hearvy += t[i].hearvy;
			back.pack_worth += t[i].worth;
		}
	}
	back.display();
	cout << endl;
}
void bort(thing t[],pack back,int n)
{	
	int i = 0;
	for ( i; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (t[i].worth_hearvy < t[j].worth_hearvy)
		{
			const thing temp=t[i];
			t[i] = t[j];
			t[j] = temp;
		}
		}
	}
	for ( i = 0; i < n; ++i)
	{
		t[i].display();
	}
	cout << endl;
	input(t, back, n);
}
int main()
{
	int n;
	cout << "The number of thing ：";
	cin >> n;
	cout << "name:	" << "worth:	" << "hearvy:	" << endl;
	thing* t = new thing[n];
	for (int i = 0; i < n; ++i)
	{
		t[i];
	}
	cout << endl;
	pack back;
	for (int i = 0; i < n; ++i)
	{
		t[i].display();
	}
	cout << endl;
	bort(t, back, n);
	return 0;
}