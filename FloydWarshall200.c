#include <stdio.h>

#define V 200 // Number of vertices in the graph
#define INF 999999 // A large number to represent infinity

// Function to find the shortest path between every pair of vertices using Floyd-Marshall algorithm
void floydWarshall(int graph[V][V])
{
    int dist[V][V], i, j, k;

    // Initialize the distance matrix with the values of the input graph
    for (i = 0; i < V; i++) {
        for (j = 0; j < V; j++) {
            dist[i][j] = graph[i][j];
        }
    }

    // Calculate the shortest path between every pair of vertices
    for (k = 0; k < V; k++) {
        for (i = 0; i < V; i++) {
            for (j = 0; j < V; j++) {
                if (dist[i][k] != INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

}

// Main function to test the Floyd-Marshall algorithm
int main()
{
    int graph[V][V];

    // Generate a random graph with random edge weights
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (i == j) {
                graph[i][j] = 0;
            } else {
                graph[i][j] = rand() % 100 + 1; // Assign a random weight between 1 and 100 to each edge
            }
        }
    }

    floydWarshall(graph);

    return 0;
}