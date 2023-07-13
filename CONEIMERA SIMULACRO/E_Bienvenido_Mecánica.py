def cmas(coor):
    n = len(coor)
    sumx = sum(y[0] for y in coor)
    sumy = sum(y[1] for y in coor)
    return sumx/n, sumy/n

n = int(input())
coor = []
for i in range(n):
    x, y = map(float, input().split())
    coor.append((x, y))

xx, yy = cmas(coor)
print(f"{xx:.3f} {yy:.3f}")
