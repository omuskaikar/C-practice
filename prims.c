// Prim's Algorithm in C

#include<stdio.h>
#include<stdbool.h>

#define INF 9999999

// number of vertices in graph
#define V 5

// create a 2d array of size 5x5
//for adjacency matrix to represent graph
int G[V][V] = {
 {0    ,1    ,2    ,1000   ,1000   },
{1    ,0    ,1000   ,3    ,1    },
{2    ,0    ,0    ,6    ,5    },
{1000   ,3    ,6    ,0    ,4    },
{1000   ,1000   ,5    ,4    ,0    }};

int main() {
  int no_edge;
  int selected[V];
  memset(selected, false, sizeof(selected));
  no_edge = 0;
  selected[0] = true;

  int x;
  int y;
  printf("Edge : Weight\n");

  while (no_edge < V - 1) {
    int min = INF;
    x = 0;
    y = 0;

    for (int i = 0; i < V; i++) {
      if (selected[i]) {
        for (int j = 0; j < V; j++) {
          if (!selected[j] && G[i][j]) {
            if (min > G[i][j]) {
              min = G[i][j];
              x = i;
              y = j;
            }
          }
        }
      }
    }
    printf("%d - %d : %d\n", x+1, y+1, G[x][y]);
    selected[y] = true;
    no_edge++;
  }

  return 0;
}
