def nivele(num):
    le = 0
    while num > 0:
        num //= 2
        le += 1
    return le + 1

n = int(input())

for i in range(n):
    a = int(input())
    print(nivele(a))
