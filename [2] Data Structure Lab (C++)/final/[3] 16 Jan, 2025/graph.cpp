#include <iostream>
using namespace std;

void addEdge(int adj[4][4], int i, int j)
{
    adj[i][j] = 1;
    adj[j][i] = 1;
}

int main()
{
    int adj[4][4] = { 0 };

    // 0   3
    // | \ |
    // 1 - 2

    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 0, 2);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
