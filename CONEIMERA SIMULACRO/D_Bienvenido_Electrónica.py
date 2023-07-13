n = int(input())

for i in range(n):
    c, t = map(float, input().split())
    f = 1/(c*t/1000)
    print("{:.2f} Hz".format(f))
