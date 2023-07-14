#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 4

// Function to show the adjacency matrix
void displayAdjacencyMatrix(int adjMatrix[][MAX_VERTICES], int vertices) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", adjMatrix[i][j]);
        }
        printf("\n");
    }
}

// Function to show the adjacency list
void displayAdjacencyList(int adjList[][MAX_VERTICES], int vertices) {
    printf("\nAdjacency List:\n");
    for (int i = 0; i < vertices; i++) {
        printf("%d: ", i);
        int hasNeighbor = 0;
        for (int j = 0; j < vertices; j++) {
            if (adjList[i][j] == 1) {
                if (hasNeighbor == 1) {
                    printf("->");
                }
                printf("%d", j);
                hasNeighbor = 1;
            }
        }
        printf("->NULL\n");
    }
}

int main() {
    // Create the adjacency matrix
    int adjMatrix[MAX_VERTICES][MAX_VERTICES] = {
        {0, 1, 1, 0},
        {0, 0, 1, 0},
        {1, 0, 0, 0},
        {0, 0, 1, 0}
    };

    // Create the adjacency list
    int adjList[MAX_VERTICES][MAX_VERTICES] = {0};

    // Convert adjacency matrix to adjacency list
    for (int i = 0; i < MAX_VERTICES; i++) {
        for (int j = 0; j < MAX_VERTICES; j++) {
            if (adjMatrix[i][j] == 1) {
                adjList[i][j] = 1;
            }
        }
    }

    // Show the adjacency matrix
    displayAdjacencyMatrix(adjMatrix, MAX_VERTICES);

    // Show the adjacency list
    displayAdjacencyList(adjList, MAX_VERTICES);

    return 0;
}