#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
using namespace std;
static const int MAX = 100000;
static const int INFTY = (1 << 29);

vector<int> G[MAX];
list<int> out;
bool Visit[MAX];
int N;
int indeg[MAX];

void bfs(int s)
{
	queue<int> q;
	q.push(s);
	Visit[s] = true;
	while(!q.empty())
	{
		int u = q.front(); q.pop();
		out.push_back(u);
		for(int i = 0; i < G[u].size(); i++)
		{
			int v = G[u][i];
			indeg[v]--;
			if (indeg[v] == 0 && !Visit[v])
			{
				Visit[v] = true;
				q.push(v);
			}
		}
	}
}

void tsort()
{
	for(int i = 0; i < N; i++)
	{
		indeg[i] = 0;
	}

	for(int u = 0; u < N; u++)
	{
		for(int i = 0; i < G[u].size(); i++)
		{
			int v = G[u][i];
			indeg[v]++;
		}
	}

	for(int u = 0; u < N; u++)
	{
		if (indeg[u] == 0 && !Visit[u]) bfs(u);
	}

	for(list <int>::iterator it = out.begin(); it != out.end(); it++)
	{
		cout << *it << endl;
	}
}

int main(void)
{
	cin >> N;
	for(int i = 0; i < N; i++) Visit[i] = false; 

	for(int i = 0; i < M; i++)
	{
		cin >> s >> t;
		G[s].push_back(t);
	}
	tsort();
	return 0;
}

