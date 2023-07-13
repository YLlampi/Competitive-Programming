#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

// Estructura para representar una conexión entre ubicaciones
struct Connection {
    int destination;
    int weight;
};

// Función para encontrar el camino más corto utilizando el algoritmo de Dijkstra
vector<int> findShortestPath(int start, int goal, const vector<vector<Connection>>& graph) {
    int n = graph.size();
    
    // Inicializar los arreglos de distancias y nodos visitados
    vector<int> distance(n, INF);
    vector<int> previous(n, -1);
    
    // La distancia desde el nodo inicial hasta él mismo es 0
    distance[start] = 0;
    
    // Cola de prioridad para seleccionar el nodo con la distancia mínima
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});
    
    while (!pq.empty()) {
        int current = pq.top().second;
        int currentDistance = pq.top().first;
        pq.pop();
        
        if (current == goal) {
            // Se ha encontrado el nodo objetivo, reconstruir el camino
            vector<int> path;
            while (current != -1) {
                path.push_back(current);
                current = previous[current];
            }
            reverse(path.begin(), path.end());
            return path;
        }
        
        if (currentDistance > distance[current]) {
            // Se encontró un camino más corto hacia el nodo actual, ignorar este nodo
            continue;
        }
        
        // Explorar todas las conexiones del nodo actual
        for (const Connection& conn : graph[current]) {
            int next = conn.destination;
            int weight = conn.weight;
            
            // Actualizar la distancia mínima hasta el nodo next
            if (currentDistance + weight < distance[next]) {
                distance[next] = currentDistance + weight;
                previous[next] = current;
                pq.push({distance[next], next});
            }
        }
    }
    
    // No se encontró un camino desde el nodo inicial hasta el nodo objetivo
    return vector<int>();
}

int main() {
    int n, m;
    cin >> n >> m;
    
    // Crear el grafo como una lista de adyacencia
    vector<vector<Connection>> graph(n);
    
    // Leer las conexiones entre ubicaciones
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        
        // Agregar la conexión en ambos sentidos
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    
    int start, goal;
    cin >> start >> goal;
    
    // Encontrar el camino más corto desde la ubicación inicial hasta la ubicación objetivo
    vector<int> shortestPath = findShortestPath(start, goal, graph);
    
    // Imprimir el resultado
    if (shortestPath.empty()) {
        cout << "No se encontró un camino desde la ubicación inicial hasta la ubicación objetivo" << endl;
    } else {
        for (int node : shortestPath) {
            cout << node << " ";
        }
        cout << endl;
    }
    
    return 0;
}