import heapq
from typing import List

INF = float('inf')

# Estructura para representar una conexión entre ubicaciones
class Connection:
    def __init__(self, destination: int, weight: int):
        self.destination = destination
        self.weight = weight

# Función para encontrar el camino más corto utilizando el algoritmo de Dijkstra
def findShortestPath(start: int, goal: int, graph: List[List[Connection]]) -> List[int]:
    n = len(graph)

    # Inicializar los arreglos de distancias y nodos visitados
    distance = [INF] * n
    previous = [-1] * n

    # La distancia desde el nodo inicial hasta él mismo es 0
    distance[start] = 0

    # Cola de prioridad para seleccionar el nodo con la distancia mínima
    pq = [(0, start)]

    while pq:
        currentDistance, current = heapq.heappop(pq)

        if current == goal:
            # Se ha encontrado el nodo objetivo, reconstruir el camino
            path = []
            while current != -1:
                path.append(current)
                current = previous[current]
            return path[::-1]

        if currentDistance > distance[current]:
            # Se encontró un camino más corto hacia el nodo actual, ignorar este nodo
            continue

        # Explorar todas las conexiones del nodo actual
        for conn in graph[current]:
            next, weight = conn.destination, conn.weight

            # Actualizar la distancia mínima hasta el nodo next
            if currentDistance + weight < distance[next]:
                distance[next] = currentDistance + weight
                previous[next] = current
                heapq.heappush(pq, (distance[next], next))

    # No se encontró un camino desde el nodo inicial hasta el nodo objetivo
    return []

# Lectura de la entrada
n, m = map(int, input().split())

# Crear el grafo como una lista de adyacencia
graph = [[] for _ in range(n)]

# Leer las conexiones entre ubicaciones
for _ in range(m):
    u, v, w = map(int, input().split())

    # Agregar la conexión en ambos sentidos
    graph[u].append(Connection(v, w))
    graph[v].append(Connection(u, w))

start, goal = map(int, input().split())

# Encontrar el camino más corto desde la ubicación inicial hasta la ubicación objetivo
shortestPath = findShortestPath(start, goal, graph)

# Imprimir el resultado
if not shortestPath:
    print("No se encontró un camino desde la ubicación inicial hasta la ubicación objetivo")
else:
    print(*shortestPath)
