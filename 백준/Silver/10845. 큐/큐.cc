#include <iostream>
#include <queue>
#include <string>
using namespace std;



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,x;
	string s;
	queue<int>q;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s == "push")
		{
			cin >> x;
			q.push(x);
		}
		else if (s == "pop")
		{
			if (q.empty() == true)
			{
				cout << -1<<"\n";
			}
			else
			{
				cout << q.front()<<"\n";
				q.pop();
			}
		}
		else if (s == "size")
		{
			cout << q.size()<<"\n";
		}
		else if (s == "empty")
		{
			if (q.empty() == true)
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else if (s == "front")
		{
			if (q.empty() == true)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << q.front()<<"\n";
			}
		}
		else if (s == "back")
		{
			if (q.empty() == true)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << q.back()<<"\n";
			}
		}
	}
	return 0;
}