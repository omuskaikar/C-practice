#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#define V 5
#define NO 100000
int minKey(int key[], bool mstSet[])
{
	int min = INT_MAX, min_index;
	for (int v = 0; v < V; v++)
		if (mstSet[v] == false && key[v] < min)
			min = key[v], min_index = v;
	return min_index;
}

int printMST(int parent[], int graph[V][V])
{
	printf("Edge \tWeight\n");
	for (int i = 1; i < V; i++)
		printf("%d - %d \t%d \n", parent[i]+1, i+1,
			graph[i][parent[i]]);
}

void primMST(int graph[V][V])
{
	int parent[V];
	int key[V];
	bool mstSet[V];
	for (int i = 0; i < V; i++)
		key[i] = INT_MAX, mstSet[i] = false;
	key[0] = 0;
	parent[0] = -1;
	for (int count = 0; count < V - 1; count++)
    {
		int i = minKey(key, mstSet);
		mstSet[i] = true;
		for (int v = 0; v < V; v++)
        {
			if (graph[i][v] && mstSet[v] == false && graph[i][v] < key[v])
                {
                    parent[v] = i, key[v] = graph[i][v];
                }
        }
	}

	printMST(parent, graph);
}
int main()
{
	int graph[V][V] = {
{0    ,1    ,2    ,NO   ,NO   },
{1    ,0    ,NO   ,3    ,NO    },
{2    ,0    ,0    ,6    ,5    },
{NO   ,3    ,6    ,0    ,4    },
{NO   ,NO   ,5    ,4    ,0    }};
primMST(graph);
return 0;
}
