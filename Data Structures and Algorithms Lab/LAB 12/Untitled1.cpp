 #include <stdio.h>  
 #include <limits.h>
int minDistance(int dist[], bool sptSet[]) 
{  
    int min = INT_MAX, min_index; 
	 for (int v = 0; v < 6; v++) 
        if (sptSet[v] == false && dist[v] <= min) 
            min = dist[v], min_index = v; 
  return min_index; 
} 
void printSolution(int dist[]) 
{ 
    printf("Vertex \t\t Distance from Source\n"); 
    for (int i = 0; i < 6; i++) 
        printf("%d \t\t %d\n", i, dist[i]); 
} 
void dijkstra(int graph[6][6], int src) 
{ 
    int dist[6]; 
	 bool sptSet[6]; 
    for (int i = 0; i < 6; i++) 
        dist[i] = INT_MAX, sptSet[i] = false; 
    dist[src] = 0; 
    for (int count = 0; count < 6 - 1; count++)
	 { 
        int u = minDistance(dist, sptSet); 
        sptSet[u] = true;  
        for (int v = 0; v < 6; v++) 
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX 
                && dist[u] + graph[u][v] < dist[v]) 
                dist[v] = dist[u] + graph[u][v]; 
    } 
    printSolution(dist); 
} 
int main() 
{ 
    int graph[6][6] = { { 0,73,22,0,21,0 },
						{ 73,0,0,18,0,0 },
						{ 22,0,0,11,44,44 },
						{ 0,18,11,0,0,32 },
						{ 21,0,44,0,0,45 },
						{0,0,44,32,45,0} };
  
    dijkstra(graph, 0); 
  
    return 0; 
} 
